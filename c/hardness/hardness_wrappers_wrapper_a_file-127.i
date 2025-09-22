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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
 {1, 0}, {1, 1}
};
double double_Array_0[2] = {
 10.55, 10.375
};
signed long int signed_long_int_Array_0[3] = {
 2, 16, 1
};
signed short int signed_short_int_Array_0[3] = {
 128, -50, -64
};
unsigned long int unsigned_long_int_Array_0[2] = {
 100, 0
};
void initially(void) {
}
void step(void) {
 if (((((0u) > (unsigned_long_int_Array_0[1])) ? (0u) : (unsigned_long_int_Array_0[1]))) > (~ unsigned_long_int_Array_0[0])) {
  BOOL_unsigned_char_Array_0[1][1] = ((! BOOL_unsigned_char_Array_0[0][1]) && (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][0]));
 }
 if (unsigned_long_int_Array_0[1] > unsigned_long_int_Array_0[0]) {
  signed_short_int_Array_0[2] = ((((signed_short_int_Array_0[1]) > (signed_short_int_Array_0[0])) ? (signed_short_int_Array_0[1]) : (signed_short_int_Array_0[0])));
 } else {
  if (double_Array_0[0] > double_Array_0[1]) {
   signed_short_int_Array_0[2] = signed_short_int_Array_0[0];
  } else {
   signed_short_int_Array_0[2] = signed_short_int_Array_0[1];
  }
 }
 unsigned long int stepLocal_0 = unsigned_long_int_Array_0[0];
 if (double_Array_0[0] >= double_Array_0[1]) {
  if (10 >= stepLocal_0) {
   signed_long_int_Array_0[0] = ((signed_short_int_Array_0[0] + (signed_long_int_Array_0[1] - signed_long_int_Array_0[2])) + signed_short_int_Array_0[2]);
  } else {
   signed_long_int_Array_0[0] = ((signed_short_int_Array_0[0] + signed_short_int_Array_0[2]) + (signed_short_int_Array_0[1] + 256));
  }
 } else {
  if (BOOL_unsigned_char_Array_0[0][0]) {
   signed_long_int_Array_0[0] = signed_long_int_Array_0[2];
  } else {
   signed_long_int_Array_0[0] = signed_short_int_Array_0[1];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
 double_Array_0[0] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
 double_Array_0[1] = __VERIFIER_nondet_double();
 assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 536870911);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((0u) > (unsigned_long_int_Array_0[1])) ? (0u) : (unsigned_long_int_Array_0[1]))) > (~ unsigned_long_int_Array_0[0])) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) ((! BOOL_unsigned_char_Array_0[0][1]) && (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][0])))) : 1) && ((unsigned_long_int_Array_0[1] > unsigned_long_int_Array_0[0]) ? (signed_short_int_Array_0[2] == ((signed short int) ((((signed_short_int_Array_0[1]) > (signed_short_int_Array_0[0])) ? (signed_short_int_Array_0[1]) : (signed_short_int_Array_0[0]))))) : ((double_Array_0[0] > double_Array_0[1]) ? (signed_short_int_Array_0[2] == ((signed short int) signed_short_int_Array_0[0])) : (signed_short_int_Array_0[2] == ((signed short int) signed_short_int_Array_0[1]))))) && ((double_Array_0[0] >= double_Array_0[1]) ? ((10 >= unsigned_long_int_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) ((signed_short_int_Array_0[0] + (signed_long_int_Array_0[1] - signed_long_int_Array_0[2])) + signed_short_int_Array_0[2]))) : (signed_long_int_Array_0[0] == ((signed long int) ((signed_short_int_Array_0[0] + signed_short_int_Array_0[2]) + (signed_short_int_Array_0[1] + 256))))) : (BOOL_unsigned_char_Array_0[0][0] ? (signed_long_int_Array_0[0] == ((signed long int) signed_long_int_Array_0[2])) : (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[1]))))
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
