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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2] = {
	0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[2][2] = {
	{-0.8, 1000000.875}, {49.25, 9.15}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
float float_Array_0[1] = {
	-0.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed char signed_char_Array_0[5] = {
	32, -10, 16, 2, 2
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed long int signed_long_int_Array_0[2] = {
	1000000000, 32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2] = {
	8, 5
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
	58996, 32
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables
double last_1_double_Array_0_1__1_ = 9.15;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10Wrapper_AP
	(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer));


	// From: Req5Batch10Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));


	// From: Req6Batch10Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));


	// From: Req7Batch10Wrapper_AP
	(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));


	// From: Req3Batch10Wrapper_AP
	signed char stepLocal_1 = (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer));
	if ((- ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) >= stepLocal_1) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))));
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))));
	}


	// From: Req4Batch10Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)));
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) - (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - 4) + (abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))));
	}


	// From: Req2Batch10Wrapper_AP
	signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	if (stepLocal_0 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = -0.5;
	} else {
		if ((- last_1_double_Array_0_1__1_) == ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) {
			(*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854765600e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854765600e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -1);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= 0);
	assume_abort_if_not(signed_char_Array_0[3] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 536870911);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}



void updateLastVariables() {
	last_1_double_Array_0_1__1_ = double_Array_0[1][1];
}

int property() {
	return (((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) -0.5)) : (((- last_1_double_Array_0_1__1_) == ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))))) && (((- ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) - (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - 4) + (abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))
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
