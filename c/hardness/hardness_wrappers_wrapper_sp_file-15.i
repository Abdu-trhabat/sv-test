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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch15Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 unsigned char var_1_2;
 unsigned char var_1_6;
 signed char var_1_7;
 unsigned long int var_1_8;
 unsigned long int var_1_9;
 signed long int var_1_10;
 double var_1_11;
 double var_1_12;
 double var_1_13;
 double var_1_14;
 double var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 -128,
 1,
 1,
 8,
 1,
 1885310857,
 -10,
 32.6,
 9.75,
 5.1,
 128.1,
 63.9
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
double* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int last_1_WrapperStruct00_var_1_10 = -10;
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_8_Pointer)) = ((1514707036u + (((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))))) - last_1_WrapperStruct00_var_1_10);
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = ((((last_1_WrapperStruct00_var_1_10) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? (last_1_WrapperStruct00_var_1_10) : ((*(WrapperStruct00_var_1_9_Pointer)))));
 }
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_8_Pointer)) + (((((*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer))))));
 }
 unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_10_Pointer));
 if (stepLocal_1 || ((~ (*(WrapperStruct00_var_1_10_Pointer))) >= (*(WrapperStruct00_var_1_10_Pointer)))) {
  if (stepLocal_0 < (*(WrapperStruct00_var_1_8_Pointer))) {
   if (! (*(WrapperStruct00_var_1_6_Pointer))) {
    (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 2;
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
 }
 if ((*(WrapperStruct00_var_1_10_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) {
  (*(WrapperStruct00_var_1_11_Pointer)) = ((*(WrapperStruct00_var_1_12_Pointer)) - ((((((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)))) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? (((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_15_Pointer))))));
 } else {
  (*(WrapperStruct00_var_1_11_Pointer)) = (((((*(WrapperStruct00_var_1_14_Pointer))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 1073741824);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) || ((~ (*(WrapperStruct00_var_1_10_Pointer))) >= (*(WrapperStruct00_var_1_10_Pointer)))) ? (((*(WrapperStruct00_var_1_10_Pointer)) < (*(WrapperStruct00_var_1_8_Pointer))) ? ((! (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_7_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) 2))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_7_Pointer))))) && ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned long int) ((1514707036u + (((((*(WrapperStruct00_var_1_9_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_9_Pointer))) : ((*(WrapperStruct00_var_1_9_Pointer)))))) - last_1_WrapperStruct00_var_1_10))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned long int) ((((last_1_WrapperStruct00_var_1_10) > ((*(WrapperStruct00_var_1_9_Pointer)))) ? (last_1_WrapperStruct00_var_1_10) : ((*(WrapperStruct00_var_1_9_Pointer))))))))) && ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_8_Pointer)) + (((((*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer)))))))) : 1)) && (((*(WrapperStruct00_var_1_10_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) ((*(WrapperStruct00_var_1_12_Pointer)) - ((((((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)))) > ((*(WrapperStruct00_var_1_15_Pointer)))) ? (((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_15_Pointer)))))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (((((*(WrapperStruct00_var_1_14_Pointer))) > ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer))))))))
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
