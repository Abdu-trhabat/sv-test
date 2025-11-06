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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Wrapper_A.c", 13, "reach_error"); }
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
signed char signed_char_Array_0[2] = {
	16, 10
};
unsigned char unsigned_char_Array_0[2][2] = {
	{2, 200}, {128, 32}
};
unsigned long int unsigned_long_int_Array_0[3] = {
	8, 256, 1
};

// Calibration values

// Last'ed variables
unsigned char last_1_unsigned_char_Array_0_0__1_ = 200;
unsigned char last_1_unsigned_char_Array_0_1__1_ = 32;
unsigned long int last_1_unsigned_long_int_Array_0_2_ = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch170Wrapper_A
	signed long int stepLocal_5 = unsigned_char_Array_0[1][0] | last_1_unsigned_char_Array_0_1__1_;
	if (last_1_unsigned_long_int_Array_0_2_ != stepLocal_5) {
		unsigned_char_Array_0[0][1] = unsigned_char_Array_0[1][0];
	}


	// From: Req2Batch170Wrapper_A
	signed long int stepLocal_4 = last_1_unsigned_char_Array_0_0__1_;
	unsigned long int stepLocal_3 = unsigned_long_int_Array_0[0];
	unsigned char stepLocal_2 = unsigned_char_Array_0[0][0];
	unsigned long int stepLocal_1 = unsigned_long_int_Array_0[1];
	if (stepLocal_1 > unsigned_long_int_Array_0[0]) {
		if (stepLocal_4 > unsigned_long_int_Array_0[1]) {
			unsigned_char_Array_0[1][1] = unsigned_char_Array_0[1][0];
		} else {
			unsigned_char_Array_0[1][1] = (max (unsigned_char_Array_0[1][0] , unsigned_char_Array_0[0][0]));
		}
	} else {
		if (stepLocal_3 <= unsigned_long_int_Array_0[1]) {
			if (unsigned_char_Array_0[1][0] <= stepLocal_2) {
				unsigned_char_Array_0[1][1] = (max (unsigned_char_Array_0[1][0] , unsigned_char_Array_0[0][0]));
			}
		}
	}


	// From: Req1Batch170Wrapper_A
	unsigned char stepLocal_0 = ! BOOL_unsigned_char_Array_0[0];
	if ((unsigned_char_Array_0[0][1] != (min (unsigned_char_Array_0[1][1] , 64))) || stepLocal_0) {
		unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[1];
	} else {
		unsigned_long_int_Array_0[2] = unsigned_long_int_Array_0[0];
	}


	// From: Req4Batch170Wrapper_A
	unsigned char stepLocal_7 = unsigned_char_Array_0[0][1] == unsigned_long_int_Array_0[1];
	unsigned long int stepLocal_6 = unsigned_long_int_Array_0[0];
	if (BOOL_unsigned_char_Array_0[0] && stepLocal_7) {
		if (stepLocal_6 <= unsigned_char_Array_0[0][0]) {
			signed_char_Array_0[1] = signed_char_Array_0[0];
		} else {
			signed_char_Array_0[1] = 16;
		}
	} else {
		signed_char_Array_0[1] = signed_char_Array_0[0];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 254);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967294);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
}



void updateLastVariables(void) {
	last_1_unsigned_char_Array_0_0__1_ = unsigned_char_Array_0[0][1];
	last_1_unsigned_char_Array_0_1__1_ = unsigned_char_Array_0[1][1];
	last_1_unsigned_long_int_Array_0_2_ = unsigned_long_int_Array_0[2];
}

int property(void) {
	return (((((unsigned_char_Array_0[0][1] != (min (unsigned_char_Array_0[1][1] , 64))) || (! BOOL_unsigned_char_Array_0[0])) ? (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[1])) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_long_int_Array_0[0]))) && ((unsigned_long_int_Array_0[1] > unsigned_long_int_Array_0[0]) ? ((last_1_unsigned_char_Array_0_0__1_ > unsigned_long_int_Array_0[1]) ? (unsigned_char_Array_0[1][1] == ((unsigned char) unsigned_char_Array_0[1][0])) : (unsigned_char_Array_0[1][1] == ((unsigned char) (max (unsigned_char_Array_0[1][0] , unsigned_char_Array_0[0][0]))))) : ((unsigned_long_int_Array_0[0] <= unsigned_long_int_Array_0[1]) ? ((unsigned_char_Array_0[1][0] <= unsigned_char_Array_0[0][0]) ? (unsigned_char_Array_0[1][1] == ((unsigned char) (max (unsigned_char_Array_0[1][0] , unsigned_char_Array_0[0][0])))) : 1) : 1))) && ((last_1_unsigned_long_int_Array_0_2_ != (unsigned_char_Array_0[1][0] | last_1_unsigned_char_Array_0_1__1_)) ? (unsigned_char_Array_0[0][1] == ((unsigned char) unsigned_char_Array_0[1][0])) : 1)) && ((BOOL_unsigned_char_Array_0[0] && (unsigned_char_Array_0[0][1] == unsigned_long_int_Array_0[1])) ? ((unsigned_long_int_Array_0[0] <= unsigned_char_Array_0[0][0]) ? (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[0])) : (signed_char_Array_0[1] == ((signed char) 16))) : (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[0])))
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
