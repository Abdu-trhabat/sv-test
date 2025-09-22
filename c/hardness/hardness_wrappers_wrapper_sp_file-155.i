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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned short int var_1_1;
 unsigned short int var_1_4;
 unsigned short int var_1_5;
 signed long int var_1_6;
 unsigned char var_1_7;
 signed char var_1_8;
 signed long int var_1_9;
 signed char var_1_10;
 signed char var_1_11;
 signed char var_1_12;
 unsigned char var_1_13;
 signed char var_1_14;
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
 10,
 1000,
 64,
 64,
 1,
 -64,
 1623884356,
 16,
 50,
 0,
 1,
 -128,
 -25
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int last_1_WrapperStruct00_var_1_6 = 64;
signed short int last_1_WrapperStruct00_var_1_15 = -25;
void initially(void) {
}
void step(void) {
 if (last_1_WrapperStruct00_var_1_6 < last_1_WrapperStruct00_var_1_15) {
  (*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + ((*(WrapperStruct00_var_1_5_Pointer)) + 64));
 }
 (*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
 (*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
 (*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
 if (last_1_WrapperStruct00_var_1_6 > (*(WrapperStruct00_var_1_15_Pointer))) {
  if ((*(WrapperStruct00_var_1_5_Pointer)) > last_1_WrapperStruct00_var_1_6) {
   if ((*(WrapperStruct00_var_1_4_Pointer)) != (16 | (*(WrapperStruct00_var_1_5_Pointer)))) {
    if (! (*(WrapperStruct00_var_1_7_Pointer))) {
     (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
    } else {
     (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
    }
   }
  } else {
   (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
  }
 } else {
  (*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
 }
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_6_Pointer));
 if (stepLocal_0 == ((*(WrapperStruct00_var_1_1_Pointer)) - ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))))) {
  (*(WrapperStruct00_var_1_8_Pointer)) = ((((((((-16) > (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) ? (-16) : (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? (((((-16) > (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) ? (-16) : (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer)))));
 } else {
  (*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 16384);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= -127);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
 last_1_WrapperStruct00_var_1_15 = WrapperStruct00.var_1_15;
}
int property(void) {
 return ((((((last_1_WrapperStruct00_var_1_6 < last_1_WrapperStruct00_var_1_15) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_4_Pointer)) + ((*(WrapperStruct00_var_1_5_Pointer)) + 64)))) : 1) && ((last_1_WrapperStruct00_var_1_6 > (*(WrapperStruct00_var_1_15_Pointer))) ? (((*(WrapperStruct00_var_1_5_Pointer)) > last_1_WrapperStruct00_var_1_6) ? (((*(WrapperStruct00_var_1_4_Pointer)) != (16 | (*(WrapperStruct00_var_1_5_Pointer)))) ? ((! (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer)))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_15_Pointer))))) : 1) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_1_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_4_Pointer)))))) && (((*(WrapperStruct00_var_1_6_Pointer)) == ((*(WrapperStruct00_var_1_1_Pointer)) - ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) ((((((((-16) > (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) ? (-16) : (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))))) < ((*(WrapperStruct00_var_1_12_Pointer)))) ? (((((-16) > (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))) ? (-16) : (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer))))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_10_Pointer)))))) && ((*(WrapperStruct00_var_1_13_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer))))) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_11_Pointer))))) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_5_Pointer))))
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
