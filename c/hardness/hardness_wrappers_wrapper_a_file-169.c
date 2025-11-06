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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch169Wrapper_A.c", 13, "reach_error"); }
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
	0
};
double double_Array_0[2][3] = {
	{15.6, 31.8, 9999999999999.625}, {199.5, 9.2, -0.6}
};
signed long int signed_long_int_Array_0[1] = {
	32
};
signed short int signed_short_int_Array_0[2][3] = {
	{2, -8, 5}, {21123, 1, -25}
};
unsigned long int unsigned_long_int_Array_0[1] = {
	128
};
unsigned short int unsigned_short_int_Array_0[1] = {
	25
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch169Wrapper_A
	if (double_Array_0[1][2] >= (double_Array_0[0][2] + double_Array_0[1][1])) {
		signed_short_int_Array_0[1][2] = (signed_short_int_Array_0[0][2] - signed_short_int_Array_0[1][1]);
	}


	// From: Req2Batch169Wrapper_A
	signed short int stepLocal_0 = signed_short_int_Array_0[0][2];
	if (stepLocal_0 >= ((signed_short_int_Array_0[1][0] - signed_short_int_Array_0[0][0]) - signed_short_int_Array_0[1][1])) {
		if (double_Array_0[1][2] == (max (double_Array_0[0][2] , (- double_Array_0[1][1])))) {
			unsigned_long_int_Array_0[0] = (signed_short_int_Array_0[1][1] + signed_short_int_Array_0[1][0]);
		} else {
			if (double_Array_0[1][1] >= double_Array_0[0][2]) {
				unsigned_long_int_Array_0[0] = signed_short_int_Array_0[0][0];
			}
		}
	} else {
		unsigned_long_int_Array_0[0] = signed_short_int_Array_0[1][1];
	}


	// From: Req4Batch169Wrapper_A
	signed_long_int_Array_0[0] = signed_short_int_Array_0[0][0];


	// From: Req5Batch169Wrapper_A
	unsigned_short_int_Array_0[0] = signed_short_int_Array_0[1][0];


	// From: Req6Batch169Wrapper_A
	signed_short_int_Array_0[0][1] = signed_short_int_Array_0[0][2];


	// From: Req3Batch169Wrapper_A
	if (signed_short_int_Array_0[1][1] > signed_long_int_Array_0[0]) {
		if (BOOL_unsigned_char_Array_0[0]) {
			double_Array_0[0][1] = ((abs (double_Array_0[0][0])) - double_Array_0[1][0]);
		} else {
			double_Array_0[0][1] = double_Array_0[0][0];
		}
	} else {
		double_Array_0[0][1] = double_Array_0[1][0];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= -922337.2036854766000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -922337.2036854776000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 9223372.036854776000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	double_Array_0[0][2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][2] >= -922337.2036854776000e+13F && double_Array_0[0][2] <= -1.0e-20F) || (double_Array_0[0][2] <= 9223372.036854776000e+12F && double_Array_0[0][2] >= 1.0e-20F ));
	double_Array_0[1][2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][2] >= -922337.2036854776000e+13F && double_Array_0[1][2] <= -1.0e-20F) || (double_Array_0[1][2] <= 9223372.036854776000e+12F && double_Array_0[1][2] >= 1.0e-20F ));
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 16384);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= 16383);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32767);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 32766);
	signed_short_int_Array_0[0][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][2] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[0][2] <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((double_Array_0[1][2] >= (double_Array_0[0][2] + double_Array_0[1][1])) ? (signed_short_int_Array_0[1][2] == ((signed short int) (signed_short_int_Array_0[0][2] - signed_short_int_Array_0[1][1]))) : 1) && ((signed_short_int_Array_0[0][2] >= ((signed_short_int_Array_0[1][0] - signed_short_int_Array_0[0][0]) - signed_short_int_Array_0[1][1])) ? ((double_Array_0[1][2] == (max (double_Array_0[0][2] , (- double_Array_0[1][1])))) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) (signed_short_int_Array_0[1][1] + signed_short_int_Array_0[1][0]))) : ((double_Array_0[1][1] >= double_Array_0[0][2]) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_short_int_Array_0[0][0])) : 1)) : (unsigned_long_int_Array_0[0] == ((unsigned long int) signed_short_int_Array_0[1][1])))) && ((signed_short_int_Array_0[1][1] > signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[0][1] == ((double) ((abs (double_Array_0[0][0])) - double_Array_0[1][0]))) : (double_Array_0[0][1] == ((double) double_Array_0[0][0]))) : (double_Array_0[0][1] == ((double) double_Array_0[1][0])))) && (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[0][0]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) signed_short_int_Array_0[1][0]))) && (signed_short_int_Array_0[0][1] == ((signed short int) signed_short_int_Array_0[0][2]))
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
