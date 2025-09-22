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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned short int var_1_2;
 unsigned short int var_1_3;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 signed long int var_1_9;
 signed long int var_1_10;
 signed short int var_1_11;
 signed short int var_1_12;
 signed short int var_1_13;
 float var_1_14;
 float var_1_15;
 float var_1_16;
 unsigned char var_1_17;
 unsigned char var_1_18;
 unsigned char var_1_19;
 unsigned char var_1_20;
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
 0,
 5,
 0,
 0,
 -64,
 -25,
 50,
 0,
 8,
 -128,
 -2,
 0.75,
 49.5,
 1000.25,
 25,
 64,
 0,
 128
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
unsigned char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
void initially(void) {
}
void step(void) {
 if ((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_2_Pointer))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_2_Pointer)) + (((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) + ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_7_Pointer)) = ((((-4) > ((((((128) > ((*(WrapperStruct00_var_1_2_Pointer)))) ? (128) : ((*(WrapperStruct00_var_1_2_Pointer))))) - (*(WrapperStruct00_var_1_9_Pointer))))) ? (-4) : ((((((128) > ((*(WrapperStruct00_var_1_2_Pointer)))) ? (128) : ((*(WrapperStruct00_var_1_2_Pointer))))) - (*(WrapperStruct00_var_1_9_Pointer))))));
 }
 (*(WrapperStruct00_var_1_11_Pointer)) = (((((*(WrapperStruct00_var_1_12_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))));
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_5_Pointer));
 if (stepLocal_0 && ((*(WrapperStruct00_var_1_7_Pointer)) != (*(WrapperStruct00_var_1_9_Pointer)))) {
  (*(WrapperStruct00_var_1_14_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) + ((((3.25f) > ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.25f) : ((*(WrapperStruct00_var_1_16_Pointer))))));
 }
 (*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
 (*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 (*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
 if ((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_19_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer)));
 } else {
  if ((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -268435455);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 268435456);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 536870911);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 536870911);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32766);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 32766);
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_16 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
 WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_18 <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_19_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))))) : (((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer)))))) && (((*(WrapperStruct00_var_1_3_Pointer)) < (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_2_Pointer)) + (((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) + ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) ((((-4) > ((((((128) > ((*(WrapperStruct00_var_1_2_Pointer)))) ? (128) : ((*(WrapperStruct00_var_1_2_Pointer))))) - (*(WrapperStruct00_var_1_9_Pointer))))) ? (-4) : ((((((128) > ((*(WrapperStruct00_var_1_2_Pointer)))) ? (128) : ((*(WrapperStruct00_var_1_2_Pointer))))) - (*(WrapperStruct00_var_1_9_Pointer)))))))))) && ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed short int) (((((*(WrapperStruct00_var_1_12_Pointer))) < ((*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_12_Pointer))) : ((*(WrapperStruct00_var_1_13_Pointer)))))))) && (((*(WrapperStruct00_var_1_5_Pointer)) && ((*(WrapperStruct00_var_1_7_Pointer)) != (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((float) ((*(WrapperStruct00_var_1_15_Pointer)) + ((((3.25f) > ((*(WrapperStruct00_var_1_16_Pointer)))) ? (3.25f) : ((*(WrapperStruct00_var_1_16_Pointer)))))))) : 1)) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_5_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer))))
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
