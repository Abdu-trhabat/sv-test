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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch70Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[1] = {
	0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
double double_Array_0[5] = {
	255.375, 255.6, 8.3, 10000000.375, 0.0
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[3]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[4]);
signed char signed_char_Array_0[3] = {
	5, 1, 25
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed long int signed_long_int_Array_0[1] = {
	-50
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	50, 2
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
	19138, 0
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch70Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));


	// From: Req6Batch70Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));


	// From: Req1Batch70Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((17222 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + ((min (29916 , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))));
	}


	// From: Req2Batch70Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) >= ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = 8;
	}


	// From: Req3Batch70Wrapper_AP
	unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
	if (stepLocal_0 <= (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) , ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) << (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (min (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))));
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))));
	}


	// From: Req4Batch70Wrapper_AP
	unsigned char stepLocal_1 = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
	if ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) < stepLocal_1) {
		(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)));
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)));
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427382800e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854765600e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854765600e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 4611686.018427382800e+12F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854765600e+12F && double_Array_0[4] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 16383);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
}



void updateLastVariables() {
}

int property() {
	return ((((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((17222 - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) + ((min (29916 , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) : 1) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) >= ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) 8)) : 1)) && (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) <= (max ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) , ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) << (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (min (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))))) && (((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) < (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) - (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))
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
