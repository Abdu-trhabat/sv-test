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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch178Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
signed long int var_1_5 = -1;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 2;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 1;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 8;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 1;
unsigned long int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_12 = 24832;
unsigned short int* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 24891;
unsigned short int* var_1_13_Pointer = &(var_1_13);
signed short int var_1_14 = 256;
signed short int* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 128;
signed short int* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 4;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 0;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 64;
unsigned char* var_1_18_Pointer = &(var_1_18);
signed short int var_1_19 = 256;
signed short int* var_1_19_Pointer = &(var_1_19);
signed short int var_1_20 = -25;
signed short int* var_1_20_Pointer = &(var_1_20);
unsigned char var_1_21 = 25;
unsigned char* var_1_21_Pointer = &(var_1_21);
void initially(void) {
}
void step(void) {
 (*(var_1_16_Pointer)) = ((*(var_1_17_Pointer)) + (*(var_1_18_Pointer)));
 (*(var_1_19_Pointer)) = (*(var_1_17_Pointer));
 (*(var_1_20_Pointer)) = (*(var_1_18_Pointer));
 (*(var_1_21_Pointer)) = (*(var_1_17_Pointer));
 unsigned long int stepLocal_1 = (*(var_1_10_Pointer));
 unsigned long int stepLocal_0 = (((((*(var_1_5_Pointer)) * (*(var_1_10_Pointer)))) > ((*(var_1_20_Pointer)))) ? (((*(var_1_5_Pointer)) * (*(var_1_10_Pointer)))) : ((*(var_1_20_Pointer))));
 if (256u <= stepLocal_0) {
  if ((*(var_1_19_Pointer)) < stepLocal_1) {
   (*(var_1_9_Pointer)) = (((*(var_1_12_Pointer)) + (*(var_1_13_Pointer))) - (*(var_1_20_Pointer)));
  } else {
   (*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
  }
 }
 if ((*(var_1_8_Pointer))) {
  (*(var_1_14_Pointer)) = (*(var_1_21_Pointer));
 } else {
  (*(var_1_14_Pointer)) = (((((*(var_1_16_Pointer))) < (((*(var_1_21_Pointer)) - (*(var_1_15_Pointer))))) ? ((*(var_1_16_Pointer))) : (((*(var_1_21_Pointer)) - (*(var_1_15_Pointer))))));
 }
 if (! (*(var_1_2_Pointer))) {
  if (! (*(var_1_2_Pointer))) {
   (*(var_1_1_Pointer)) = ((((*(var_1_21_Pointer)) + (*(var_1_9_Pointer))) > ((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) || (*(var_1_7_Pointer)));
  } else {
   (*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 4294967295);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 16383);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 16384);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32766);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((! (*(var_1_2_Pointer))) ? ((! (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((((*(var_1_21_Pointer)) + (*(var_1_9_Pointer))) > ((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) || (*(var_1_7_Pointer))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_8_Pointer))))) : 1) && ((256u <= ((((((*(var_1_5_Pointer)) * (*(var_1_10_Pointer)))) > ((*(var_1_20_Pointer)))) ? (((*(var_1_5_Pointer)) * (*(var_1_10_Pointer)))) : ((*(var_1_20_Pointer)))))) ? (((*(var_1_19_Pointer)) < (*(var_1_10_Pointer))) ? ((*(var_1_9_Pointer)) == ((unsigned short int) (((*(var_1_12_Pointer)) + (*(var_1_13_Pointer))) - (*(var_1_20_Pointer))))) : ((*(var_1_9_Pointer)) == ((unsigned short int) (*(var_1_12_Pointer))))) : 1)) && ((*(var_1_8_Pointer)) ? ((*(var_1_14_Pointer)) == ((signed short int) (*(var_1_21_Pointer)))) : ((*(var_1_14_Pointer)) == ((signed short int) (((((*(var_1_16_Pointer))) < (((*(var_1_21_Pointer)) - (*(var_1_15_Pointer))))) ? ((*(var_1_16_Pointer))) : (((*(var_1_21_Pointer)) - (*(var_1_15_Pointer)))))))))) && ((*(var_1_16_Pointer)) == ((unsigned char) ((*(var_1_17_Pointer)) + (*(var_1_18_Pointer)))))) && ((*(var_1_19_Pointer)) == ((signed short int) (*(var_1_17_Pointer))))) && ((*(var_1_20_Pointer)) == ((signed short int) (*(var_1_18_Pointer))))) && ((*(var_1_21_Pointer)) == ((unsigned char) (*(var_1_17_Pointer))))
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
