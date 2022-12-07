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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch53Wrapper_A.c", 13, "reach_error"); }
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
	{0, 1, 1}, {0, 0, 0}
};
double double_Array_0[2] = {
	256.5, 8.8
};
unsigned long int unsigned_long_int_Array_0[5] = {
	3110219175, 1, 1000000000, 1456677701, 5
};
unsigned short int unsigned_short_int_Array_0[2] = {
	16, 128
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch53Wrapper_A
	BOOL_unsigned_char_Array_0[1][2] = BOOL_unsigned_char_Array_0[1][0];


	// From: Req4Batch53Wrapper_A
	if (unsigned_long_int_Array_0[1] <= (unsigned_long_int_Array_0[0] - unsigned_long_int_Array_0[2])) {
		unsigned_short_int_Array_0[0] = (abs (unsigned_short_int_Array_0[1]));
	}


	// From: Req5Batch53Wrapper_A
	if ((double_Array_0[0] * 16.5f) > double_Array_0[1]) {
		BOOL_unsigned_char_Array_0[0][2] = (! BOOL_unsigned_char_Array_0[0][1]);
	} else {
		BOOL_unsigned_char_Array_0[0][2] = (BOOL_unsigned_char_Array_0[0][1] && BOOL_unsigned_char_Array_0[1][1]);
	}


	// From: Req1Batch53Wrapper_A
	unsigned_long_int_Array_0[4] = (unsigned_short_int_Array_0[0] + (unsigned_long_int_Array_0[3] - (unsigned_long_int_Array_0[2] - unsigned_short_int_Array_0[0])));


	// From: Req3Batch53Wrapper_A
	signed long int stepLocal_1 = min (unsigned_short_int_Array_0[0] , unsigned_short_int_Array_0[0]);
	unsigned long int stepLocal_0 = unsigned_long_int_Array_0[3];
	if (stepLocal_1 != (min (unsigned_long_int_Array_0[2] , unsigned_long_int_Array_0[3]))) {
		if (double_Array_0[0] == double_Array_0[1]) {
			if (BOOL_unsigned_char_Array_0[1][2]) {
				if (stepLocal_0 >= unsigned_short_int_Array_0[0]) {
					BOOL_unsigned_char_Array_0[0][0] = (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][1]);
				} else {
					BOOL_unsigned_char_Array_0[0][0] = BOOL_unsigned_char_Array_0[1][0];
				}
			}
		}
	} else {
		BOOL_unsigned_char_Array_0[0][0] = BOOL_unsigned_char_Array_0[0][1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][0] <= 0);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 1);
	BOOL_unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1][1] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 536870911);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 536870911);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 1073741823);
	unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[3] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[3] <= 2147483647);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}



void updateLastVariables() {
}

int property() {
	return ((((unsigned_long_int_Array_0[4] == ((unsigned long int) (unsigned_short_int_Array_0[0] + (unsigned_long_int_Array_0[3] - (unsigned_long_int_Array_0[2] - unsigned_short_int_Array_0[0]))))) && (BOOL_unsigned_char_Array_0[1][2] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0]))) && (((min (unsigned_short_int_Array_0[0] , unsigned_short_int_Array_0[0])) != (min (unsigned_long_int_Array_0[2] , unsigned_long_int_Array_0[3]))) ? ((double_Array_0[0] == double_Array_0[1]) ? (BOOL_unsigned_char_Array_0[1][2] ? ((unsigned_long_int_Array_0[3] >= unsigned_short_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) (BOOL_unsigned_char_Array_0[1][0] || BOOL_unsigned_char_Array_0[0][1]))) : (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) BOOL_unsigned_char_Array_0[1][0]))) : 1) : 1) : (BOOL_unsigned_char_Array_0[0][0] == ((unsigned char) BOOL_unsigned_char_Array_0[0][1])))) && ((unsigned_long_int_Array_0[1] <= (unsigned_long_int_Array_0[0] - unsigned_long_int_Array_0[2])) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) (abs (unsigned_short_int_Array_0[1])))) : 1)) && (((double_Array_0[0] * 16.5f) > double_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0][2] == ((unsigned char) (! BOOL_unsigned_char_Array_0[0][1]))) : (BOOL_unsigned_char_Array_0[0][2] == ((unsigned char) (BOOL_unsigned_char_Array_0[0][1] && BOOL_unsigned_char_Array_0[1][1]))))
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
