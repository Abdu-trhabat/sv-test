// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch64Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[3] = {
	0, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
double double_Array_0[2] = {
	9.5, 0.9
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[3] = {
	0.8, -0.151, 63.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
signed short int signed_short_int_Array_0[1] = {
	-2
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	10, 16
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[3] = {
	256, 2941876006, 128
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned short int unsigned_short_int_Array_0[1] = {
	8
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);

// Calibration values

// Last'ed variables
unsigned char last_1_unsigned_char_Array_0_0_ = 10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch64Wrapper_AP
	signed long int stepLocal_1 = last_1_unsigned_char_Array_0_0_;
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	if (stepLocal_1 <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - last_1_unsigned_char_Array_0_0_)) {
		if (stepLocal_0 < (max ((last_1_unsigned_char_Array_0_0_ / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) , last_1_unsigned_char_Array_0_0_))) {
			if (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
				(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
			}
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		}
	}


	// From: Req2Batch64Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))));
	}


	// From: Req4Batch64Wrapper_AP
	unsigned long int stepLocal_2 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) & ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
	if (stepLocal_2 > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
		if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
		} else {
			(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
		}
	} else {
		(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));
	}


	// From: Req3Batch64Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) < ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= -922337.2036854776000e+13F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854776000e+12F && float_Array_0[2] >= 1.0e-20F ));
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[0] != 0);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967295);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
}



void updateLastVariables() {
	last_1_unsigned_char_Array_0_0_ = unsigned_char_Array_0[0];
}

int property() {
	return ((((last_1_unsigned_char_Array_0_0_ <= ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) - last_1_unsigned_char_Array_0_0_)) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) < (max ((last_1_unsigned_char_Array_0_0_ / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) , last_1_unsigned_char_Array_0_0_))) ? ((((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : 1) : ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) : 1) && (((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) ? (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) < ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))) : 1) : 1)) && ((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) & ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) : ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)))))
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
