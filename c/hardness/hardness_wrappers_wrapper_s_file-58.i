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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch58Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned char var_1_1;
 unsigned char var_1_3;
 unsigned char var_1_4;
 unsigned char var_1_5;
 unsigned char var_1_6;
 signed short int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 unsigned long int var_1_11;
 unsigned char var_1_12;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 64,
 25,
 100,
 200,
 10,
 -5,
 -16,
 1,
 16,
 3774350958,
 64
};
void initially(void) {
}
void step(void) {
 signed long int stepLocal_4 = WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_3 >= stepLocal_4) {
  WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_3);
 }
 WrapperStruct00.var_1_12 = WrapperStruct00.var_1_6;
 signed long int stepLocal_1 = (WrapperStruct00.var_1_5 - 2) - WrapperStruct00.var_1_6;
 signed long int stepLocal_0 = -256;
 if (WrapperStruct00.var_1_10 <= stepLocal_0) {
  WrapperStruct00.var_1_1 = ((((WrapperStruct00.var_1_3) < (((WrapperStruct00.var_1_4 - 8) + 5))) ? (WrapperStruct00.var_1_3) : (((WrapperStruct00.var_1_4 - 8) + 5))));
 } else {
  if (WrapperStruct00.var_1_4 <= stepLocal_1) {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
  }
 }
 signed long int stepLocal_3 = (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_4) / WrapperStruct00.var_1_8;
 unsigned char stepLocal_2 = WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_8;
 if (WrapperStruct00.var_1_10 < stepLocal_3) {
  if (WrapperStruct00.var_1_9 && stepLocal_2) {
   WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_4 + (((((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_3))) < 0 ) ? -((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_3))) : ((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_3))))));
  } else {
   WrapperStruct00.var_1_7 = WrapperStruct00.var_1_6;
  }
 } else {
  WrapperStruct00.var_1_7 = WrapperStruct00.var_1_4;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 254);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 63);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 191);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 255);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 127);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((WrapperStruct00.var_1_10 <= -256) ? (WrapperStruct00.var_1_1 == ((unsigned char) ((((WrapperStruct00.var_1_3) < (((WrapperStruct00.var_1_4 - 8) + 5))) ? (WrapperStruct00.var_1_3) : (((WrapperStruct00.var_1_4 - 8) + 5)))))) : ((WrapperStruct00.var_1_4 <= ((WrapperStruct00.var_1_5 - 2) - WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6)))) && ((WrapperStruct00.var_1_10 < ((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_4) / WrapperStruct00.var_1_8)) ? ((WrapperStruct00.var_1_9 && (WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_7 == ((signed short int) (WrapperStruct00.var_1_4 + (((((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_3))) < 0 ) ? -((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_3))) : ((((WrapperStruct00.var_1_10) > (WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_10) : (WrapperStruct00.var_1_3)))))))) : (WrapperStruct00.var_1_7 == ((signed short int) WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_7 == ((signed short int) WrapperStruct00.var_1_4)))) && ((WrapperStruct00.var_1_3 >= WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_10 == ((unsigned long int) (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_3))) : 1)) && (WrapperStruct00.var_1_12 == ((unsigned char) WrapperStruct00.var_1_6))
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
