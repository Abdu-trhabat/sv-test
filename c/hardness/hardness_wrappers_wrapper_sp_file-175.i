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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 unsigned char var_1_7;
 float var_1_8;
 float var_1_9;
 unsigned char var_1_10;
 unsigned char var_1_11;
 signed char var_1_12;
 unsigned short int var_1_13;
 signed char var_1_14;
 signed char var_1_15;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 32,
 32,
 64,
 128,
 8,
 32,
 31.625,
 99999.9,
 0,
 1,
 -1,
 1,
 -5,
 -16
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char last_1_WrapperStruct00_var_1_1 = 32;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
 if (last_1_WrapperStruct00_var_1_1 > stepLocal_0) {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) - (((((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))))));
 }
 (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 if (((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer))))) + (*(WrapperStruct00_var_1_1_Pointer))) > (*(WrapperStruct00_var_1_6_Pointer))) {
  (*(WrapperStruct00_var_1_10_Pointer)) = (! (*(WrapperStruct00_var_1_11_Pointer)));
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = 0;
 }
 if (((~ (*(WrapperStruct00_var_1_6_Pointer))) >= (*(WrapperStruct00_var_1_7_Pointer))) && (*(WrapperStruct00_var_1_10_Pointer))) {
  if ((*(WrapperStruct00_var_1_13_Pointer)) <= ((((200) > (8)) ? (200) : (8)))) {
   if ((*(WrapperStruct00_var_1_10_Pointer))) {
    (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
   }
  } else {
   (*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)));
  }
 } else {
  (*(WrapperStruct00_var_1_12_Pointer)) = ((((((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? (((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)))));
 }
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 254);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 127);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 64);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
 assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 65535);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}
int property(void) {
 return (((((last_1_WrapperStruct00_var_1_1 > (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_5_Pointer)) - (((((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) < 0 ) ? -((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))) : ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))))))))) && ((*(WrapperStruct00_var_1_8_Pointer)) == ((float) (*(WrapperStruct00_var_1_9_Pointer))))) && ((((((((*(WrapperStruct00_var_1_1_Pointer))) < ((*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer))) : ((*(WrapperStruct00_var_1_7_Pointer))))) + (*(WrapperStruct00_var_1_1_Pointer))) > (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_11_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) 0)))) && ((((~ (*(WrapperStruct00_var_1_6_Pointer))) >= (*(WrapperStruct00_var_1_7_Pointer))) && (*(WrapperStruct00_var_1_10_Pointer))) ? (((*(WrapperStruct00_var_1_13_Pointer)) <= ((((200) > (8)) ? (200) : (8)))) ? ((*(WrapperStruct00_var_1_10_Pointer)) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_6_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer)))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) ((((((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) > ((*(WrapperStruct00_var_1_14_Pointer)))) ? (((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer))))))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_14_Pointer))))
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
