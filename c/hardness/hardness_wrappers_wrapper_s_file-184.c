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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned short int var_1_6;
	signed long int var_1_7;
	signed long int var_1_8;
	float var_1_9;
	unsigned char var_1_10;
	float var_1_11;
	float var_1_12;
	float var_1_13;
	signed long int var_1_14;
	unsigned short int var_1_15;
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
	1,
	64,
	25,
	128,
	128,
	8,
	200,
	256,
	5.25,
	0,
	7.75,
	10.5,
	31.4,
	-16,
	25
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch184Wrapper_S
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_3;
	if (WrapperStruct00.var_1_2 <= stepLocal_0) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 - 32);
	} else {
		WrapperStruct00.var_1_1 = (max ((max (WrapperStruct00.var_1_4 , 100)) , WrapperStruct00.var_1_5));
	}


	// From: Req3Batch184Wrapper_S
	unsigned char stepLocal_2 = WrapperStruct00.var_1_5;
	if (((WrapperStruct00.var_1_1 + WrapperStruct00.var_1_8) + WrapperStruct00.var_1_2) < stepLocal_2) {
		if (WrapperStruct00.var_1_10) {
			WrapperStruct00.var_1_9 = (abs (WrapperStruct00.var_1_11 - 4.25f));
		} else {
			WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_11 - (8.966829933912052E18f - WrapperStruct00.var_1_12));
		}
	} else {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_12;
	}


	// From: Req4Batch184Wrapper_S
	WrapperStruct00.var_1_13 = WrapperStruct00.var_1_11;


	// From: Req6Batch184Wrapper_S
	WrapperStruct00.var_1_15 = WrapperStruct00.var_1_4;


	// From: Req2Batch184Wrapper_S
	unsigned long int stepLocal_1 = (max (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_2)) / (max (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_8));
	if ((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_4) > stepLocal_1) {
		WrapperStruct00.var_1_6 = (max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_15));
	}


	// From: Req5Batch184Wrapper_S
	WrapperStruct00.var_1_14 = WrapperStruct00.var_1_15;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 254);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_4 - 32))) : (WrapperStruct00.var_1_1 == ((unsigned char) (max ((max (WrapperStruct00.var_1_4 , 100)) , WrapperStruct00.var_1_5))))) && (((WrapperStruct00.var_1_5 + WrapperStruct00.var_1_4) > ((max (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_2)) / (max (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_8)))) ? (WrapperStruct00.var_1_6 == ((unsigned short int) (max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_15)))) : 1)) && ((((WrapperStruct00.var_1_1 + WrapperStruct00.var_1_8) + WrapperStruct00.var_1_2) < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_10 ? (WrapperStruct00.var_1_9 == ((float) (abs (WrapperStruct00.var_1_11 - 4.25f)))) : (WrapperStruct00.var_1_9 == ((float) (WrapperStruct00.var_1_11 - (8.966829933912052E18f - WrapperStruct00.var_1_12))))) : (WrapperStruct00.var_1_9 == ((float) WrapperStruct00.var_1_12)))) && (WrapperStruct00.var_1_13 == ((float) WrapperStruct00.var_1_11))) && (WrapperStruct00.var_1_14 == ((signed long int) WrapperStruct00.var_1_15))) && (WrapperStruct00.var_1_15 == ((unsigned short int) WrapperStruct00.var_1_4))
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
