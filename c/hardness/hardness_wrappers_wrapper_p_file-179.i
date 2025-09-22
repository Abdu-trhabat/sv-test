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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 8.8;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 127.25;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 63.5;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 1.974;
double* var_1_6_Pointer = &(var_1_6);
double var_1_7 = 15.75;
double* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 10.25;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 9.5;
double* var_1_9_Pointer = &(var_1_9);
unsigned short int var_1_10 = 32;
unsigned short int* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 200;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 1;
unsigned short int* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 32.4;
double* var_1_13_Pointer = &(var_1_13);
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_0 = (*(var_1_2_Pointer));
 if (stepLocal_0 && (! (*(var_1_3_Pointer)))) {
  (*(var_1_1_Pointer)) = ((((((*(var_1_4_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) + 7.5);
 }
 if ((*(var_1_1_Pointer)) > ((*(var_1_4_Pointer)) * (*(var_1_5_Pointer)))) {
  if ((*(var_1_1_Pointer)) <= (*(var_1_5_Pointer))) {
   if ((*(var_1_5_Pointer)) > (*(var_1_4_Pointer))) {
    (*(var_1_6_Pointer)) = ((*(var_1_4_Pointer)) + ((((((*(var_1_7_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))) - (*(var_1_9_Pointer))));
   } else {
    (*(var_1_6_Pointer)) = (((((*(var_1_7_Pointer))) < 0 ) ? -((*(var_1_7_Pointer))) : ((*(var_1_7_Pointer)))));
   }
  } else {
   (*(var_1_6_Pointer)) = (*(var_1_8_Pointer));
  }
 } else {
  (*(var_1_6_Pointer)) = (*(var_1_4_Pointer));
 }
 if ((*(var_1_5_Pointer)) > (*(var_1_8_Pointer))) {
  (*(var_1_10_Pointer)) = (((29089 - (*(var_1_11_Pointer))) - 8) + 16);
 } else {
  (*(var_1_10_Pointer)) = (((((*(var_1_11_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer)))));
 }
 (*(var_1_13_Pointer)) = (*(var_1_7_Pointer));
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 8192);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(var_1_2_Pointer)) && (! (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((double) ((((((*(var_1_4_Pointer))) < ((*(var_1_5_Pointer)))) ? ((*(var_1_4_Pointer))) : ((*(var_1_5_Pointer))))) + 7.5))) : 1) && (((*(var_1_1_Pointer)) > ((*(var_1_4_Pointer)) * (*(var_1_5_Pointer)))) ? (((*(var_1_1_Pointer)) <= (*(var_1_5_Pointer))) ? (((*(var_1_5_Pointer)) > (*(var_1_4_Pointer))) ? ((*(var_1_6_Pointer)) == ((double) ((*(var_1_4_Pointer)) + ((((((*(var_1_7_Pointer))) > ((*(var_1_8_Pointer)))) ? ((*(var_1_7_Pointer))) : ((*(var_1_8_Pointer))))) - (*(var_1_9_Pointer)))))) : ((*(var_1_6_Pointer)) == ((double) (((((*(var_1_7_Pointer))) < 0 ) ? -((*(var_1_7_Pointer))) : ((*(var_1_7_Pointer)))))))) : ((*(var_1_6_Pointer)) == ((double) (*(var_1_8_Pointer))))) : ((*(var_1_6_Pointer)) == ((double) (*(var_1_4_Pointer)))))) && (((*(var_1_5_Pointer)) > (*(var_1_8_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned short int) (((29089 - (*(var_1_11_Pointer))) - 8) + 16))) : ((*(var_1_10_Pointer)) == ((unsigned short int) (((((*(var_1_11_Pointer))) < ((*(var_1_12_Pointer)))) ? ((*(var_1_11_Pointer))) : ((*(var_1_12_Pointer))))))))) && ((*(var_1_13_Pointer)) == ((double) (*(var_1_7_Pointer))))
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
