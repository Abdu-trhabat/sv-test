// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch176Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
struct WrapperStruct00;
struct WrapperStruct00 {
 signed long int var_1_1;
 signed long int var_1_2;
 signed long int var_1_3;
 double var_1_4;
 signed long int var_1_5;
 double var_1_6;
 signed long int var_1_7;
 signed long int var_1_8;
 unsigned char var_1_9;
 unsigned long int var_1_10;
 unsigned char var_1_11;
 unsigned char var_1_12;
 unsigned char var_1_13;
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
 1192640562,
 2,
 255.6,
 -1,
 64.25,
 -256,
 -32,
 0,
 50,
 5,
 1,
 1
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
void initially(void) {
}
void step(void) {
 (*(WrapperStruct00_var_1_1_Pointer)) = ((10000000 + 5) - ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer))));
 if (! ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer)))) {
  (*(WrapperStruct00_var_1_7_Pointer)) = (((((*(WrapperStruct00_var_1_2_Pointer))) < ((((((*(WrapperStruct00_var_1_3_Pointer))) < (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer))))))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer)))))))))) ? ((*(WrapperStruct00_var_1_2_Pointer))) : ((((((*(WrapperStruct00_var_1_3_Pointer))) < (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer))))))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer)))))))))));
 }
 unsigned long int stepLocal_2 = ((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_1_Pointer))));
 if (stepLocal_2 >= (*(WrapperStruct00_var_1_5_Pointer))) {
  (*(WrapperStruct00_var_1_9_Pointer)) = (16 + (*(WrapperStruct00_var_1_11_Pointer)));
 }
 if (((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_1_Pointer))) <= (*(WrapperStruct00_var_1_7_Pointer))) {
  (*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
 }
 signed long int stepLocal_1 = (*(WrapperStruct00_var_1_7_Pointer)) * ((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)));
 signed long int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
 if (stepLocal_0 > (*(WrapperStruct00_var_1_3_Pointer))) {
  if (stepLocal_1 > (-1 / (*(WrapperStruct00_var_1_5_Pointer)))) {
   (*(WrapperStruct00_var_1_4_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
  } else {
   (*(WrapperStruct00_var_1_4_Pointer)) = 63.75;
  }
 } else {
  (*(WrapperStruct00_var_1_4_Pointer)) = 10.2;
 }
}
void updateVariables(void) {
 WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_2 >= 1073741823);
 assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483646);
 WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_3 <= 1073741823);
 WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
 assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
 WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
 WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483647);
 assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483646);
 WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967295);
 WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
 assume_abort_if_not(WrapperStruct00.var_1_11 <= 127);
 WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
 assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((10000000 + 5) - ((*(WrapperStruct00_var_1_2_Pointer)) - (*(WrapperStruct00_var_1_3_Pointer)))))) && (((*(WrapperStruct00_var_1_2_Pointer)) > (*(WrapperStruct00_var_1_3_Pointer))) ? ((((*(WrapperStruct00_var_1_7_Pointer)) * ((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_3_Pointer)))) > (-1 / (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_4_Pointer)) == ((double) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_4_Pointer)) == ((double) 63.75))) : ((*(WrapperStruct00_var_1_4_Pointer)) == ((double) 10.2)))) && ((! ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((signed long int) (((((*(WrapperStruct00_var_1_2_Pointer))) < ((((((*(WrapperStruct00_var_1_3_Pointer))) < (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer))))))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer)))))))))) ? ((*(WrapperStruct00_var_1_2_Pointer))) : ((((((*(WrapperStruct00_var_1_3_Pointer))) < (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer))))))) ? ((*(WrapperStruct00_var_1_3_Pointer))) : (((((-128) > ((*(WrapperStruct00_var_1_8_Pointer)))) ? (-128) : ((*(WrapperStruct00_var_1_8_Pointer))))))))))))) : 1)) && (((((((*(WrapperStruct00_var_1_10_Pointer))) > ((*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer))) : ((*(WrapperStruct00_var_1_1_Pointer))))) >= (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (16 + (*(WrapperStruct00_var_1_11_Pointer))))) : 1)) && ((((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_1_Pointer))) <= (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_13_Pointer)))) : 1)
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
