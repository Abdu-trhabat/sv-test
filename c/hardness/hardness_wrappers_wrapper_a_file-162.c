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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch162Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
double double_Array_0[2][3] = {
	{7.25, 3.862, -0.5}, {256.2, 31.75, -0.25}
};
signed char signed_char_Array_0[2][2] = {
	{10, 8}, {32, 5}
};
signed long int signed_long_int_Array_0[2] = {
	-8, 1
};
unsigned char unsigned_char_Array_0[2] = {
	32, 2
};

// Calibration values

// Last'ed variables
double last_1_double_Array_0_1__0_ = 256.2;
unsigned char last_1_unsigned_char_Array_0_1_ = 2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch162Wrapper_A
	if ((min (last_1_double_Array_0_1__0_ , 10.3)) >= last_1_double_Array_0_1__0_) {
		double_Array_0[1][2] = (double_Array_0[0][2] + double_Array_0[1][1]);
	} else {
		double_Array_0[1][2] = (double_Array_0[0][2] + (499.94 - (double_Array_0[0][1] + double_Array_0[0][0])));
	}


	// From: Req4Batch162Wrapper_A
	if (BOOL_unsigned_char_Array_0[0] || ((double_Array_0[1][2] * last_1_double_Array_0_1__0_) <= double_Array_0[1][1])) {
		if (signed_long_int_Array_0[0] >= unsigned_char_Array_0[0]) {
			double_Array_0[1][0] = double_Array_0[0][1];
		} else {
			double_Array_0[1][0] = 1.45;
		}
	} else {
		double_Array_0[1][0] = 128.2;
	}


	// From: Req2Batch162Wrapper_A
	signed long int stepLocal_1 = signed_long_int_Array_0[0];
	signed long int stepLocal_0 = signed_long_int_Array_0[0];
	if ((last_1_unsigned_char_Array_0_1_ * (25 + 64)) != stepLocal_1) {
		if ((last_1_unsigned_char_Array_0_1_ - signed_long_int_Array_0[1]) == stepLocal_0) {
			unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
		} else {
			unsigned_char_Array_0[1] = 16;
		}
	}


	// From: Req3Batch162Wrapper_A
	if (double_Array_0[1][2] < double_Array_0[1][0]) {
		signed_char_Array_0[0][0] = signed_char_Array_0[0][1];
	} else {
		signed_char_Array_0[0][0] = (signed_char_Array_0[1][1] - signed_char_Array_0[1][0]);
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 2305843.009213691400e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= 0.0F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 2305843.009213691400e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -461168.6018427383000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	double_Array_0[0][2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][2] >= -461168.6018427383000e+13F && double_Array_0[0][2] <= -1.0e-20F) || (double_Array_0[0][2] <= 4611686.018427383000e+12F && double_Array_0[0][2] >= 1.0e-20F ));
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -1);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}



void updateLastVariables(void) {
	last_1_double_Array_0_1__0_ = double_Array_0[1][0];
	last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}

int property(void) {
	return (((((min (last_1_double_Array_0_1__0_ , 10.3)) >= last_1_double_Array_0_1__0_) ? (double_Array_0[1][2] == ((double) (double_Array_0[0][2] + double_Array_0[1][1]))) : (double_Array_0[1][2] == ((double) (double_Array_0[0][2] + (499.94 - (double_Array_0[0][1] + double_Array_0[0][0])))))) && (((last_1_unsigned_char_Array_0_1_ * (25 + 64)) != signed_long_int_Array_0[0]) ? (((last_1_unsigned_char_Array_0_1_ - signed_long_int_Array_0[1]) == signed_long_int_Array_0[0]) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : (unsigned_char_Array_0[1] == ((unsigned char) 16))) : 1)) && ((double_Array_0[1][2] < double_Array_0[1][0]) ? (signed_char_Array_0[0][0] == ((signed char) signed_char_Array_0[0][1])) : (signed_char_Array_0[0][0] == ((signed char) (signed_char_Array_0[1][1] - signed_char_Array_0[1][0]))))) && ((BOOL_unsigned_char_Array_0[0] || ((double_Array_0[1][2] * last_1_double_Array_0_1__0_) <= double_Array_0[1][1])) ? ((signed_long_int_Array_0[0] >= unsigned_char_Array_0[0]) ? (double_Array_0[1][0] == ((double) double_Array_0[0][1])) : (double_Array_0[1][0] == ((double) 1.45))) : (double_Array_0[1][0] == ((double) 128.2)))
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
