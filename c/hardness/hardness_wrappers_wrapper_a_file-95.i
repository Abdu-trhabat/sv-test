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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double double_Array_0[1] = {
 63.5
};
float float_Array_0[2][2] = {
 {50.4, 8.54}, {255.8, 1.8}
};
signed long int signed_long_int_Array_0[2] = {
 10, -64
};
signed short int signed_short_int_Array_0[1] = {
 0
};
unsigned char unsigned_char_Array_0[2][2] = {
 {2, 0}, {32, 5}
};
unsigned long int unsigned_long_int_Array_0[5] = {
 256, 8, 16, 16, 256
};
void initially(void) {
}
void step(void) {
 signed_long_int_Array_0[1] = ((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0])));
 float_Array_0[1][1] = ((float_Array_0[0][1] - float_Array_0[1][0]) + ((((256.5f) < ((float_Array_0[0][0] - 16.125f))) ? (256.5f) : ((float_Array_0[0][0] - 16.125f)))));
 unsigned long int stepLocal_0 = - (3351680781u - unsigned_long_int_Array_0[1]);
 if (stepLocal_0 > (signed_long_int_Array_0[1] & unsigned_long_int_Array_0[0])) {
  unsigned_char_Array_0[0][1] = (((((unsigned_char_Array_0[1][0]) < (((((unsigned_char_Array_0[1][1]) < 0 ) ? -(unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[1][1]))))) ? (unsigned_char_Array_0[1][0]) : (((((unsigned_char_Array_0[1][1]) < 0 ) ? -(unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[1][1])))))) + unsigned_char_Array_0[0][0]);
 }
 if ((unsigned_char_Array_0[0][1] / unsigned_long_int_Array_0[3]) < (unsigned_long_int_Array_0[4] >> unsigned_long_int_Array_0[2])) {
  signed_short_int_Array_0[0] = ((((4 - unsigned_char_Array_0[0][0]) < 0 ) ? -(4 - unsigned_char_Array_0[0][0]) : (4 - unsigned_char_Array_0[0][0])));
 } else {
  if (unsigned_long_int_Array_0[0] >= signed_long_int_Array_0[1]) {
   signed_short_int_Array_0[0] = (((((256 - unsigned_long_int_Array_0[2])) > (unsigned_char_Array_0[0][1])) ? ((256 - unsigned_long_int_Array_0[2])) : (unsigned_char_Array_0[0][1])));
  } else {
   signed_short_int_Array_0[0] = unsigned_char_Array_0[0][0];
  }
 }
 double_Array_0[0] = float_Array_0[0][0];
}
void updateVariables(void) {
 float_Array_0[0][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][0] >= 0.0F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
 float_Array_0[1][0] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[1][0] >= 0.0F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 4611686.018427383000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
 float_Array_0[0][1] = __VERIFIER_nondet_float();
 assume_abort_if_not((float_Array_0[0][1] >= 0.0F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 4611686.018427383000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
 signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
 assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483646);
 assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
 unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[0][0] <= 127);
 unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
 unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
 assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
 assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
 unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
 unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[1] <= 2147483647);
 unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[2] >= 1);
 assume_abort_if_not(unsigned_long_int_Array_0[2] <= 31);
 unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[3] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[3] <= 4294967295);
 assume_abort_if_not(unsigned_long_int_Array_0[3] != 0);
 unsigned_long_int_Array_0[4] = __VERIFIER_nondet_ulong();
 assume_abort_if_not(unsigned_long_int_Array_0[4] >= 0);
 assume_abort_if_not(unsigned_long_int_Array_0[4] <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 return ((((signed_long_int_Array_0[1] == ((signed long int) ((((signed_long_int_Array_0[0]) < 0 ) ? -(signed_long_int_Array_0[0]) : (signed_long_int_Array_0[0]))))) && (float_Array_0[1][1] == ((float) ((float_Array_0[0][1] - float_Array_0[1][0]) + ((((256.5f) < ((float_Array_0[0][0] - 16.125f))) ? (256.5f) : ((float_Array_0[0][0] - 16.125f)))))))) && (((- (3351680781u - unsigned_long_int_Array_0[1])) > (signed_long_int_Array_0[1] & unsigned_long_int_Array_0[0])) ? (unsigned_char_Array_0[0][1] == ((unsigned char) (((((unsigned_char_Array_0[1][0]) < (((((unsigned_char_Array_0[1][1]) < 0 ) ? -(unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[1][1]))))) ? (unsigned_char_Array_0[1][0]) : (((((unsigned_char_Array_0[1][1]) < 0 ) ? -(unsigned_char_Array_0[1][1]) : (unsigned_char_Array_0[1][1])))))) + unsigned_char_Array_0[0][0]))) : 1)) && (((unsigned_char_Array_0[0][1] / unsigned_long_int_Array_0[3]) < (unsigned_long_int_Array_0[4] >> unsigned_long_int_Array_0[2])) ? (signed_short_int_Array_0[0] == ((signed short int) ((((4 - unsigned_char_Array_0[0][0]) < 0 ) ? -(4 - unsigned_char_Array_0[0][0]) : (4 - unsigned_char_Array_0[0][0]))))) : ((unsigned_long_int_Array_0[0] >= signed_long_int_Array_0[1]) ? (signed_short_int_Array_0[0] == ((signed short int) (((((256 - unsigned_long_int_Array_0[2])) > (unsigned_char_Array_0[0][1])) ? ((256 - unsigned_long_int_Array_0[2])) : (unsigned_char_Array_0[0][1]))))) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[0][0]))))) && (double_Array_0[0] == ((double) float_Array_0[0][0]))
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
