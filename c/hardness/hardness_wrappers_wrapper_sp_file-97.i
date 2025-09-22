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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch97Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed short int var_1_1;
 signed short int var_1_7;
 signed short int var_1_8;
 signed short int var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 unsigned char var_1_13;
 float var_1_14;
 unsigned char var_1_15;
 unsigned char var_1_16;
 float var_1_17;
 unsigned short int var_1_18;
 unsigned short int var_1_19;
 float var_1_20;
 float var_1_21;
 signed short int var_1_22;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 16,
 32,
 20113,
 100,
 100,
 -1,
 16,
 1,
 7.5,
 0,
 1,
 255.8,
 10,
 256,
 32.5,
 127.4,
 128
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
float* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned short int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
float* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
float* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
signed short int* WrapperStruct00_var_1_22_Pointer = &(WrapperStruct00.var_1_22);
void initially(void) {
}
void step(void) {
 if (127.5f > (*(WrapperStruct00_var_1_14_Pointer))) {
  (*(WrapperStruct00_var_1_13_Pointer)) = ((*(WrapperStruct00_var_1_15_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_13_Pointer)) = (((*(WrapperStruct00_var_1_14_Pointer)) >= (*(WrapperStruct00_var_1_17_Pointer))) || (*(WrapperStruct00_var_1_15_Pointer)));
 }
 (*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
 (*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_21_Pointer));
 (*(WrapperStruct00_var_1_22_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 if ((*(WrapperStruct00_var_1_18_Pointer)) == (*(WrapperStruct00_var_1_7_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) + ((*(WrapperStruct00_var_1_12_Pointer)) + -25));
 } else {
  if (((32 * -25) | (*(WrapperStruct00_var_1_22_Pointer))) >= (*(WrapperStruct00_var_1_11_Pointer))) {
   if ((*(WrapperStruct00_var_1_13_Pointer))) {
    (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
   }
  }
 }
 if ((*(WrapperStruct00_var_1_13_Pointer))) {
  if ((*(WrapperStruct00_var_1_10_Pointer)) > (*(WrapperStruct00_var_1_22_Pointer))) {
   if ((*(WrapperStruct00_var_1_13_Pointer))) {
    (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) - ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer))));
   } else {
    (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 8;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= 16383);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 32);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
 WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_15 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
 WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_16 <= 1);
 WrapperStruct00.var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
 WrapperStruct00.var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_19 <= 65534);
 WrapperStruct00.var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_21 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_13_Pointer)) ? (((*(WrapperStruct00_var_1_10_Pointer)) > (*(WrapperStruct00_var_1_22_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_7_Pointer)) - ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_9_Pointer)))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_18_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 8))) : 1) && (((*(WrapperStruct00_var_1_18_Pointer)) == (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_11_Pointer)) + ((*(WrapperStruct00_var_1_12_Pointer)) + -25)))) : ((((32 * -25) | (*(WrapperStruct00_var_1_22_Pointer))) >= (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_12_Pointer)))) : 1) : 1))) && ((127.5f > (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_15_Pointer)) && (*(WrapperStruct00_var_1_16_Pointer))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_14_Pointer)) >= (*(WrapperStruct00_var_1_17_Pointer))) || (*(WrapperStruct00_var_1_15_Pointer))))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((float) (*(WrapperStruct00_var_1_21_Pointer))))) && ((*(WrapperStruct00_var_1_22_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_12_Pointer))))
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
