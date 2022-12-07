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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch71Wrapper_A.c", 13, "reach_error"); }
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
	1, 0, 0
};
signed char signed_char_Array_0[3] = {
	-4, -10, 5
};
unsigned char unsigned_char_Array_0[5] = {
	128, 32, 8, 8, 16
};
unsigned long int unsigned_long_int_Array_0[1] = {
	2
};
unsigned short int unsigned_short_int_Array_0[2] = {
	1, 1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch71Wrapper_A
	unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[0];
	signed long int stepLocal_0 = unsigned_char_Array_0[2] - unsigned_char_Array_0[3];
	if (BOOL_unsigned_char_Array_0[2]) {
		unsigned_char_Array_0[4] = (max ((max ((unsigned_char_Array_0[3] + unsigned_char_Array_0[2]) , 50)) , unsigned_char_Array_0[1]));
	} else {
		if (BOOL_unsigned_char_Array_0[1] && stepLocal_1) {
			unsigned_char_Array_0[4] = unsigned_char_Array_0[1];
		} else {
			if (stepLocal_0 < unsigned_char_Array_0[1]) {
				unsigned_char_Array_0[4] = unsigned_char_Array_0[2];
			} else {
				unsigned_char_Array_0[4] = 5;
			}
		}
	}


	// From: Req2Batch71Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		unsigned_short_int_Array_0[1] = (abs (unsigned_char_Array_0[1]));
	} else {
		unsigned_short_int_Array_0[1] = (unsigned_char_Array_0[4] + unsigned_char_Array_0[3]);
	}


	// From: Req4Batch71Wrapper_A
	signed_char_Array_0[0] = signed_char_Array_0[2];


	// From: Req5Batch71Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_char_Array_0[3];


	// From: Req3Batch71Wrapper_A
	if (unsigned_char_Array_0[1] <= (max (unsigned_char_Array_0[3] , (unsigned_char_Array_0[0] - unsigned_char_Array_0[2])))) {
		if ((unsigned_char_Array_0[2] / signed_char_Array_0[1]) > (unsigned_long_int_Array_0[0] * (unsigned_long_int_Array_0[0] + unsigned_char_Array_0[1]))) {
			unsigned_short_int_Array_0[0] = 128;
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
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -128);
	assume_abort_if_not(signed_char_Array_0[1] <= 127);
	assume_abort_if_not(signed_char_Array_0[1] != 0);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= -127);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 127);
	unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[3] <= 127);
}



void updateLastVariables() {
}

int property() {
	return ((((BOOL_unsigned_char_Array_0[2] ? (unsigned_char_Array_0[4] == ((unsigned char) (max ((max ((unsigned_char_Array_0[3] + unsigned_char_Array_0[2]) , 50)) , unsigned_char_Array_0[1])))) : ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (unsigned_char_Array_0[4] == ((unsigned char) unsigned_char_Array_0[1])) : (((unsigned_char_Array_0[2] - unsigned_char_Array_0[3]) < unsigned_char_Array_0[1]) ? (unsigned_char_Array_0[4] == ((unsigned char) unsigned_char_Array_0[2])) : (unsigned_char_Array_0[4] == ((unsigned char) 5))))) && (BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (abs (unsigned_char_Array_0[1])))) : (unsigned_short_int_Array_0[1] == ((unsigned short int) (unsigned_char_Array_0[4] + unsigned_char_Array_0[3]))))) && ((unsigned_char_Array_0[1] <= (max (unsigned_char_Array_0[3] , (unsigned_char_Array_0[0] - unsigned_char_Array_0[2])))) ? (((unsigned_char_Array_0[2] / signed_char_Array_0[1]) > (unsigned_long_int_Array_0[0] * (unsigned_long_int_Array_0[0] + unsigned_char_Array_0[1]))) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) 128)) : 1) : 1)) && (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[2]))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[3]))
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
