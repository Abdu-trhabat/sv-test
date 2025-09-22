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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2] = {
 1, 0
};
double double_Array_0[2][2] = {
 {100000000000.825, 9999999999999.6}, {31.8, 9999999.6}
};
signed long int signed_long_int_Array_0[5] = {
 10000, 5, 1656367899, 100, 1
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {2796236537, 4}, {64, 256}
};
unsigned short int unsigned_short_int_Array_0[1] = {
 64
};
double last_1_double_Array_0_0__0_ = 100000000000.825;
void initially(void) {
}
void step(void) {
 if (((double_Array_0[1][1] - double_Array_0[0][1]) * last_1_double_Array_0_0__0_) <= last_1_double_Array_0_0__0_) {
  unsigned_long_int_Array_0[1][1] = ((((unsigned_long_int_Array_0[0][1]) < 0 ) ? -(unsigned_long_int_Array_0[0][1]) : (unsigned_long_int_Array_0[0][1])));
 } else {
  unsigned_long_int_Array_0[1][1] = unsigned_long_int_Array_0[0][1];
 }
 unsigned long int stepLocal_1 = (60423 - unsigned_short_int_Array_0[0]) | unsigned_long_int_Array_0[1][1];
 unsigned long int stepLocal_0 = unsigned_long_int_Array_0[0][1];
 if (stepLocal_1 <= ((((unsigned_long_int_Array_0[1][0]) < 0 ) ? -(unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[1][0])))) {
  if (unsigned_long_int_Array_0[0][0] != stepLocal_0) {
   double_Array_0[0][0] = ((31.5 - double_Array_0[1][0]) + 63.3);
  } else {
   double_Array_0[0][0] = double_Array_0[1][0];
  }
 }
 if (unsigned_long_int_Array_0[1][1] < (unsigned_long_int_Array_0[1][1] & (unsigned_long_int_Array_0[0][0] - unsigned_long_int_Array_0[1][0]))) {
  signed_long_int_Array_0[1] = ((((((signed_long_int_Array_0[2] - 128) - 2)) < (signed_long_int_Array_0[0])) ? (((signed_long_int_Array_0[2] - 128) - 2)) : (signed_long_int_Array_0[0])));
 } else {
  signed_long_int_Array_0[1] = signed_long_int_Array_0[0];
 }
 signed_long_int_Array_0[3] = signed_long_int_Array_0[0];
 BOOL_unsigned_char_Array_0[0] = BOOL_unsigned_char_Array_0[1];
 signed_long_int_Array_0[4] = signed_long_int_Array_0[2];
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
 double_Array_0[1][0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 4611686.018427383000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
 double_Array_0[0][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
 double_Array_0[1][1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1][1] >= 0.0F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483647);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= 1073741822);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483646);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967295);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967294);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
}
void updateLastVariables(void) {
 last_1_double_Array_0_0__0_ = double_Array_0[0][0];
}
int property(void) {
 return ((((((((double_Array_0[1][1] - double_Array_0[0][1]) * last_1_double_Array_0_0__0_) <= last_1_double_Array_0_0__0_) ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) ((((unsigned_long_int_Array_0[0][1]) < 0 ) ? -(unsigned_long_int_Array_0[0][1]) : (unsigned_long_int_Array_0[0][1]))))) : (unsigned_long_int_Array_0[1][1] == ((unsigned long int) unsigned_long_int_Array_0[0][1]))) && ((unsigned_long_int_Array_0[1][1] < (unsigned_long_int_Array_0[1][1] & (unsigned_long_int_Array_0[0][0] - unsigned_long_int_Array_0[1][0]))) ? (signed_long_int_Array_0[1] == ((signed long int) ((((((signed_long_int_Array_0[2] - 128) - 2)) < (signed_long_int_Array_0[0])) ? (((signed_long_int_Array_0[2] - 128) - 2)) : (signed_long_int_Array_0[0]))))) : (signed_long_int_Array_0[1] == ((signed long int) signed_long_int_Array_0[0])))) && ((((60423 - unsigned_short_int_Array_0[0]) | unsigned_long_int_Array_0[1][1]) <= ((((unsigned_long_int_Array_0[1][0]) < 0 ) ? -(unsigned_long_int_Array_0[1][0]) : (unsigned_long_int_Array_0[1][0])))) ? ((unsigned_long_int_Array_0[0][0] != unsigned_long_int_Array_0[0][1]) ? (double_Array_0[0][0] == ((double) ((31.5 - double_Array_0[1][0]) + 63.3))) : (double_Array_0[0][0] == ((double) double_Array_0[1][0]))) : 1)) && (signed_long_int_Array_0[3] == ((signed long int) signed_long_int_Array_0[0]))) && (BOOL_unsigned_char_Array_0[0] == ((unsigned char) BOOL_unsigned_char_Array_0[1]))) && (signed_long_int_Array_0[4] == ((signed long int) signed_long_int_Array_0[2]))
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
