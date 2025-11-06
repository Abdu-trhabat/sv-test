// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[5] = {
	0, 0, 0, 0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[3]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[4]);
double double_Array_0[2] = {
	1000.7, 9999999.4
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[3] = {
	2.125, 0.29, -0.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed char signed_char_Array_0[2][2] = {
	{-10, 2}, {-5, 10}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[1] = {
	1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);

// Calibration values

// Last'ed variables
signed char last_1_signed_char_Array_0_1__0_ = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch144Wrapper_AP
	if ((abs (last_1_signed_char_Array_0_1__0_)) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) / (max ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) , -1)))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
		} else {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
		}
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = -8;
	}


	// From: Req2Batch144Wrapper_AP
	signed long int stepLocal_1 = -256;
	if (((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) / 200) <= stepLocal_1) {
		if ((min (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) , (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) != 16.5f) {
			(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = 4.4;
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
	}


	// From: Req3Batch144Wrapper_AP
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + -50);
	} else {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (25 - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)));
		}
	}


	// From: Req1Batch144Wrapper_AP
	signed char stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	if (stepLocal_0 < (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) = (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 63);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
}



void updateLastVariables(void) {
	last_1_signed_char_Array_0_1__0_ = signed_char_Array_0[1][0];
}

int property(void) {
	return (((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) && ((((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) / 200) <= -256) ? (((min (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) * (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) , (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) != 16.5f) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) 4.4)) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) && (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + -50))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (25 - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) : 1))) && (((abs (last_1_signed_char_Array_0_1__0_)) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) / (max ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) , -1)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) -8)))
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
