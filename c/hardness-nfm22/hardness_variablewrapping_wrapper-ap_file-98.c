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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch98Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
double double_Array_0[2][2][2] = {
	{{7.25, 0.6}, {7.5, 63.5}}, {{4.4, 9999999.5}, {2.3, 4.8}}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[0][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[1][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar6_Pointer = &(double_Array_0[0][1][1]);
double* double_Array_0_arraydouble_Array_0arrayVar7_Pointer = &(double_Array_0[1][1][1]);
signed long int signed_long_int_Array_0[1] = {
	-1
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[1] = {
	10
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned long int unsigned_long_int_Array_0[5] = {
	128, 0, 25, 4078799264, 500
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[3]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[4]);

// Calibration values

// Last'ed variables
unsigned long int last_1_unsigned_long_int_Array_0_4_ = 500;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch98Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)));


	// From: Req4Batch98Wrapper_AP
	if ((min (-128 , last_1_unsigned_long_int_Array_0_4_)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
		if (last_1_unsigned_long_int_Array_0_4_ > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)));
		} else {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
		}
	} else {
		(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
	}


	// From: Req2Batch98Wrapper_AP
	unsigned long int stepLocal_0 = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) >> (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer));
	if (8 < stepLocal_0) {
		(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) + (min ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) , 1.9))) + (99.125 + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))));
	}


	// From: Req3Batch98Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
		if (((- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) <= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) || ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))));
		} else {
			(*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)));
		}
	}
}



void updateVariables() {
	double_Array_0[0][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0][0] >= -115292.1504606845700e+13F && double_Array_0[0][0][0] <= -1.0e-20F) || (double_Array_0[0][0][0] <= 1152921.504606845700e+12F && double_Array_0[0][0][0] >= 1.0e-20F ));
	double_Array_0[1][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0][0] >= -115292.1504606845700e+13F && double_Array_0[1][0][0] <= -1.0e-20F) || (double_Array_0[1][0][0] <= 1152921.504606845700e+12F && double_Array_0[1][0][0] >= 1.0e-20F ));
	double_Array_0[0][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][0] >= -230584.3009213691390e+13F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 2305843.009213691390e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
	double_Array_0[1][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1][0] >= -230584.3009213691390e+13F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 2305843.009213691390e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
	double_Array_0[1][0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0][1] >= 0.0F && double_Array_0[1][0][1] <= -1.0e-20F) || (double_Array_0[1][0][1] <= 9223372.036854765600e+12F && double_Array_0[1][0][1] >= 1.0e-20F ));
	double_Array_0[0][1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][1] >= 0.0F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 9223372.036854765600e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 2147483647);
	unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[3] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[3] <= 4294967294);
}



void updateLastVariables() {
	last_1_unsigned_long_int_Array_0_4_ = unsigned_long_int_Array_0[4];
}

int property() {
	return ((((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))))) && ((8 < (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) >> (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) ((((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) + (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) + (min ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) , 1.9))) + (99.125 + (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)))))) : 1)) && (((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((((- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) <= (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) || ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) == ((unsigned long int) ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) : 1)) && (((min (-128 , last_1_unsigned_long_int_Array_0_4_)) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((last_1_unsigned_long_int_Array_0_4_ > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))))) : ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) == ((unsigned long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))))
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
