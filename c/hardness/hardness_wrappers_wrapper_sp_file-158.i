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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 double var_1_2;
 double var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 unsigned char var_1_8;
 unsigned char var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
 unsigned char var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned short int var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 64,
 15.5,
 9.3,
 0,
 64,
 -10000,
 0,
 2,
 0,
 128,
 16,
 32,
 2,
 100,
 32,
 32,
 32
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned short int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 }
 if (! (*(WrapperStruct00_var_1_7_Pointer))) {
  (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 }
 if ((*(WrapperStruct00_var_1_7_Pointer)) || (*(WrapperStruct00_var_1_9_Pointer))) {
  (*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer)));
 } else {
  if (-1000000000 < (*(WrapperStruct00_var_1_4_Pointer))) {
   (*(WrapperStruct00_var_1_8_Pointer)) = (128 - (((*(WrapperStruct00_var_1_12_Pointer)) + 50) - (32 - (*(WrapperStruct00_var_1_13_Pointer)))));
  } else {
   (*(WrapperStruct00_var_1_8_Pointer)) = (((*(WrapperStruct00_var_1_14_Pointer)) + ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))) - (*(WrapperStruct00_var_1_12_Pointer)));
  }
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer));
 signed long int stepLocal_0 = -5;
 if ((*(WrapperStruct00_var_1_7_Pointer))) {
  if ((*(WrapperStruct00_var_1_14_Pointer)) <= stepLocal_1) {
   (*(WrapperStruct00_var_1_17_Pointer)) = (((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)))));
  } else {
   if (stepLocal_0 > (*(WrapperStruct00_var_1_13_Pointer))) {
    (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
   }
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 254);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 254);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 31);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 64);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 31);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 32);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 64);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 32);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_5_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer))))) && ((! (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_7_Pointer)) || (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) : ((-1000000000 < (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (128 - (((*(WrapperStruct00_var_1_12_Pointer)) + 50) - (32 - (*(WrapperStruct00_var_1_13_Pointer))))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_14_Pointer)) + ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))) - (*(WrapperStruct00_var_1_12_Pointer)))))))) && ((*(WrapperStruct00_var_1_7_Pointer)) ? (((*(WrapperStruct00_var_1_14_Pointer)) <= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned short int) (((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_6_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer))))))) : ((-5 > (*(WrapperStruct00_var_1_13_Pointer))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_4_Pointer)))) : 1)) : 1)
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
