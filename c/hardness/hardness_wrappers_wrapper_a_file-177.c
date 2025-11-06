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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
	15.125, 1000000000.6, 31.124, 127.5, 32.5
};
signed long int signed_long_int_Array_0[1] = {
	-64
};
signed short int signed_short_int_Array_0[1] = {
	-1
};
unsigned short int unsigned_short_int_Array_0[2][3] = {
	{54889, 5, 8}, {256, 5, 128}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch177Wrapper_A
	signed long int stepLocal_2 = min (5 , (unsigned_short_int_Array_0[1][2] * unsigned_short_int_Array_0[0][2]));
	signed long int stepLocal_1 = unsigned_short_int_Array_0[1][2] * (unsigned_short_int_Array_0[0][2] * 50);
	unsigned short int stepLocal_0 = unsigned_short_int_Array_0[0][2];
	if (stepLocal_2 <= signed_long_int_Array_0[0]) {
		if (unsigned_short_int_Array_0[1][2] > stepLocal_0) {
			if ((- signed_long_int_Array_0[0]) == stepLocal_1) {
				double_Array_0[4] = (max ((double_Array_0[3] - double_Array_0[2]) , double_Array_0[0]));
			}
		}
	} else {
		double_Array_0[4] = double_Array_0[2];
	}


	// From: Req2Batch177Wrapper_A
	if ((unsigned_short_int_Array_0[1][2] * signed_long_int_Array_0[0]) >= -32) {
		unsigned_short_int_Array_0[0][1] = ((unsigned_short_int_Array_0[1][0] + unsigned_short_int_Array_0[1][1]) + 64);
	} else {
		unsigned_short_int_Array_0[0][1] = unsigned_short_int_Array_0[1][0];
	}


	// From: Req3Batch177Wrapper_A
	unsigned short int stepLocal_4 = unsigned_short_int_Array_0[1][0];
	unsigned short int stepLocal_3 = unsigned_short_int_Array_0[0][1];
	if (unsigned_short_int_Array_0[1][1] >= stepLocal_3) {
		if (stepLocal_4 < ((unsigned_short_int_Array_0[0][0] - unsigned_short_int_Array_0[1][1]) << unsigned_short_int_Array_0[0][1])) {
			double_Array_0[1] = double_Array_0[0];
		}
	}


	// From: Req4Batch177Wrapper_A
	signed_short_int_Array_0[0] = unsigned_short_int_Array_0[1][1];
}



void updateVariables(void) {
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854766000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65535);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 16384);
	unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 16383);
	unsigned_short_int_Array_0[0][2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][2] <= 65535);
	unsigned_short_int_Array_0[1][2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][2] <= 65535);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((min (5 , (unsigned_short_int_Array_0[1][2] * unsigned_short_int_Array_0[0][2]))) <= signed_long_int_Array_0[0]) ? ((unsigned_short_int_Array_0[1][2] > unsigned_short_int_Array_0[0][2]) ? (((- signed_long_int_Array_0[0]) == (unsigned_short_int_Array_0[1][2] * (unsigned_short_int_Array_0[0][2] * 50))) ? (double_Array_0[4] == ((double) (max ((double_Array_0[3] - double_Array_0[2]) , double_Array_0[0])))) : 1) : 1) : (double_Array_0[4] == ((double) double_Array_0[2]))) && (((unsigned_short_int_Array_0[1][2] * signed_long_int_Array_0[0]) >= -32) ? (unsigned_short_int_Array_0[0][1] == ((unsigned short int) ((unsigned_short_int_Array_0[1][0] + unsigned_short_int_Array_0[1][1]) + 64))) : (unsigned_short_int_Array_0[0][1] == ((unsigned short int) unsigned_short_int_Array_0[1][0])))) && ((unsigned_short_int_Array_0[1][1] >= unsigned_short_int_Array_0[0][1]) ? ((unsigned_short_int_Array_0[1][0] < ((unsigned_short_int_Array_0[0][0] - unsigned_short_int_Array_0[1][1]) << unsigned_short_int_Array_0[0][1])) ? (double_Array_0[1] == ((double) double_Array_0[0])) : 1) : 1)) && (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[1][1]))
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
