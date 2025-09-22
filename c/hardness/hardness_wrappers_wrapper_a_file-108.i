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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch108Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char BOOL_unsigned_char_Array_0[1] = {
 1
};
float float_Array_0[2][2][2] = {
 {{15.375, -0.6}, {99.2, 127.2}}, {{4.25, 999999.2}, {256.75, -0.6}}
};
signed char signed_char_Array_0[1] = {
 -64
};
signed long int signed_long_int_Array_0[3] = {
 500, 1, -32
};
unsigned char unsigned_char_Array_0[2][2] = {
 {8, 4}, {32, 8}
};
void initially(void) {
}
void step(void) {
 if ((signed_long_int_Array_0[2] * signed_long_int_Array_0[0]) != (signed_char_Array_0[0] & signed_long_int_Array_0[1])) {
  unsigned_char_Array_0[0][0] = ((((unsigned_char_Array_0[0][1]) > (unsigned_char_Array_0[1][1])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][1])));
 } else {
  unsigned_char_Array_0[0][0] = (100 + unsigned_char_Array_0[1][0]);
 }
 if (BOOL_unsigned_char_Array_0[0]) {
  float_Array_0[0][0][1] = ((((((((float_Array_0[1][0][1]) > (float_Array_0[1][0][0])) ? (float_Array_0[1][0][1]) : (float_Array_0[1][0][0])))) > (float_Array_0[1][1][0])) ? (((((float_Array_0[1][0][1]) > (float_Array_0[1][0][0])) ? (float_Array_0[1][0][1]) : (float_Array_0[1][0][0])))) : (float_Array_0[1][1][0])));
 }
 unsigned char stepLocal_1 = (unsigned_char_Array_0[0][0] * -2) != signed_long_int_Array_0[2];
 signed long int stepLocal_0 = signed_long_int_Array_0[2];
 if (stepLocal_1 || BOOL_unsigned_char_Array_0[0]) {
  if (unsigned_char_Array_0[0][0] > stepLocal_0) {
   if (! (signed_long_int_Array_0[2] > unsigned_char_Array_0[0][0])) {
    float_Array_0[1][1][1] = (((((float_Array_0[0][1][1]) > ((float_Array_0[1][0][1] - float_Array_0[1][1][0]))) ? (float_Array_0[0][1][1]) : ((float_Array_0[1][0][1] - float_Array_0[1][1][0])))) + ((float_Array_0[0][1][0] + float_Array_0[0][0][0]) + float_Array_0[1][0][0]));
   } else {
    float_Array_0[1][1][1] = float_Array_0[1][1][0];
   }
  } else {
   float_Array_0[1][1][1] = float_Array_0[0][0][0];
  }
 } else {
  float_Array_0[1][1][1] = float_Array_0[0][1][0];
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
 float_Array_0[0][0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0][0] >= -115292.1504606845700e+13F && float_Array_0[0][0][0] <= -1.0e-20F) || (float_Array_0[0][0][0] <= 1152921.504606845700e+12F && float_Array_0[0][0][0] >= 1.0e-20F ));
 float_Array_0[1][0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0][0] >= -230584.3009213691400e+13F && float_Array_0[1][0][0] <= -1.0e-20F) || (float_Array_0[1][0][0] <= 2305843.009213691400e+12F && float_Array_0[1][0][0] >= 1.0e-20F ));
 float_Array_0[0][1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1][0] >= -115292.1504606845700e+13F && float_Array_0[0][1][0] <= -1.0e-20F) || (float_Array_0[0][1][0] <= 1152921.504606845700e+12F && float_Array_0[0][1][0] >= 1.0e-20F ));
 float_Array_0[1][1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][1][0] >= 0.0F && float_Array_0[1][1][0] <= -1.0e-20F) || (float_Array_0[1][1][0] <= 4611686.018427383000e+12F && float_Array_0[1][1][0] >= 1.0e-20F ));
 float_Array_0[1][0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0][1] >= 0.0F && float_Array_0[1][0][1] <= -1.0e-20F) || (float_Array_0[1][0][1] <= 4611686.018427383000e+12F && float_Array_0[1][0][1] >= 1.0e-20F ));
 float_Array_0[0][1][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1][1] >= -461168.6018427383000e+13F && float_Array_0[0][1][1] <= -1.0e-20F) || (float_Array_0[0][1][1] <= 4611686.018427383000e+12F && float_Array_0[0][1][1] >= 1.0e-20F ));
 signed_char_Array_0[0] = __VERIFIER_nondet_char();
 assume_abort_if_not(signed_char_Array_0[0] >= -128);
 assume_abort_if_not(signed_char_Array_0[0] <= 127);
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
 signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
 signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
 assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
 unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 254);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((unsigned_char_Array_0[0][0] * -2) != signed_long_int_Array_0[2]) || BOOL_unsigned_char_Array_0[0]) ? ((unsigned_char_Array_0[0][0] > signed_long_int_Array_0[2]) ? ((! (signed_long_int_Array_0[2] > unsigned_char_Array_0[0][0])) ? (float_Array_0[1][1][1] == ((float) (((((float_Array_0[0][1][1]) > ((float_Array_0[1][0][1] - float_Array_0[1][1][0]))) ? (float_Array_0[0][1][1]) : ((float_Array_0[1][0][1] - float_Array_0[1][1][0])))) + ((float_Array_0[0][1][0] + float_Array_0[0][0][0]) + float_Array_0[1][0][0])))) : (float_Array_0[1][1][1] == ((float) float_Array_0[1][1][0]))) : (float_Array_0[1][1][1] == ((float) float_Array_0[0][0][0]))) : (float_Array_0[1][1][1] == ((float) float_Array_0[0][1][0]))) && (((signed_long_int_Array_0[2] * signed_long_int_Array_0[0]) != (signed_char_Array_0[0] & signed_long_int_Array_0[1])) ? (unsigned_char_Array_0[0][0] == ((unsigned char) ((((unsigned_char_Array_0[0][1]) > (unsigned_char_Array_0[1][1])) ? (unsigned_char_Array_0[0][1]) : (unsigned_char_Array_0[1][1]))))) : (unsigned_char_Array_0[0][0] == ((unsigned char) (100 + unsigned_char_Array_0[1][0]))))) && (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[0][0][1] == ((float) ((((((((float_Array_0[1][0][1]) > (float_Array_0[1][0][0])) ? (float_Array_0[1][0][1]) : (float_Array_0[1][0][0])))) > (float_Array_0[1][1][0])) ? (((((float_Array_0[1][0][1]) > (float_Array_0[1][0][0])) ? (float_Array_0[1][0][1]) : (float_Array_0[1][0][0])))) : (float_Array_0[1][1][0]))))) : 1)
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
