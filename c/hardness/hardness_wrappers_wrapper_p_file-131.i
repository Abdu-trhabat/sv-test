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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 0;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 8;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 64;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned long int var_1_4 = 64;
unsigned long int* var_1_4_Pointer = &(var_1_4);
unsigned long int var_1_5 = 50;
unsigned long int* var_1_5_Pointer = &(var_1_5);
unsigned long int var_1_6 = 16;
unsigned long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 0;
unsigned char* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 1000;
signed short int* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 10;
signed short int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 5;
signed short int* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = -2;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = -16;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = 25;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 32;
signed char* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 32;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 62289;
unsigned short int* var_1_17_Pointer = &(var_1_17);
unsigned short int var_1_18 = 8;
unsigned short int* var_1_18_Pointer = &(var_1_18);
unsigned short int var_1_19 = 2;
unsigned short int* var_1_19_Pointer = &(var_1_19);
unsigned short int var_1_20 = 2;
unsigned short int* var_1_20_Pointer = &(var_1_20);
void initially(void) {
}
void step(void) {
 if ((~ ((*(var_1_2_Pointer)) * (*(var_1_3_Pointer)))) < ((*(var_1_4_Pointer)) / (((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))) {
  (*(var_1_1_Pointer)) = (! ((*(var_1_7_Pointer)) || (*(var_1_8_Pointer))));
 }
 unsigned long int stepLocal_0 = (*(var_1_5_Pointer));
 if (stepLocal_0 == (- (*(var_1_3_Pointer)))) {
  (*(var_1_9_Pointer)) = ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)));
 } else {
  (*(var_1_9_Pointer)) = (*(var_1_10_Pointer));
 }
 unsigned long int stepLocal_1 = (*(var_1_4_Pointer));
 if (stepLocal_1 >= (*(var_1_5_Pointer))) {
  (*(var_1_12_Pointer)) = (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer)))));
 } else {
  (*(var_1_12_Pointer)) = (((((*(var_1_13_Pointer))) > ((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer))))))) ? ((*(var_1_13_Pointer))) : ((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer))))))));
 }
 unsigned long int stepLocal_2 = ((*(var_1_2_Pointer)) / (*(var_1_6_Pointer))) + (*(var_1_5_Pointer));
 if ((*(var_1_14_Pointer)) <= stepLocal_2) {
  (*(var_1_16_Pointer)) = ((*(var_1_17_Pointer)) - ((*(var_1_18_Pointer)) + (((((*(var_1_19_Pointer))) < 0 ) ? -((*(var_1_19_Pointer))) : ((*(var_1_19_Pointer)))))));
 } else {
  (*(var_1_16_Pointer)) = (*(var_1_20_Pointer));
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967295);
 assume_abort_if_not(var_1_6 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= -127);
 assume_abort_if_not(var_1_14 <= 126);
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -127);
 assume_abort_if_not(var_1_15 <= 126);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 32767);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 16384);
 var_1_19 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 16383);
 var_1_20 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((~ ((*(var_1_2_Pointer)) * (*(var_1_3_Pointer)))) < ((*(var_1_4_Pointer)) / (((((*(var_1_5_Pointer))) > ((*(var_1_6_Pointer)))) ? ((*(var_1_5_Pointer))) : ((*(var_1_6_Pointer))))))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (! ((*(var_1_7_Pointer)) || (*(var_1_8_Pointer)))))) : 1) && (((*(var_1_5_Pointer)) == (- (*(var_1_3_Pointer)))) ? ((*(var_1_9_Pointer)) == ((signed short int) ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) : ((*(var_1_9_Pointer)) == ((signed short int) (*(var_1_10_Pointer)))))) && (((*(var_1_4_Pointer)) >= (*(var_1_5_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed char) (((((*(var_1_13_Pointer))) < ((*(var_1_14_Pointer)))) ? ((*(var_1_13_Pointer))) : ((*(var_1_14_Pointer))))))) : ((*(var_1_12_Pointer)) == ((signed char) (((((*(var_1_13_Pointer))) > ((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer))))))) ? ((*(var_1_13_Pointer))) : ((((((*(var_1_14_Pointer))) > ((*(var_1_15_Pointer)))) ? ((*(var_1_14_Pointer))) : ((*(var_1_15_Pointer)))))))))))) && (((*(var_1_14_Pointer)) <= (((*(var_1_2_Pointer)) / (*(var_1_6_Pointer))) + (*(var_1_5_Pointer)))) ? ((*(var_1_16_Pointer)) == ((unsigned short int) ((*(var_1_17_Pointer)) - ((*(var_1_18_Pointer)) + (((((*(var_1_19_Pointer))) < 0 ) ? -((*(var_1_19_Pointer))) : ((*(var_1_19_Pointer))))))))) : ((*(var_1_16_Pointer)) == ((unsigned short int) (*(var_1_20_Pointer)))))
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
