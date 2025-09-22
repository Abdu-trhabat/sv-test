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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 unsigned long int var_1_1;
 unsigned char var_1_2;
 unsigned short int var_1_3;
 unsigned short int var_1_4;
 unsigned char var_1_5;
 signed long int var_1_6;
 signed short int var_1_7;
 signed short int var_1_8;
 signed short int var_1_9;
 unsigned long int var_1_10;
 signed short int var_1_11;
 unsigned long int var_1_12;
};
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
struct WrapperStruct00 WrapperStruct00 = {
 8,
 0,
 200,
 100,
 0,
 -100,
 0,
 8,
 -16,
 10000,
 1,
 128
};
unsigned long int last_1_WrapperStruct00_var_1_10 = 10000;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = (WrapperStruct00.var_1_4 / WrapperStruct00.var_1_6) < WrapperStruct00.var_1_3;
 unsigned short int stepLocal_0 = WrapperStruct00.var_1_4;
 if (WrapperStruct00.var_1_2) {
  if (WrapperStruct00.var_1_3 <= stepLocal_0) {
   if (WrapperStruct00.var_1_5 && stepLocal_1) {
    WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
   }
  } else {
   WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
  }
 }
 signed long int stepLocal_5 = WrapperStruct00.var_1_6;
 unsigned long int stepLocal_4 = WrapperStruct00.var_1_1;
 if (last_1_WrapperStruct00_var_1_10 > stepLocal_5) {
  if ((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_11) > stepLocal_4) {
   WrapperStruct00.var_1_10 = (((((WrapperStruct00.var_1_11) < ((last_1_WrapperStruct00_var_1_10 + WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_11) : ((last_1_WrapperStruct00_var_1_10 + WrapperStruct00.var_1_1)))) + WrapperStruct00.var_1_12);
  }
 } else {
  WrapperStruct00.var_1_10 = WrapperStruct00.var_1_1;
 }
 unsigned long int stepLocal_3 = WrapperStruct00.var_1_1;
 signed long int stepLocal_2 = 2;
 if (stepLocal_2 == (((((WrapperStruct00.var_1_10 | WrapperStruct00.var_1_1)) < (WrapperStruct00.var_1_1)) ? ((WrapperStruct00.var_1_10 | WrapperStruct00.var_1_1)) : (WrapperStruct00.var_1_1)))) {
  if (WrapperStruct00.var_1_10 < stepLocal_3) {
   WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_8 - 8);
  } else {
   WrapperStruct00.var_1_7 = WrapperStruct00.var_1_8;
  }
 } else {
  if (WrapperStruct00.var_1_2) {
   WrapperStruct00.var_1_7 = WrapperStruct00.var_1_8;
  } else {
   WrapperStruct00.var_1_7 = WrapperStruct00.var_1_9;
  }
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
 WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_4 <= 65535);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -1);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
 WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_9 >= -32767);
 assume_abort_if_not(WrapperStruct00.var_1_9 <= 32766);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
 WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
}
void updateLastVariables(void) {
 last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}
int property(void) {
 return ((WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_3 <= WrapperStruct00.var_1_4) ? ((WrapperStruct00.var_1_5 && ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_6) < WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_4)) : 1) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_3))) : 1) && ((2 == (((((WrapperStruct00.var_1_10 | WrapperStruct00.var_1_1)) < (WrapperStruct00.var_1_1)) ? ((WrapperStruct00.var_1_10 | WrapperStruct00.var_1_1)) : (WrapperStruct00.var_1_1)))) ? ((WrapperStruct00.var_1_10 < WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_7 == ((signed short int) (WrapperStruct00.var_1_8 - 8))) : (WrapperStruct00.var_1_7 == ((signed short int) WrapperStruct00.var_1_8))) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_7 == ((signed short int) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_7 == ((signed short int) WrapperStruct00.var_1_9))))) && ((last_1_WrapperStruct00_var_1_10 > WrapperStruct00.var_1_6) ? (((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_11) > WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_10 == ((unsigned long int) (((((WrapperStruct00.var_1_11) < ((last_1_WrapperStruct00_var_1_10 + WrapperStruct00.var_1_1))) ? (WrapperStruct00.var_1_11) : ((last_1_WrapperStruct00_var_1_10 + WrapperStruct00.var_1_1)))) + WrapperStruct00.var_1_12))) : 1) : (WrapperStruct00.var_1_10 == ((unsigned long int) WrapperStruct00.var_1_1)))
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
