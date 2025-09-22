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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch172Wrapper_A.c", 13, "reach_error"); }
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
 {0, 0}, {0, 1}
};
float float_Array_0[3] = {
 1000.25, 0.75, 49.5
};
signed long int signed_long_int_Array_0[2][2] = {
 {50, 0}, {-25, -64}
};
signed short int signed_short_int_Array_0[3] = {
 -128, -2, 8
};
unsigned char unsigned_char_Array_0[3] = {
 128, 25, 64
};
unsigned short int unsigned_short_int_Array_0[2] = {
 5, 0
};
void initially(void) {
}
void step(void) {
 if (unsigned_short_int_Array_0[0] < unsigned_short_int_Array_0[1]) {
  signed_long_int_Array_0[1][1] = (unsigned_short_int_Array_0[1] + ((unsigned_short_int_Array_0[0] + signed_long_int_Array_0[1][0]) + (signed_long_int_Array_0[0][0] - signed_long_int_Array_0[0][1])));
 } else {
  signed_long_int_Array_0[1][1] = ((((-4) > ((((((128) > (unsigned_short_int_Array_0[1])) ? (128) : (unsigned_short_int_Array_0[1]))) - signed_long_int_Array_0[0][0]))) ? (-4) : ((((((128) > (unsigned_short_int_Array_0[1])) ? (128) : (unsigned_short_int_Array_0[1]))) - signed_long_int_Array_0[0][0]))));
 }
 signed_short_int_Array_0[2] = ((((signed_short_int_Array_0[0]) < (signed_short_int_Array_0[1])) ? (signed_short_int_Array_0[0]) : (signed_short_int_Array_0[1])));
 unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0][1];
 if (stepLocal_0 && (signed_long_int_Array_0[1][1] != signed_long_int_Array_0[0][0])) {
  float_Array_0[1] = (float_Array_0[2] + ((((3.25f) > (float_Array_0[0])) ? (3.25f) : (float_Array_0[0]))));
 }
 unsigned_char_Array_0[1] = unsigned_char_Array_0[2];
 BOOL_unsigned_char_Array_0[0][0] = BOOL_unsigned_char_Array_0[0][1];
 unsigned_char_Array_0[0] = unsigned_char_Array_0[2];
 if (unsigned_short_int_Array_0[1] >= unsigned_short_int_Array_0[0]) {
  BOOL_unsigned_char_Array_0[1][1] = (BOOL_unsigned_char_Array_0[0][0] || BOOL_unsigned_char_Array_0[0][1]);
 } else {
  if (unsigned_short_int_Array_0[1] >= unsigned_short_int_Array_0[0]) {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[1][0];
  } else {
   BOOL_unsigned_char_Array_0[1][1] = BOOL_unsigned_char_Array_0[0][1];
  }
 }
}
void updateVariables(void) {
 BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
 BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
 assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
 float_Array_0[0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0] >= -461168.6018427383000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
 float_Array_0[2] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[2] >= -461168.6018427383000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427383000e+12F && float_Array_0[2] >= 1.0e-20F ));
 signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][0] <= 536870911);
 signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[1][0] >= -268435455);
 assume_abort_if_not(signed_long_int_Array_0[1][0] <= 268435456);
 signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
 assume_abort_if_not(signed_long_int_Array_0[0][1] <= 536870911);
 signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
 signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
 assume_abort_if_not(signed_short_int_Array_0[1] >= -32767);
 assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
 unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
 unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
 unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
 assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
}
void updateLastVariables(void) {
}
int property(void) {
 return (((((((unsigned_short_int_Array_0[1] >= unsigned_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][0] || BOOL_unsigned_char_Array_0[0][1]))) : ((unsigned_short_int_Array_0[1] >= unsigned_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0])) : (BOOL_unsigned_char_Array_0[1][1] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1])))) && ((unsigned_short_int_Array_0[0] < unsigned_short_int_Array_0[1]) ? (signed_long_int_Array_0[1][1] == ((signed long int) (unsigned_short_int_Array_0[1] + ((unsigned_short_int_Array_0[0] + signed_long_int_Array_0[1][0]) + (signed_long_int_Array_0[0][0] - signed_long_int_Array_0[0][1]))))) : (signed_long_int_Array_0[1][1] == ((signed long int) ((((-4) > ((((((128) > (unsigned_short_int_Array_0[1])) ? (128) : (unsigned_short_int_Array_0[1]))) - signed_long_int_Array_0[0][0]))) ? (-4) : ((((((128) > (unsigned_short_int_Array_0[1])) ? (128) : (unsigned_short_int_Array_0[1]))) - signed_long_int_Array_0[0][0])))))))) && (signed_short_int_Array_0[2] == ((signed short int) ((((signed_short_int_Array_0[0]) < (signed_short_int_Array_0[1])) ? (signed_short_int_Array_0[0]) : (signed_short_int_Array_0[1])))))) && ((BOOL_unsigned_char_Array_0[0][1] && (signed_long_int_Array_0[1][1] != signed_long_int_Array_0[0][0])) ? (float_Array_0[1] == ((float) (float_Array_0[2] + ((((3.25f) > (float_Array_0[0])) ? (3.25f) : (float_Array_0[0])))))) : 1)) && (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[2]))) && (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1]))) && (unsigned_char_Array_0[0] == ((unsigned char) unsigned_char_Array_0[2]))
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
