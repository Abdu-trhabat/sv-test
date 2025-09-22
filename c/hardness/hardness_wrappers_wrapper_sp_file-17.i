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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch17Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 double var_1_1;
 unsigned char var_1_2;
 double var_1_3;
 double var_1_4;
 double var_1_5;
 signed short int var_1_6;
 double var_1_7;
 double var_1_8;
 signed short int var_1_9;
 signed short int var_1_10;
 unsigned char var_1_11;
 unsigned long int var_1_12;
 float var_1_13;
 double var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 unsigned char var_1_17;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 10000000.8,
 0,
 16.2,
 7.5,
 49.6,
 -10,
 4.5,
 9.4,
 128,
 128,
 0,
 100,
 128.4,
 3.5,
 16,
 2,
 32
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
double* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_3_Pointer)) + (((((*(WrapperStruct00_var_1_4_Pointer))) < ((49.5 + (*(WrapperStruct00_var_1_5_Pointer))))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((49.5 + (*(WrapperStruct00_var_1_5_Pointer)))))));
 }
 if ((- ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))) <= (*(WrapperStruct00_var_1_3_Pointer))) {
  (*(WrapperStruct00_var_1_6_Pointer)) = ((8 + (*(WrapperStruct00_var_1_9_Pointer))) - (*(WrapperStruct00_var_1_10_Pointer)));
 } else {
  if ((*(WrapperStruct00_var_1_2_Pointer))) {
   if ((*(WrapperStruct00_var_1_11_Pointer))) {
    (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
  }
 }
 (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 if ((*(WrapperStruct00_var_1_7_Pointer)) < ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = (((((*(WrapperStruct00_var_1_4_Pointer))) > (((((((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? (((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : (((((((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? (((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) : ((*(WrapperStruct00_var_1_3_Pointer))))))));
 }
 signed short int stepLocal_1 = (*(WrapperStruct00_var_1_9_Pointer));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer));
 if (stepLocal_1 >= (*(WrapperStruct00_var_1_10_Pointer))) {
  if (stepLocal_0 >= (*(WrapperStruct00_var_1_12_Pointer))) {
   (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
  } else {
   (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_3 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_5 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((*(WrapperStruct00_var_1_3_Pointer)) + (((((*(WrapperStruct00_var_1_4_Pointer))) < ((49.5 + (*(WrapperStruct00_var_1_5_Pointer))))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((49.5 + (*(WrapperStruct00_var_1_5_Pointer))))))))) : 1) && (((- ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) ((8 + (*(WrapperStruct00_var_1_9_Pointer))) - (*(WrapperStruct00_var_1_10_Pointer))))) : ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_11_Pointer)) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_9_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_10_Pointer))))))) && ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_9_Pointer))))) && (((*(WrapperStruct00_var_1_7_Pointer)) < ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer)))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) (((((*(WrapperStruct00_var_1_4_Pointer))) > (((((((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? (((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) : ((*(WrapperStruct00_var_1_3_Pointer))))))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : (((((((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) > ((*(WrapperStruct00_var_1_3_Pointer)))) ? (((((127.4f) > ((*(WrapperStruct00_var_1_5_Pointer)))) ? (127.4f) : ((*(WrapperStruct00_var_1_5_Pointer)))))) : ((*(WrapperStruct00_var_1_3_Pointer)))))))))) : 1)) && (((*(WrapperStruct00_var_1_9_Pointer)) >= (*(WrapperStruct00_var_1_10_Pointer))) ? ((((*(WrapperStruct00_var_1_9_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))) >= (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_16_Pointer)))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_17_Pointer))))) : 1)
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
