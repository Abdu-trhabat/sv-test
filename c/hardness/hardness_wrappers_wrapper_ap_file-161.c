// Prototype declarations of the functions used to communicate with the model checkers
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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch161Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{1, 1}, {0, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
float float_Array_0[2][2][2] = {
	{{8.75, 1.9}, {127.62, 3.7}}, {{3.25, 32.375}, {63.25, 3.8}}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[0][0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[1][0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[0][1][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar7_Pointer = &(float_Array_0[1][1][1]);
signed long int signed_long_int_Array_0[2] = {
	32, -5
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[1] = {
	5
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_0__0_ = 1;
signed long int last_1_signed_long_int_Array_0_1_ = -5;
unsigned long int last_1_unsigned_long_int_Array_0_0_ = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch161Wrapper_AP
	signed long int stepLocal_0 = last_1_signed_long_int_Array_0_1_;
	if (stepLocal_0 <= 32) {
		if (((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) < (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer));
		} else {
			if ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) {
				if (last_1_BOOL_unsigned_char_Array_0_0__0_) {
					(*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) = ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))));
				} else {
					(*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer));
				}
			} else {
				(*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
			}
		}
	}


	// From: Req2Batch161Wrapper_AP
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) < (((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (abs (last_1_unsigned_long_int_Array_0_0_));
	}


	// From: Req3Batch161Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)));
	}


	// From: Req4Batch161Wrapper_AP
	unsigned char stepLocal_1 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			if (stepLocal_1 || ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)))) {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)));
			}
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 0);
	float_Array_0[0][0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0][0] >= 0.0F && float_Array_0[0][0][0] <= -1.0e-20F) || (float_Array_0[0][0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0][0] >= 1.0e-20F ));
	float_Array_0[1][0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0][0] >= 0.0F && float_Array_0[1][0][0] <= -1.0e-20F) || (float_Array_0[1][0][0] <= 9223372.036854766000e+12F && float_Array_0[1][0][0] >= 1.0e-20F ));
	float_Array_0[0][1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1][0] >= 0.0F && float_Array_0[0][1][0] <= -1.0e-20F) || (float_Array_0[0][1][0] <= 4611686.018427383000e+12F && float_Array_0[0][1][0] >= 1.0e-20F ));
	float_Array_0[1][1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1][0] >= -922337.2036854766000e+13F && float_Array_0[1][1][0] <= -1.0e-20F) || (float_Array_0[1][1][0] <= 9223372.036854766000e+12F && float_Array_0[1][1][0] >= 1.0e-20F ));
	float_Array_0[0][0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0][1] >= -922337.2036854776000e+13F && float_Array_0[0][0][1] <= -1.0e-20F) || (float_Array_0[0][0][1] <= 9223372.036854776000e+12F && float_Array_0[0][0][1] >= 1.0e-20F ));
	float_Array_0[1][0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0][1] >= 0.0F && float_Array_0[1][0][1] <= -1.0e-20F) || (float_Array_0[1][0][1] <= 9223372.036854776000e+12F && float_Array_0[1][0][1] >= 1.0e-20F ));
	float_Array_0[0][1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1][1] >= 0.0F && float_Array_0[0][1][1] <= -1.0e-20F) || (float_Array_0[0][1][1] <= 9223372.036854776000e+12F && float_Array_0[0][1][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_0__0_ = BOOL_unsigned_char_Array_0[0][0];
	last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
	last_1_unsigned_long_int_Array_0_0_ = unsigned_long_int_Array_0[0];
}

int property(void) {
	return ((((last_1_signed_long_int_Array_0_1_ <= 32) ? ((((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) < (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)))) : (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) < (*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer))) ? (last_1_BOOL_unsigned_char_Array_0_0__0_ ? ((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) == ((float) ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) : 1) && (((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) < (((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (abs (last_1_unsigned_long_int_Array_0_0_)))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) <= (*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))))) : 1)
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
