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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Wrapper_A.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[5] = {
	1, 0, 1, 0, 0
};
signed long int signed_long_int_Array_0[2] = {
	128, -8
};
unsigned char unsigned_char_Array_0[2][2] = {
	{10, 128}, {5, 5}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12Wrapper_A
	signed long int stepLocal_2 = signed_long_int_Array_0[1];
	if (signed_long_int_Array_0[0] != stepLocal_2) {
		unsigned_char_Array_0[1][1] = (abs (unsigned_char_Array_0[0][1] - (max (unsigned_char_Array_0[1][0] , unsigned_char_Array_0[0][0]))));
	}


	// From: Req3Batch12Wrapper_A
	unsigned char stepLocal_4 = unsigned_char_Array_0[0][0];
	signed long int stepLocal_3 = unsigned_char_Array_0[1][1] * (unsigned_char_Array_0[1][1] + unsigned_char_Array_0[1][1]);
	if ((unsigned_char_Array_0[1][0] * (unsigned_char_Array_0[1][1] + unsigned_char_Array_0[1][1])) <= stepLocal_4) {
		if ((128 + unsigned_char_Array_0[0][0]) < stepLocal_3) {
			BOOL_unsigned_char_Array_0[1] = (BOOL_unsigned_char_Array_0[3] || (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[0])));
		} else {
			BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[2];
		}
	} else {
		BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[0];
	}


	// From: Req1Batch12Wrapper_A
	unsigned char stepLocal_1 = unsigned_char_Array_0[1][1];
	unsigned char stepLocal_0 = unsigned_char_Array_0[1][1];
	if (! (-50 < unsigned_char_Array_0[1][1])) {
		if (stepLocal_1 != unsigned_char_Array_0[1][1]) {
			if (stepLocal_0 <= unsigned_char_Array_0[1][1]) {
				BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[3];
			}
		} else {
			BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[2];
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 127);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((! (-50 < unsigned_char_Array_0[1][1])) ? ((unsigned_char_Array_0[1][1] != unsigned_char_Array_0[1][1]) ? ((unsigned_char_Array_0[1][1] <= unsigned_char_Array_0[1][1]) ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[3])) : 1) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[2]))) : 1) && ((signed_long_int_Array_0[0] != signed_long_int_Array_0[1]) ? (unsigned_char_Array_0[1][1] == ((unsigned char) (abs (unsigned_char_Array_0[0][1] - (max (unsigned_char_Array_0[1][0] , unsigned_char_Array_0[0][0])))))) : 1)) && (((unsigned_char_Array_0[1][0] * (unsigned_char_Array_0[1][1] + unsigned_char_Array_0[1][1])) <= unsigned_char_Array_0[0][0]) ? (((128 + unsigned_char_Array_0[0][0]) < (unsigned_char_Array_0[1][1] * (unsigned_char_Array_0[1][1] + unsigned_char_Array_0[1][1]))) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (BOOL_unsigned_char_Array_0[3] || (! (BOOL_unsigned_char_Array_0[2] && BOOL_unsigned_char_Array_0[0]))))) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[2]))) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[0])))
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
