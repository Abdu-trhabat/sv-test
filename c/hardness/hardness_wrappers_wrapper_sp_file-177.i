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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned short int var_1_2;
 unsigned short int var_1_3;
 signed long int var_1_4;
 double var_1_5;
 double var_1_6;
 double var_1_7;
 unsigned short int var_1_8;
 unsigned short int var_1_9;
 unsigned short int var_1_10;
 double var_1_11;
 unsigned short int var_1_12;
 signed short int var_1_13;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32.5,
 128,
 8,
 -64,
 127.5,
 31.124,
 15.125,
 5,
 256,
 5,
 1000000000.6,
 54889,
 -1
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_2 = (((5) < (((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer))))) ? (5) : (((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))));
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_2_Pointer)) * ((*(WrapperStruct00_var_1_3_Pointer)) * 50);
 unsigned short int stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
 if (stepLocal_2 <= (*(WrapperStruct00_var_1_4_Pointer))) {
  if ((*(WrapperStruct00_var_1_2_Pointer)) > stepLocal_0) {
   if ((- (*(WrapperStruct00_var_1_4_Pointer))) == stepLocal_1) {
    (*(WrapperStruct00_var_1_1_Pointer)) = ((((((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? (((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer)))));
   }
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
 }
 if (((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer))) >= -32) {
  (*(WrapperStruct00_var_1_8_Pointer)) = (((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))) + 64);
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
 unsigned short int stepLocal_4 = (*(WrapperStruct00_var_1_9_Pointer));
 unsigned short int stepLocal_3 = (*(WrapperStruct00_var_1_8_Pointer));
 if ((*(WrapperStruct00_var_1_10_Pointer)) >= stepLocal_3) {
  if (stepLocal_4 < (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))) << (*(WrapperStruct00_var_1_8_Pointer)))) {
   (*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
  }
 }
 (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 16384);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 16383);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 32767);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((5) < (((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer))))) ? (5) : (((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))))) <= (*(WrapperStruct00_var_1_4_Pointer))) ? (((*(WrapperStruct00_var_1_2_Pointer)) > (*(WrapperStruct00_var_1_3_Pointer))) ? (((- (*(WrapperStruct00_var_1_4_Pointer))) == ((*(WrapperStruct00_var_1_2_Pointer)) * ((*(WrapperStruct00_var_1_3_Pointer)) * 50))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((((((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) > ((*(WrapperStruct00_var_1_7_Pointer)))) ? (((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_7_Pointer))))))) : 1) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_6_Pointer))))) && ((((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_4_Pointer))) >= -32) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_10_Pointer))) + 64))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_9_Pointer)))))) && (((*(WrapperStruct00_var_1_10_Pointer)) >= (*(WrapperStruct00_var_1_8_Pointer))) ? (((*(WrapperStruct00_var_1_9_Pointer)) < (((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))) << (*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((double) (*(WrapperStruct00_var_1_7_Pointer)))) : 1) : 1)) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_10_Pointer))))
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
