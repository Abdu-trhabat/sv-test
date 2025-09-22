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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 signed long int var_1_4;
 unsigned char var_1_5;
 double var_1_6;
 double var_1_7;
 signed char var_1_8;
 signed char var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 1,
 8,
 -2,
 0,
 31.5,
 100000000000000.9,
 -4,
 5,
 10,
 5,
 1,
 1
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = (- 5) + (*(WrapperStruct00_var_1_3_Pointer));
 if (stepLocal_0 >= (*(WrapperStruct00_var_1_4_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (! (*(WrapperStruct00_var_1_5_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
 if (stepLocal_1 <= (*(WrapperStruct00_var_1_3_Pointer))) {
  if ((*(WrapperStruct00_var_1_1_Pointer))) {
   (*(WrapperStruct00_var_1_6_Pointer)) = (3.17 - ((((127.2) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? (127.2) : ((*(WrapperStruct00_var_1_7_Pointer))))));
  }
 }
 if ((*(WrapperStruct00_var_1_1_Pointer))) {
  if (((*(WrapperStruct00_var_1_7_Pointer)) >= 24.2) || (*(WrapperStruct00_var_1_5_Pointer))) {
   (*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) || (! (*(WrapperStruct00_var_1_13_Pointer))));
  } else {
   (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 }
 if (-25 >= (*(WrapperStruct00_var_1_3_Pointer))) {
  (*(WrapperStruct00_var_1_8_Pointer)) = (((((*(WrapperStruct00_var_1_9_Pointer))) < ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer)))));
 } else {
  if ((*(WrapperStruct00_var_1_10_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) {
   (*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) - 16);
  } else {
   if ((*(WrapperStruct00_var_1_12_Pointer))) {
    (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 126);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((- 5) + (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer))))) && (((*(WrapperStruct00_var_1_4_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (3.17 - ((((127.2) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? (127.2) : ((*(WrapperStruct00_var_1_7_Pointer)))))))) : 1) : 1)) && ((-25 >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (((((*(WrapperStruct00_var_1_9_Pointer))) < ((*(WrapperStruct00_var_1_10_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_10_Pointer))))))) : (((*(WrapperStruct00_var_1_10_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_11_Pointer)) - 16))) : ((*(WrapperStruct00_var_1_12_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_9_Pointer)))) : 1)))) && ((*(WrapperStruct00_var_1_1_Pointer)) ? ((((*(WrapperStruct00_var_1_7_Pointer)) >= 24.2) || (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_5_Pointer)) || (! (*(WrapperStruct00_var_1_13_Pointer)))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_13_Pointer)))))
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
