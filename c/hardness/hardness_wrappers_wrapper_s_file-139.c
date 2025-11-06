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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_5;
	signed short int var_1_6;
	unsigned char var_1_7;
	signed char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	double var_1_14;
	double var_1_15;
	double var_1_16;
	double var_1_17;
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
	32,
	64,
	8,
	100,
	-4,
	200,
	0,
	0,
	64,
	0,
	10.45,
	49.6,
	128.5,
	10.3
};

// Calibration values

// Last'ed variables
double last_1_WrapperStruct00_var_1_14 = 10.45;
double last_1_WrapperStruct00_var_1_17 = 10.3;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch139Wrapper_S
	if ((min (last_1_WrapperStruct00_var_1_17 , (abs (last_1_WrapperStruct00_var_1_14)))) <= last_1_WrapperStruct00_var_1_14) {
		WrapperStruct00.var_1_1 = (abs (32 - (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6)));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
	}


	// From: Req2Batch139Wrapper_S
	if ((WrapperStruct00.var_1_1 / WrapperStruct00.var_1_8) == (WrapperStruct00.var_1_5 << WrapperStruct00.var_1_6)) {
		WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_9 - (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11)) - (WrapperStruct00.var_1_12 + WrapperStruct00.var_1_13));
	} else {
		WrapperStruct00.var_1_7 = WrapperStruct00.var_1_12;
	}


	// From: Req3Batch139Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_7;
	unsigned char stepLocal_0 = WrapperStruct00.var_1_7;
	if (stepLocal_1 < WrapperStruct00.var_1_9) {
		if (stepLocal_0 >= WrapperStruct00.var_1_1) {
			WrapperStruct00.var_1_14 = ((64.2 + WrapperStruct00.var_1_15) - WrapperStruct00.var_1_16);
		}
	}


	// From: Req4Batch139Wrapper_S
	signed long int stepLocal_2 = WrapperStruct00.var_1_6 * WrapperStruct00.var_1_7;
	if ((- WrapperStruct00.var_1_13) <= stepLocal_2) {
		WrapperStruct00.var_1_17 = WrapperStruct00.var_1_15;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 190);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 31);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 64);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
	last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}

int property(void) {
	return (((((min (last_1_WrapperStruct00_var_1_17 , (abs (last_1_WrapperStruct00_var_1_14)))) <= last_1_WrapperStruct00_var_1_14) ? (WrapperStruct00.var_1_1 == ((signed short int) (abs (32 - (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_6))) && (((WrapperStruct00.var_1_1 / WrapperStruct00.var_1_8) == (WrapperStruct00.var_1_5 << WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_7 == ((unsigned char) ((WrapperStruct00.var_1_9 - (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11)) - (WrapperStruct00.var_1_12 + WrapperStruct00.var_1_13)))) : (WrapperStruct00.var_1_7 == ((unsigned char) WrapperStruct00.var_1_12)))) && ((WrapperStruct00.var_1_7 < WrapperStruct00.var_1_9) ? ((WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_14 == ((double) ((64.2 + WrapperStruct00.var_1_15) - WrapperStruct00.var_1_16))) : 1) : 1)) && (((- WrapperStruct00.var_1_13) <= (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_17 == ((double) WrapperStruct00.var_1_15)) : 1)
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
