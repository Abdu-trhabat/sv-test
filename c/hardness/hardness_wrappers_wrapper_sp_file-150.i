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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch150Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 signed long int var_1_4;
 signed long int var_1_5;
 signed long int var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 signed char var_1_10;
 unsigned char var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed short int var_1_14;
 signed short int var_1_15;
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
 1238955036,
 200,
 -32,
 16,
 64,
 -64,
 -5,
 0,
 8,
 1,
 -50,
 5,
 64,
 -50
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_6_Pointer));
 signed long int stepLocal_0 = ((*(WrapperStruct00_var_1_5_Pointer)) % (*(WrapperStruct00_var_1_6_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer));
 if (((*(WrapperStruct00_var_1_2_Pointer)) * (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)))))) <= stepLocal_0) {
  if (stepLocal_1 >= (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer)))))) {
   (*(WrapperStruct00_var_1_1_Pointer)) = ((((*(WrapperStruct00_var_1_5_Pointer)) % (*(WrapperStruct00_var_1_6_Pointer))) >= (-4 + (*(WrapperStruct00_var_1_2_Pointer)))) && (*(WrapperStruct00_var_1_9_Pointer)));
  } else {
   (*(WrapperStruct00_var_1_1_Pointer)) = 1;
  }
 } else {
  (*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
 }
 unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_11_Pointer));
 if ((*(WrapperStruct00_var_1_9_Pointer))) {
  if ((*(WrapperStruct00_var_1_1_Pointer)) || stepLocal_2) {
   (*(WrapperStruct00_var_1_10_Pointer)) = ((((((*(WrapperStruct00_var_1_12_Pointer)) + (-5 + (*(WrapperStruct00_var_1_13_Pointer))))) < (-4)) ? (((*(WrapperStruct00_var_1_12_Pointer)) + (-5 + (*(WrapperStruct00_var_1_13_Pointer))))) : (-4)));
  } else {
   (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 }
 (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
 signed long int stepLocal_3 = (*(WrapperStruct00_var_1_8_Pointer));
 if (stepLocal_3 < ((*(WrapperStruct00_var_1_4_Pointer)) * -8)) {
  (*(WrapperStruct00_var_1_15_Pointer)) = 2;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1073741823);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 0);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -63);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 63);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -31);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 31);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((((*(WrapperStruct00_var_1_2_Pointer)) * (((((*(WrapperStruct00_var_1_4_Pointer))) < ((*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer))) : ((*(WrapperStruct00_var_1_3_Pointer)))))) <= (((*(WrapperStruct00_var_1_5_Pointer)) % (*(WrapperStruct00_var_1_6_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer)))) ? (((*(WrapperStruct00_var_1_6_Pointer)) >= (((((*(WrapperStruct00_var_1_8_Pointer))) > ((*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer))) : ((*(WrapperStruct00_var_1_2_Pointer)))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((((*(WrapperStruct00_var_1_5_Pointer)) % (*(WrapperStruct00_var_1_6_Pointer))) >= (-4 + (*(WrapperStruct00_var_1_2_Pointer)))) && (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) 1))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_9_Pointer))))) && ((*(WrapperStruct00_var_1_9_Pointer)) ? (((*(WrapperStruct00_var_1_1_Pointer)) || (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) ((((((*(WrapperStruct00_var_1_12_Pointer)) + (-5 + (*(WrapperStruct00_var_1_13_Pointer))))) < (-4)) ? (((*(WrapperStruct00_var_1_12_Pointer)) + (-5 + (*(WrapperStruct00_var_1_13_Pointer))))) : (-4))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_12_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_13_Pointer)))))) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_12_Pointer))))) && (((*(WrapperStruct00_var_1_8_Pointer)) < ((*(WrapperStruct00_var_1_4_Pointer)) * -8)) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) 2)) : 1)
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
