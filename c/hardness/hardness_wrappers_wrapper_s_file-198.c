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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	signed long int var_1_2;
	unsigned char var_1_3;
	signed long int var_1_4;
	double var_1_5;
	double var_1_6;
	double var_1_7;
	float var_1_8;
	signed char var_1_9;
	unsigned char var_1_10;
	signed char var_1_11;
	signed char var_1_12;
	signed char var_1_13;
	signed char var_1_14;
	signed char var_1_15;
	signed char var_1_16;
	signed char var_1_17;
	signed short int var_1_18;
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
	0.8,
	32,
	0,
	0,
	16.75,
	15.5,
	0.9,
	16.8,
	-64,
	0,
	-32,
	-1,
	100,
	16,
	2,
	5,
	-8,
	256
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch198Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_2;
	if (stepLocal_0 >= WrapperStruct00.var_1_4) {
		WrapperStruct00.var_1_1 = (((min (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)) + 10.55) + WrapperStruct00.var_1_7);
	}


	// From: Req2Batch198Wrapper_S
	if (WrapperStruct00.var_1_7 > 64.2) {
		WrapperStruct00.var_1_8 = WrapperStruct00.var_1_5;
	}


	// From: Req3Batch198Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_10;
	if (WrapperStruct00.var_1_3 || stepLocal_1) {
		WrapperStruct00.var_1_9 = (min (WrapperStruct00.var_1_11 , (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13)));
	} else {
		if (WrapperStruct00.var_1_3) {
			WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_14 + (max (WrapperStruct00.var_1_15 , (max (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_17)))));
		} else {
			if (WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_6) {
				WrapperStruct00.var_1_9 = WrapperStruct00.var_1_17;
			} else {
				WrapperStruct00.var_1_9 = WrapperStruct00.var_1_16;
			}
		}
	}


	// From: Req4Batch198Wrapper_S
	if (WrapperStruct00.var_1_1 > (abs (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)))) {
		WrapperStruct00.var_1_18 = (25 - (max (4 , WrapperStruct00.var_1_13)));
	} else {
		WrapperStruct00.var_1_18 = 32;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((double) (((min (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)) + 10.55) + WrapperStruct00.var_1_7))) : 1) && ((WrapperStruct00.var_1_7 > 64.2) ? (WrapperStruct00.var_1_8 == ((float) WrapperStruct00.var_1_5)) : 1)) && ((WrapperStruct00.var_1_3 || WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_9 == ((signed char) (min (WrapperStruct00.var_1_11 , (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13))))) : (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_9 == ((signed char) (WrapperStruct00.var_1_14 + (max (WrapperStruct00.var_1_15 , (max (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_17))))))) : ((WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_17)) : (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_16)))))) && ((WrapperStruct00.var_1_1 > (abs (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)))) ? (WrapperStruct00.var_1_18 == ((signed short int) (25 - (max (4 , WrapperStruct00.var_1_13))))) : (WrapperStruct00.var_1_18 == ((signed short int) 32)))
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
