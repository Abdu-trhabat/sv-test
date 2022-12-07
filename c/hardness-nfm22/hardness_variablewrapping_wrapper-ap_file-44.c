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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch44Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[2][3] = {
	{0, 1, 0}, {0, 0, 0}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer = &(BOOL_unsigned_char_Array_0[0][2]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer = &(BOOL_unsigned_char_Array_0[1][2]);
double double_Array_0[1] = {
	10.5
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
float float_Array_0[2] = {
	50.75, 32.6
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
signed char signed_char_Array_0[2][2] = {
	{50, -64}, {-1, -25}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[1] = {
	32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[1] = {
	1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch44Wrapper_AP
	signed long int stepLocal_1 = (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
	signed long int stepLocal_0 = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) > stepLocal_0) {
		if (stepLocal_1 <= (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));
	}


	// From: Req4Batch44Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));


	// From: Req3Batch44Wrapper_AP
	if (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer))) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer))));
	}


	// From: Req2Batch44Wrapper_AP
	signed long int stepLocal_3 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
	signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))) {
		if (stepLocal_3 > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
			(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
		} else {
			if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) % (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < stepLocal_2) {
				(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
			}
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 1);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 0);
	BOOL_unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][2] <= 0);
	BOOL_unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][2] <= 0);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854765600e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854765600e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 127);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -1);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 127);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -128);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 127);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -128);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 127);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	assume_abort_if_not(unsigned_char_Array_0[0] != 0);
}



void updateLastVariables() {
}

int property() {
	return (((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) > ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((((min ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) / (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) <= (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) ? (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))) : ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) % (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) < ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) * (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)))) : 1)) : 1)) && ((((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) - (abs ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))))) >= (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var5_Pointer))) || ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var4_Pointer)))))) : 1)) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))
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
