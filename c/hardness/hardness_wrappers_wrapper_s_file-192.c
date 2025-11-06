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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned char var_1_2;
	unsigned short int var_1_3;
	signed long int var_1_4;
	signed long int var_1_5;
	signed long int var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	unsigned short int var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	signed char var_1_14;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	256.6,
	1,
	5,
	32,
	16,
	-5,
	500.35,
	7.375,
	7.25,
	8.2,
	8,
	16,
	32,
	-4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch192Wrapper_S
	signed long int stepLocal_2 = (200 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_13;
	signed long int stepLocal_1 = WrapperStruct00.var_1_5;
	if (stepLocal_1 < WrapperStruct00.var_1_3) {
		if (stepLocal_2 >= -100) {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_12;
		} else {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_13;
		}
	}


	// From: Req3Batch192Wrapper_S
	signed long int stepLocal_3 = 1 - WrapperStruct00.var_1_13;
	if ((abs (WrapperStruct00.var_1_9)) >= WrapperStruct00.var_1_7) {
		if ((-4 + (WrapperStruct00.var_1_12 * WrapperStruct00.var_1_11)) < stepLocal_3) {
			WrapperStruct00.var_1_14 = WrapperStruct00.var_1_12;
		} else {
			WrapperStruct00.var_1_14 = -8;
		}
	} else {
		WrapperStruct00.var_1_14 = WrapperStruct00.var_1_12;
	}


	// From: Req1Batch192Wrapper_S
	signed long int stepLocal_0 = (min (WrapperStruct00.var_1_4 , -5)) + (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6));
	if (WrapperStruct00.var_1_2) {
		if ((min (WrapperStruct00.var_1_11 , 0)) <= stepLocal_0) {
			WrapperStruct00.var_1_1 = (abs (WrapperStruct00.var_1_7));
		} else {
			WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10);
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 65535);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 64);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((WrapperStruct00.var_1_2 ? (((min (WrapperStruct00.var_1_11 , 0)) <= ((min (WrapperStruct00.var_1_4 , -5)) + (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)))) ? (WrapperStruct00.var_1_1 == ((double) (abs (WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_1 == ((double) ((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10)))) : (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_8))) && ((WrapperStruct00.var_1_5 < WrapperStruct00.var_1_3) ? ((((200 - WrapperStruct00.var_1_12) - WrapperStruct00.var_1_13) >= -100) ? (WrapperStruct00.var_1_11 == ((unsigned short int) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_11 == ((unsigned short int) WrapperStruct00.var_1_13))) : 1)) && (((abs (WrapperStruct00.var_1_9)) >= WrapperStruct00.var_1_7) ? (((-4 + (WrapperStruct00.var_1_12 * WrapperStruct00.var_1_11)) < (1 - WrapperStruct00.var_1_13)) ? (WrapperStruct00.var_1_14 == ((signed char) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_14 == ((signed char) -8))) : (WrapperStruct00.var_1_14 == ((signed char) WrapperStruct00.var_1_12)))
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
