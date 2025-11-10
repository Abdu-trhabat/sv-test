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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	double var_1_4;
	double var_1_5;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	unsigned short int var_1_10;
	unsigned short int var_1_11;
	unsigned short int var_1_12;
	double var_1_13;
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
	8.8,
	0,
	1,
	127.25,
	63.5,
	1.974,
	15.75,
	10.25,
	9.5,
	32,
	200,
	1,
	32.4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch179Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_2;
	if (stepLocal_0 && (! WrapperStruct00.var_1_3)) {
		WrapperStruct00.var_1_1 = ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) + 7.5);
	}


	// From: Req2Batch179Wrapper_S
	if (WrapperStruct00.var_1_1 > (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_5)) {
		if (WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_5) {
			if (WrapperStruct00.var_1_5 > WrapperStruct00.var_1_4) {
				WrapperStruct00.var_1_6 = (WrapperStruct00.var_1_4 + ((max (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_8)) - WrapperStruct00.var_1_9));
			} else {
				WrapperStruct00.var_1_6 = (abs (WrapperStruct00.var_1_7));
			}
		} else {
			WrapperStruct00.var_1_6 = WrapperStruct00.var_1_8;
		}
	} else {
		WrapperStruct00.var_1_6 = WrapperStruct00.var_1_4;
	}


	// From: Req3Batch179Wrapper_S
	if (WrapperStruct00.var_1_5 > WrapperStruct00.var_1_8) {
		WrapperStruct00.var_1_10 = (((29089 - WrapperStruct00.var_1_11) - 8) + 16);
	} else {
		WrapperStruct00.var_1_10 = (min (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12));
	}


	// From: Req4Batch179Wrapper_S
	WrapperStruct00.var_1_13 = WrapperStruct00.var_1_7;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 8192);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 && (! WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1 == ((double) ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) + 7.5))) : 1) && ((WrapperStruct00.var_1_1 > (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_5)) ? ((WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_5) ? ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_6 == ((double) (WrapperStruct00.var_1_4 + ((max (WrapperStruct00.var_1_7 , WrapperStruct00.var_1_8)) - WrapperStruct00.var_1_9)))) : (WrapperStruct00.var_1_6 == ((double) (abs (WrapperStruct00.var_1_7))))) : (WrapperStruct00.var_1_6 == ((double) WrapperStruct00.var_1_8))) : (WrapperStruct00.var_1_6 == ((double) WrapperStruct00.var_1_4)))) && ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_10 == ((unsigned short int) (((29089 - WrapperStruct00.var_1_11) - 8) + 16))) : (WrapperStruct00.var_1_10 == ((unsigned short int) (min (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)))))) && (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_7))
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
