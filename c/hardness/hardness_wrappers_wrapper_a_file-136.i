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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[3] = {
 0, 0, 0
};
float float_Array_0[3] = {
 32.5, 99999999999999.6, 50.625
};
signed char signed_char_Array_0[3] = {
 16, 2, 4
};
signed long int signed_long_int_Array_0[1] = {
 2
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
 {4016566698, 10}, {10, 5}
};
void initially(void) {
}
void step(void) {
 if (BOOL_unsigned_char_Array_0[2]) {
  if (BOOL_unsigned_char_Array_0[1]) {
   unsigned_long_int_Array_0[1][1] = (unsigned_long_int_Array_0[0][1] + unsigned_long_int_Array_0[1][0]);
  } else {
   unsigned_long_int_Array_0[1][1] = (((((unsigned_long_int_Array_0[0][0]) < (3757035609u)) ? (unsigned_long_int_Array_0[0][0]) : (3757035609u))) - unsigned_long_int_Array_0[0][1]);
  }
 } else {
  unsigned_long_int_Array_0[1][1] = unsigned_long_int_Array_0[0][1];
 }
 signed long int stepLocal_1 = signed_char_Array_0[0] - signed_char_Array_0[1];
 signed long int stepLocal_0 = signed_char_Array_0[2] - signed_char_Array_0[0];
 if (stepLocal_0 == unsigned_long_int_Array_0[0][1]) {
  if (signed_char_Array_0[2] < stepLocal_1) {
   float_Array_0[1] = ((((float_Array_0[2] - float_Array_0[0]) < 0 ) ? -(float_Array_0[2] - float_Array_0[0]) : (float_Array_0[2] - float_Array_0[0])));
  } else {
   if (BOOL_unsigned_char_Array_0[2]) {
    float_Array_0[1] = float_Array_0[2];
   } else {
    float_Array_0[1] = float_Array_0[0];
   }
  }
 }
 if (BOOL_unsigned_char_Array_0[2]) {
  if (BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) {
   signed_long_int_Array_0[0] = signed_char_Array_0[2];
  } else {
   signed_long_int_Array_0[0] = (signed_char_Array_0[0] - signed_char_Array_0[1]);
  }
 } else {
  if (BOOL_unsigned_char_Array_0[0]) {
   if (signed_char_Array_0[0] <= unsigned_long_int_Array_0[0][0]) {
    signed_long_int_Array_0[0] = signed_char_Array_0[0];
   } else {
    signed_long_int_Array_0[0] = signed_char_Array_0[1];
   }
  } else {
   signed_long_int_Array_0[0] = 32;
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
 BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854766000e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= 0);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_char_Array_0[1] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[1] >= 0);
 assume_abort_if_not(signed_char_Array_0[1] <= 127);
 signed_char_Array_0[2] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[2] >= -1);
 assume_abort_if_not(signed_char_Array_0[2] <= 127);
 unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 2147483647);
 assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967294);
 unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 2147483647);
 unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 2147483647);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((BOOL_unsigned_char_Array_0[2] ? (BOOL_unsigned_char_Array_0[1] ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) (unsigned_long_int_Array_0[0][1] + unsigned_long_int_Array_0[1][0]))) : (unsigned_long_int_Array_0[1][1] == ((unsigned long int) (((((unsigned_long_int_Array_0[0][0]) < (3757035609u)) ? (unsigned_long_int_Array_0[0][0]) : (3757035609u))) - unsigned_long_int_Array_0[0][1])))) : (unsigned_long_int_Array_0[1][1] == ((unsigned long int) unsigned_long_int_Array_0[0][1]))) && (((signed_char_Array_0[2] - signed_char_Array_0[0]) == unsigned_long_int_Array_0[0][1]) ? ((signed_char_Array_0[2] < (signed_char_Array_0[0] - signed_char_Array_0[1])) ? (float_Array_0[1] == ((float) ((((float_Array_0[2] - float_Array_0[0]) < 0 ) ? -(float_Array_0[2] - float_Array_0[0]) : (float_Array_0[2] - float_Array_0[0]))))) : (BOOL_unsigned_char_Array_0[2] ? (float_Array_0[1] == ((float) float_Array_0[2])) : (float_Array_0[1] == ((float) float_Array_0[0])))) : 1)) && (BOOL_unsigned_char_Array_0[2] ? ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[2])) : (signed_long_int_Array_0[0] == ((signed long int) (signed_char_Array_0[0] - signed_char_Array_0[1])))) : (BOOL_unsigned_char_Array_0[0] ? ((signed_char_Array_0[0] <= unsigned_long_int_Array_0[0][0]) ? (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[0])) : (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[1]))) : (signed_long_int_Array_0[0] == ((signed long int) 32))))
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
