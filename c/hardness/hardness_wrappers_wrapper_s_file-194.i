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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed char var_1_1;
 unsigned char var_1_2;
 unsigned long int var_1_3;
 unsigned long int var_1_4;
 unsigned short int var_1_5;
 unsigned short int var_1_6;
 signed long int var_1_7;
 signed char var_1_8;
 signed long int var_1_9;
 unsigned char var_1_10;
 unsigned short int var_1_11;
 signed char var_1_12;
 signed char var_1_13;
 signed char var_1_14;
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
 0,
 32,
 8,
 256,
 0,
 10,
 -100,
 1,
 0,
 64,
 -50,
 32,
 2
};
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_2 = WrapperStruct00.var_1_2;
 signed long int stepLocal_1 = WrapperStruct00.var_1_5 / ((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_11)));
 if (stepLocal_2 && WrapperStruct00.var_1_10) {
  WrapperStruct00.var_1_9 = WrapperStruct00.var_1_6;
 } else {
  if (WrapperStruct00.var_1_10) {
   if (WrapperStruct00.var_1_6 >= stepLocal_1) {
    WrapperStruct00.var_1_9 = WrapperStruct00.var_1_8;
   }
  }
 }
 if (WrapperStruct00.var_1_2) {
  if (WrapperStruct00.var_1_7 > (WrapperStruct00.var_1_8 | ((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_3))))) {
   if ((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14) < (WrapperStruct00.var_1_8 / ((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_11))))) {
    WrapperStruct00.var_1_12 = WrapperStruct00.var_1_8;
   } else {
    WrapperStruct00.var_1_12 = 8;
   }
  } else {
   WrapperStruct00.var_1_12 = WrapperStruct00.var_1_8;
  }
 }
 unsigned char stepLocal_0 = (WrapperStruct00.var_1_9 % WrapperStruct00.var_1_7) >= WrapperStruct00.var_1_9;
 if (WrapperStruct00.var_1_2) {
  if ((WrapperStruct00.var_1_3 == WrapperStruct00.var_1_4) && stepLocal_0) {
   WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8)));
  }
 } else {
  WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 65535);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 65535);
 WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -126);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 126);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 65535);
 assume_abort_if_not(WrapperStruct00.var_1_11 != 0);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
 WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((WrapperStruct00.var_1_2 ? (((WrapperStruct00.var_1_3 == WrapperStruct00.var_1_4) && ((WrapperStruct00.var_1_9 % WrapperStruct00.var_1_7) >= WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_1 == ((signed char) ((((WrapperStruct00.var_1_8) < 0 ) ? -(WrapperStruct00.var_1_8) : (WrapperStruct00.var_1_8))))) : 1) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_8))) && ((WrapperStruct00.var_1_2 && WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_10 ? ((WrapperStruct00.var_1_6 >= (WrapperStruct00.var_1_5 / ((((WrapperStruct00.var_1_7) < (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_11))))) ? (WrapperStruct00.var_1_9 == ((signed long int) WrapperStruct00.var_1_8)) : 1) : 1))) && (WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_7 > (WrapperStruct00.var_1_8 | ((((WrapperStruct00.var_1_11) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_11) : (WrapperStruct00.var_1_3))))) ? (((WrapperStruct00.var_1_13 - WrapperStruct00.var_1_14) < (WrapperStruct00.var_1_8 / ((((WrapperStruct00.var_1_7) > (WrapperStruct00.var_1_11)) ? (WrapperStruct00.var_1_7) : (WrapperStruct00.var_1_11))))) ? (WrapperStruct00.var_1_12 == ((signed char) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_12 == ((signed char) 8))) : (WrapperStruct00.var_1_12 == ((signed char) WrapperStruct00.var_1_8))) : 1)
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
