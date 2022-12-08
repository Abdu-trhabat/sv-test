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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch50Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{1, 0}, {0, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
double double_Array_0[2][2] = {
	{127.8, 63.5}, {16.6, 8.875}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1]);
signed long int signed_long_int_Array_0[2][2] = {
	{0, -5}, {128, 100}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed short int signed_short_int_Array_0[2][3] = {
	{-2, 26204, 2}, {64, 5, 4}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[0][2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer = &(signed_short_int_Array_0[1][2]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0__1_ = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch50Wrapper_AP
	signed long int stepLocal_1 = last_1_signed_long_int_Array_0_0__1_;
	if (stepLocal_1 >= 0) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))));
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))))));
	}


	// From: Req3Batch50Wrapper_AP
	signed long int stepLocal_3 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer));
	signed short int stepLocal_2 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) > stepLocal_3) {
		if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) < stepLocal_2) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer));
	}


	// From: Req1Batch50Wrapper_AP
	signed long int stepLocal_0 = max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)));
	if ((min (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) , ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) != 31.9) {
		if (stepLocal_0 < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
			if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
			} else {
				(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
			}
		} else {
			(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
		}
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854776000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854776000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -922337.2036854776000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 536870911);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
	signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32766);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= 16383);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 16383);
	signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][2] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0][2] <= 32766);
	signed_short_int_Array_0[1][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][2] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1][2] <= 32766);
}



void updateLastVariables() {
	last_1_signed_long_int_Array_0_0__1_ = signed_long_int_Array_0[0][1];
}

int property() {
	return ((((min (((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) , ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))) != 31.9) ? (((max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))) && ((last_1_signed_long_int_Array_0_0__1_ >= 0) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) - ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))))))) && (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) > ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer)))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) < (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)))))
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
