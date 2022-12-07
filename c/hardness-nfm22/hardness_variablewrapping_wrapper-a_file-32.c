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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch32Wrapper_A.c", 13, "reach_error"); }
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
	0, 0
};
signed long int signed_long_int_Array_0[3] = {
	1829634291, 1000000000, 4
};
signed short int signed_short_int_Array_0[1] = {
	0
};
unsigned char unsigned_char_Array_0[2] = {
	10, 128
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{0, 128}, {4, 0}
};

// Calibration values

// Last'ed variables
signed short int last_1_signed_short_int_Array_0_0_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch32Wrapper_A
	if (last_1_signed_short_int_Array_0_0_ >= -50) {
		unsigned_short_int_Array_0[1][1] = (max ((unsigned_short_int_Array_0[0][1] + (abs (unsigned_short_int_Array_0[1][0]))) , unsigned_short_int_Array_0[0][0]));
	}


	// From: Req2Batch32Wrapper_A
	unsigned short int stepLocal_0 = unsigned_short_int_Array_0[1][1];
	if ((unsigned_char_Array_0[1] - unsigned_char_Array_0[0]) < stepLocal_0) {
		if (BOOL_unsigned_char_Array_0[0]) {
			signed_short_int_Array_0[0] = unsigned_char_Array_0[0];
		} else {
			if (BOOL_unsigned_char_Array_0[1]) {
				signed_short_int_Array_0[0] = unsigned_char_Array_0[1];
			}
		}
	}


	// From: Req3Batch32Wrapper_A
	signed long int stepLocal_2 = signed_short_int_Array_0[0] + unsigned_short_int_Array_0[0][1];
	signed long int stepLocal_1 = unsigned_char_Array_0[1] + (4 - unsigned_short_int_Array_0[0][1]);
	if (unsigned_short_int_Array_0[1][0] <= stepLocal_2) {
		if (unsigned_short_int_Array_0[1][1] < stepLocal_1) {
			if (BOOL_unsigned_char_Array_0[0]) {
				signed_long_int_Array_0[2] = (unsigned_short_int_Array_0[0][1] - (signed_long_int_Array_0[0] - (signed_long_int_Array_0[1] - unsigned_short_int_Array_0[1][0])));
			}
		} else {
			signed_long_int_Array_0[2] = (max (((unsigned_char_Array_0[0] + unsigned_short_int_Array_0[0][1]) - signed_long_int_Array_0[0]) , 100));
		}
	} else {
		signed_long_int_Array_0[2] = unsigned_char_Array_0[1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 1073741823);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 536870911);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 65534);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 32767);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 32767);
}



void updateLastVariables() {
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}

int property() {
	return (((last_1_signed_short_int_Array_0_0_ >= -50) ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) (max ((unsigned_short_int_Array_0[0][1] + (abs (unsigned_short_int_Array_0[1][0]))) , unsigned_short_int_Array_0[0][0])))) : 1) && (((unsigned_char_Array_0[1] - unsigned_char_Array_0[0]) < unsigned_short_int_Array_0[1][1]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[0])) : (BOOL_unsigned_char_Array_0[1] ? (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[1])) : 1)) : 1)) && ((unsigned_short_int_Array_0[1][0] <= (signed_short_int_Array_0[0] + unsigned_short_int_Array_0[0][1])) ? ((unsigned_short_int_Array_0[1][1] < (unsigned_char_Array_0[1] + (4 - unsigned_short_int_Array_0[0][1]))) ? (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[2] == ((signed long int) (unsigned_short_int_Array_0[0][1] - (signed_long_int_Array_0[0] - (signed_long_int_Array_0[1] - unsigned_short_int_Array_0[1][0]))))) : 1) : (signed_long_int_Array_0[2] == ((signed long int) (max (((unsigned_char_Array_0[0] + unsigned_short_int_Array_0[0][1]) - signed_long_int_Array_0[0]) , 100))))) : (signed_long_int_Array_0[2] == ((signed long int) unsigned_char_Array_0[1])))
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
