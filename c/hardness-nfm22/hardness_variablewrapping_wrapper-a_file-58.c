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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch58Wrapper_A.c", 13, "reach_error"); }
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
	1
};
signed long int signed_long_int_Array_0[1] = {
	-16
};
signed short int signed_short_int_Array_0[1] = {
	-5
};
unsigned char unsigned_char_Array_0[2][3] = {
	{64, 200, 25}, {10, 100, 64}
};
unsigned long int unsigned_long_int_Array_0[2] = {
	16, 3774350958
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch58Wrapper_A
	signed long int stepLocal_4 = signed_long_int_Array_0[0];
	if (unsigned_char_Array_0[0][2] >= stepLocal_4) {
		unsigned_long_int_Array_0[0] = (unsigned_long_int_Array_0[1] - unsigned_char_Array_0[0][2]);
	}


	// From: Req4Batch58Wrapper_A
	unsigned_char_Array_0[0][0] = unsigned_char_Array_0[1][0];


	// From: Req1Batch58Wrapper_A
	signed long int stepLocal_1 = (unsigned_char_Array_0[0][1] - 2) - unsigned_char_Array_0[1][0];
	signed long int stepLocal_0 = -256;
	if (unsigned_long_int_Array_0[0] <= stepLocal_0) {
		unsigned_char_Array_0[1][2] = (min (unsigned_char_Array_0[0][2] , ((unsigned_char_Array_0[1][1] - 8) + 5)));
	} else {
		if (unsigned_char_Array_0[1][1] <= stepLocal_1) {
			unsigned_char_Array_0[1][2] = unsigned_char_Array_0[0][2];
		} else {
			unsigned_char_Array_0[1][2] = unsigned_char_Array_0[1][0];
		}
	}


	// From: Req2Batch58Wrapper_A
	signed long int stepLocal_3 = (unsigned_char_Array_0[0][1] + unsigned_char_Array_0[1][1]) / signed_long_int_Array_0[0];
	unsigned char stepLocal_2 = unsigned_char_Array_0[0][2] <= signed_long_int_Array_0[0];
	if (unsigned_long_int_Array_0[0] < stepLocal_3) {
		if (BOOL_unsigned_char_Array_0[0] && stepLocal_2) {
			signed_short_int_Array_0[0] = (unsigned_char_Array_0[1][1] + (abs (max (unsigned_long_int_Array_0[0] , unsigned_char_Array_0[0][2]))));
		} else {
			signed_short_int_Array_0[0] = unsigned_char_Array_0[1][0];
		}
	} else {
		signed_short_int_Array_0[0] = unsigned_char_Array_0[1][1];
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 191);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 255);
	unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1] >= 63);
	assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
	unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}



void updateLastVariables() {
}

int property() {
	return ((((unsigned_long_int_Array_0[0] <= -256) ? (unsigned_char_Array_0[1][2] == ((unsigned char) (min (unsigned_char_Array_0[0][2] , ((unsigned_char_Array_0[1][1] - 8) + 5))))) : ((unsigned_char_Array_0[1][1] <= ((unsigned_char_Array_0[0][1] - 2) - unsigned_char_Array_0[1][0])) ? (unsigned_char_Array_0[1][2] == ((unsigned char) unsigned_char_Array_0[0][2])) : (unsigned_char_Array_0[1][2] == ((unsigned char) unsigned_char_Array_0[1][0])))) && ((unsigned_long_int_Array_0[0] < ((unsigned_char_Array_0[0][1] + unsigned_char_Array_0[1][1]) / signed_long_int_Array_0[0])) ? ((BOOL_unsigned_char_Array_0[0] && (unsigned_char_Array_0[0][2] <= signed_long_int_Array_0[0])) ? (signed_short_int_Array_0[0] == ((signed short int) (unsigned_char_Array_0[1][1] + (abs (max (unsigned_long_int_Array_0[0] , unsigned_char_Array_0[0][2])))))) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[1][0]))) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[1][1])))) && ((unsigned_char_Array_0[0][2] >= signed_long_int_Array_0[0]) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) (unsigned_long_int_Array_0[1] - unsigned_char_Array_0[0][2]))) : 1)) && (unsigned_char_Array_0[0][0] == ((unsigned char) unsigned_char_Array_0[1][0]))
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
