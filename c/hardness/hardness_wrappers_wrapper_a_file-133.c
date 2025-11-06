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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch133Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[3] = {
	1, 0, 1
};
double double_Array_0[2][2] = {
	{0.5, 9.4}, {49.5, 0.30000000000000004}
};
signed long int signed_long_int_Array_0[2] = {
	1, 16
};
signed short int signed_short_int_Array_0[2][2] = {
	{-10000, -16}, {2, -64}
};
unsigned short int unsigned_short_int_Array_0[3] = {
	4, 256, 5
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch133Wrapper_A
	if (8 >= (signed_long_int_Array_0[1] + signed_long_int_Array_0[0])) {
		signed_short_int_Array_0[1][1] = (min (signed_short_int_Array_0[0][1] , (signed_short_int_Array_0[1][0] + 10)));
	}


	// From: Req2Batch133Wrapper_A
	signed long int stepLocal_0 = signed_long_int_Array_0[0];
	if (stepLocal_0 <= signed_long_int_Array_0[1]) {
		unsigned_short_int_Array_0[2] = (unsigned_short_int_Array_0[1] + unsigned_short_int_Array_0[0]);
	}


	// From: Req4Batch133Wrapper_A
	unsigned short int stepLocal_4 = unsigned_short_int_Array_0[2];
	unsigned char stepLocal_3 = BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1];
	if (stepLocal_3 || (! BOOL_unsigned_char_Array_0[2])) {
		if (stepLocal_4 < unsigned_short_int_Array_0[1]) {
			signed_short_int_Array_0[0][0] = (min (signed_short_int_Array_0[1][0] , signed_short_int_Array_0[0][1]));
		} else {
			if (BOOL_unsigned_char_Array_0[2]) {
				signed_short_int_Array_0[0][0] = signed_short_int_Array_0[1][0];
			}
		}
	} else {
		signed_short_int_Array_0[0][0] = signed_short_int_Array_0[1][0];
	}


	// From: Req3Batch133Wrapper_A
	signed long int stepLocal_2 = unsigned_short_int_Array_0[2] + signed_short_int_Array_0[0][0];
	unsigned short int stepLocal_1 = unsigned_short_int_Array_0[1];
	if (unsigned_short_int_Array_0[1] <= stepLocal_2) {
		if (signed_long_int_Array_0[0] >= stepLocal_1) {
			double_Array_0[1][0] = (double_Array_0[0][0] + (abs (min (double_Array_0[0][1] , double_Array_0[1][1]))));
		}
	} else {
		double_Array_0[1][0] = (double_Array_0[1][1] + double_Array_0[0][0]);
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= -461168.6018427383000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 4611686.018427383000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= -461168.6018427383000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 4611686.018427383000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -461168.6018427383000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 16383);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((8 >= (signed_long_int_Array_0[1] + signed_long_int_Array_0[0])) ? (signed_short_int_Array_0[1][1] == ((signed short int) (min (signed_short_int_Array_0[0][1] , (signed_short_int_Array_0[1][0] + 10))))) : 1) && ((signed_long_int_Array_0[0] <= signed_long_int_Array_0[1]) ? (unsigned_short_int_Array_0[2] == ((unsigned short int) (unsigned_short_int_Array_0[1] + unsigned_short_int_Array_0[0]))) : 1)) && ((unsigned_short_int_Array_0[1] <= (unsigned_short_int_Array_0[2] + signed_short_int_Array_0[0][0])) ? ((signed_long_int_Array_0[0] >= unsigned_short_int_Array_0[1]) ? (double_Array_0[1][0] == ((double) (double_Array_0[0][0] + (abs (min (double_Array_0[0][1] , double_Array_0[1][1])))))) : 1) : (double_Array_0[1][0] == ((double) (double_Array_0[1][1] + double_Array_0[0][0]))))) && (((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) || (! BOOL_unsigned_char_Array_0[2])) ? ((unsigned_short_int_Array_0[2] < unsigned_short_int_Array_0[1]) ? (signed_short_int_Array_0[0][0] == ((signed short int) (min (signed_short_int_Array_0[1][0] , signed_short_int_Array_0[0][1])))) : (BOOL_unsigned_char_Array_0[2] ? (signed_short_int_Array_0[0][0] == ((signed short int) signed_short_int_Array_0[1][0])) : 1)) : (signed_short_int_Array_0[0][0] == ((signed short int) signed_short_int_Array_0[1][0])))
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
