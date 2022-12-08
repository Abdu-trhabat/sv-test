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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch13Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	unsigned char var_1_2;
	signed char var_1_5;
	unsigned short int var_1_6;
	signed char var_1_7;
	unsigned short int var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	unsigned char var_1_11;
	double var_1_12;
	double var_1_13;
	double var_1_14;
	double var_1_15;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	25,
	1,
	16,
	16,
	4,
	2,
	64,
	0,
	16,
	128.4,
	50.2,
	3.8,
	25.1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch13Wrapper_S
	if (((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) + WrapperStruct00.var_1_14) <= (256.625 * (max (1.875 , WrapperStruct00.var_1_15)))) {
		WrapperStruct00.var_1_11 = ((abs (5)) + 5);
	}


	// From: Req1Batch13Wrapper_S
	if (WrapperStruct00.var_1_2) {
		WrapperStruct00.var_1_1 = (max (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_11));
	}


	// From: Req2Batch13Wrapper_S
	if ((WrapperStruct00.var_1_1 == 16) || (WrapperStruct00.var_1_11 < (10 / WrapperStruct00.var_1_6))) {
		WrapperStruct00.var_1_5 = WrapperStruct00.var_1_7;
	} else {
		WrapperStruct00.var_1_5 = 5;
	}


	// From: Req3Batch13Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_11;
	unsigned char stepLocal_0 = WrapperStruct00.var_1_2;
	if (stepLocal_0 || (WrapperStruct00.var_1_11 >= WrapperStruct00.var_1_11)) {
		if (stepLocal_1 < ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) - 16)) {
			WrapperStruct00.var_1_8 = (max (WrapperStruct00.var_1_10 , 32));
		}
	} else {
		WrapperStruct00.var_1_8 = (min (WrapperStruct00.var_1_9 , WrapperStruct00.var_1_11));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 63);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 64);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}



void updateLastVariables() {
}

int property() {
	return (((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned short int) (max (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_11)))) : 1) && (((WrapperStruct00.var_1_1 == 16) || (WrapperStruct00.var_1_11 < (10 / WrapperStruct00.var_1_6))) ? (WrapperStruct00.var_1_5 == ((signed char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_5 == ((signed char) 5)))) && ((WrapperStruct00.var_1_2 || (WrapperStruct00.var_1_11 >= WrapperStruct00.var_1_11)) ? ((WrapperStruct00.var_1_11 < ((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) - 16)) ? (WrapperStruct00.var_1_8 == ((unsigned short int) (max (WrapperStruct00.var_1_10 , 32)))) : 1) : (WrapperStruct00.var_1_8 == ((unsigned short int) (min (WrapperStruct00.var_1_9 , WrapperStruct00.var_1_11)))))) && ((((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) + WrapperStruct00.var_1_14) <= (256.625 * (max (1.875 , WrapperStruct00.var_1_15)))) ? (WrapperStruct00.var_1_11 == ((unsigned char) ((abs (5)) + 5))) : 1)
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
