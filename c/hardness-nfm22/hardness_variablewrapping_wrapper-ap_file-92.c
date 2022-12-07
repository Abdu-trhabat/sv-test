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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch92Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
	15.5, 16.65, 1000000.625
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
float float_Array_0[1] = {
	2.4
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed char signed_char_Array_0[2][3] = {
	{10, 0, 2}, {32, 8, 32}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[0][2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[1][2]);
signed short int signed_short_int_Array_0[1] = {
	500
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[2] = {
	8, 100
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch92Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) = (((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) - (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))));


	// From: Req2Batch92Wrapper_AP
	signed long int stepLocal_0 = (~ (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) * ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) & (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)));
	if (stepLocal_0 >= (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
	}


	// From: Req3Batch92Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (abs ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))));


	// From: Req5Batch92Wrapper_AP
	signed long int stepLocal_1 = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	if (stepLocal_1 < -100) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (! (! (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)))));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)));
	}


	// From: Req6Batch92Wrapper_AP
	(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer));


	// From: Req4Batch92Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + ((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , 1)) + 64));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854765600e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 63);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
	signed_char_Array_0[0][2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][2] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][2] <= 63);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
	assume_abort_if_not(unsigned_short_int_Array_0[1] != 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) == ((signed char) (((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))) - (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))))) && ((((~ (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) * ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) & (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (abs ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer))))))) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + ((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , 1)) + 64)))) : 1)) && ((((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) / (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))) < -100) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (! (! (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))))) && ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))
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
