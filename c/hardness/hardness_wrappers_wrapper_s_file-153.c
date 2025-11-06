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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch153Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned long int var_1_3;
	signed short int var_1_4;
	unsigned short int var_1_6;
	unsigned short int var_1_7;
	unsigned short int var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	double var_1_13;
	signed char var_1_15;
	double var_1_17;
	double var_1_18;
	signed short int var_1_19;
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
	50,
	256,
	-50,
	32,
	1,
	32,
	0,
	0,
	1,
	1,
	256.2,
	10,
	100000000000000.5,
	24.75,
	-32
};

// Calibration values

// Last'ed variables
signed short int last_1_WrapperStruct00_var_1_4 = -50;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch153Wrapper_S
	if (last_1_WrapperStruct00_var_1_4 <= ((abs (-32)) + 16)) {
		WrapperStruct00.var_1_1 = (abs (WrapperStruct00.var_1_3));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
	}


	// From: Req3Batch153Wrapper_S
	WrapperStruct00.var_1_6 = ((abs (WrapperStruct00.var_1_7)) + WrapperStruct00.var_1_8);


	// From: Req6Batch153Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_17;


	// From: Req7Batch153Wrapper_S
	WrapperStruct00.var_1_19 = WrapperStruct00.var_1_6;


	// From: Req4Batch153Wrapper_S
	signed short int stepLocal_0 = WrapperStruct00.var_1_19;
	if (WrapperStruct00.var_1_6 <= stepLocal_0) {
		WrapperStruct00.var_1_9 = (! WrapperStruct00.var_1_10);
	} else {
		WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_12);
	}


	// From: Req2Batch153Wrapper_S
	if (WrapperStruct00.var_1_19 <= WrapperStruct00.var_1_3) {
		if (WrapperStruct00.var_1_19 <= WrapperStruct00.var_1_1) {
			if (WrapperStruct00.var_1_9) {
				WrapperStruct00.var_1_4 = WrapperStruct00.var_1_19;
			}
		}
	}


	// From: Req5Batch153Wrapper_S
	unsigned long int stepLocal_1 = WrapperStruct00.var_1_1;
	if ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_15) == stepLocal_1) {
		if (WrapperStruct00.var_1_10) {
			WrapperStruct00.var_1_13 = (min (WrapperStruct00.var_1_17 , 1000000.5));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967294);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 32767);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 0);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_4 = WrapperStruct00.var_1_4;
}

int property(void) {
	return (((((((last_1_WrapperStruct00_var_1_4 <= ((abs (-32)) + 16)) ? (WrapperStruct00.var_1_1 == ((unsigned long int) (abs (WrapperStruct00.var_1_3)))) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_3))) && ((WrapperStruct00.var_1_19 <= WrapperStruct00.var_1_3) ? ((WrapperStruct00.var_1_19 <= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_4 == ((signed short int) WrapperStruct00.var_1_19)) : 1) : 1) : 1)) && (WrapperStruct00.var_1_6 == ((unsigned short int) ((abs (WrapperStruct00.var_1_7)) + WrapperStruct00.var_1_8)))) && ((WrapperStruct00.var_1_6 <= WrapperStruct00.var_1_19) ? (WrapperStruct00.var_1_9 == ((unsigned char) (! WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_9 == ((unsigned char) (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_12))))) && (((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_15) == WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_10 ? (WrapperStruct00.var_1_13 == ((double) (min (WrapperStruct00.var_1_17 , 1000000.5)))) : 1) : 1)) && (WrapperStruct00.var_1_18 == ((double) WrapperStruct00.var_1_17))) && (WrapperStruct00.var_1_19 == ((signed short int) WrapperStruct00.var_1_6))
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
