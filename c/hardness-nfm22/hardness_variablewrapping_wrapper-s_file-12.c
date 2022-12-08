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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch12Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	signed long int var_1_2;
	signed long int var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_12;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	0,
	-8,
	128,
	0,
	1,
	5,
	128,
	5,
	10,
	0,
	1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch12Wrapper_S
	signed long int stepLocal_2 = WrapperStruct00.var_1_2;
	if (WrapperStruct00.var_1_3 != stepLocal_2) {
		WrapperStruct00.var_1_6 = (abs (WrapperStruct00.var_1_7 - (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9))));
	}


	// From: Req3Batch12Wrapper_S
	unsigned char stepLocal_4 = WrapperStruct00.var_1_9;
	signed long int stepLocal_3 = WrapperStruct00.var_1_6 * (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_6);
	if ((WrapperStruct00.var_1_8 * (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_6)) <= stepLocal_4) {
		if ((128 + WrapperStruct00.var_1_9) < stepLocal_3) {
			WrapperStruct00.var_1_10 = (WrapperStruct00.var_1_4 || (! (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_12)));
		} else {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_5;
		}
	} else {
		WrapperStruct00.var_1_10 = WrapperStruct00.var_1_12;
	}


	// From: Req1Batch12Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_6;
	unsigned char stepLocal_0 = WrapperStruct00.var_1_6;
	if (! (-50 < WrapperStruct00.var_1_6)) {
		if (stepLocal_1 != WrapperStruct00.var_1_6) {
			if (stepLocal_0 <= WrapperStruct00.var_1_6) {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
			}
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
		}
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
}



void updateLastVariables() {
}

int property() {
	return (((! (-50 < WrapperStruct00.var_1_6)) ? ((WrapperStruct00.var_1_6 != WrapperStruct00.var_1_6) ? ((WrapperStruct00.var_1_6 <= WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_4)) : 1) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_5))) : 1) && ((WrapperStruct00.var_1_3 != WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_6 == ((unsigned char) (abs (WrapperStruct00.var_1_7 - (max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)))))) : 1)) && (((WrapperStruct00.var_1_8 * (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_6)) <= WrapperStruct00.var_1_9) ? (((128 + WrapperStruct00.var_1_9) < (WrapperStruct00.var_1_6 * (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_6))) ? (WrapperStruct00.var_1_10 == ((unsigned char) (WrapperStruct00.var_1_4 || (! (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_12))))) : (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_5))) : (WrapperStruct00.var_1_10 == ((unsigned char) WrapperStruct00.var_1_12)))
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
