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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch88Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	unsigned char var_1_5;
	unsigned char var_1_6;
	signed char var_1_7;
	signed char var_1_8;
	signed char var_1_9;
	unsigned long int var_1_10;
	unsigned long int var_1_11;
	unsigned long int var_1_12;
	unsigned long int var_1_13;
	signed long int var_1_14;
	signed short int var_1_15;
	float var_1_16;
	float var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	-8,
	0,
	1,
	-1,
	-50,
	100,
	25,
	2568920345,
	1191097264,
	1801344522,
	64,
	-16,
	1000000.5,
	4.5,
	0,
	128
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_10 = 25;
signed short int last_1_WrapperStruct00_var_1_15 = -16;
unsigned char last_1_WrapperStruct00_var_1_18 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch88Wrapper_S
	if (((last_1_WrapperStruct00_var_1_15 | last_1_WrapperStruct00_var_1_10) > last_1_WrapperStruct00_var_1_18) && WrapperStruct00.var_1_5) {
		if (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_7;
	}


	// From: Req2Batch88Wrapper_S
	if (WrapperStruct00.var_1_5) {
		WrapperStruct00.var_1_8 = (max (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_9));
	}


	// From: Req4Batch88Wrapper_S
	if (WrapperStruct00.var_1_12 <= WrapperStruct00.var_1_8) {
		WrapperStruct00.var_1_14 = (abs (WrapperStruct00.var_1_8));
	}


	// From: Req5Batch88Wrapper_S
	WrapperStruct00.var_1_15 = 2;


	// From: Req6Batch88Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_17;


	// From: Req7Batch88Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_19;


	// From: Req3Batch88Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_8 < WrapperStruct00.var_1_1;
	if (stepLocal_0 && ((max (WrapperStruct00.var_1_9 , WrapperStruct00.var_1_8)) == WrapperStruct00.var_1_7)) {
		WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 - ((max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13)) - 1u));
	} else {
		WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_13);
	}
}



void updateVariables() {
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 126);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 126);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967294);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 254);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
	last_1_WrapperStruct00_var_1_15 = WrapperStruct00.var_1_15;
	last_1_WrapperStruct00_var_1_18 = WrapperStruct00.var_1_18;
}

int property() {
	return (((((((((last_1_WrapperStruct00_var_1_15 | last_1_WrapperStruct00_var_1_10) > last_1_WrapperStruct00_var_1_18) && WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_1 == ((signed char) WrapperStruct00.var_1_7))) && (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_8 == ((signed char) (max (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_9)))) : 1)) && (((WrapperStruct00.var_1_8 < WrapperStruct00.var_1_1) && ((max (WrapperStruct00.var_1_9 , WrapperStruct00.var_1_8)) == WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_10 == ((unsigned long int) (WrapperStruct00.var_1_11 - ((max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13)) - 1u)))) : (WrapperStruct00.var_1_10 == ((unsigned long int) (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_13))))) && ((WrapperStruct00.var_1_12 <= WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_14 == ((signed long int) (abs (WrapperStruct00.var_1_8)))) : 1)) && (WrapperStruct00.var_1_15 == ((signed short int) 2))) && (WrapperStruct00.var_1_16 == ((float) WrapperStruct00.var_1_17))) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_19))
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
