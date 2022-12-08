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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch47Wrapper_AP.c", 13, "reach_error"); }
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
	1, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[3] = {
	3.5, 3.8, 24.575
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
signed char signed_char_Array_0[3] = {
	16, 16, 4
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed long int signed_long_int_Array_0[1] = {
	8
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch47Wrapper_AP
	if (-4 > last_1_signed_long_int_Array_0_0_) {
		if ((~ last_1_signed_long_int_Array_0_0_) <= last_1_signed_long_int_Array_0_0_) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (abs ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))));
		}
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));
	}


	// From: Req3Batch47Wrapper_AP
	unsigned char stepLocal_0 = ! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer));
	if (stepLocal_0 || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (abs (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
		}
	}


	// From: Req4Batch47Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));


	// From: Req1Batch47Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
		if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) {
			(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (abs ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))));
		}
	} else {
		if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) {
			(*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer));
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854765600e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854765600e+12F && double_Array_0[0] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1] <= 63);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= -63);
	assume_abort_if_not(signed_char_Array_0[2] <= 63);
}



void updateLastVariables() {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}

int property() {
	return (((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) >= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (abs ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) : 1) : (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) : 1)) && ((-4 > last_1_signed_long_int_Array_0_0_) ? (((~ last_1_signed_long_int_Array_0_0_) <= last_1_signed_long_int_Array_0_0_) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (abs ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))) : 1) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))))) && (((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (abs (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : 1)) && ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))))
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
