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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch171Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	float var_1_2;
	float var_1_3;
	float var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	signed long int var_1_10;
	float var_1_11;
	float var_1_12;
	signed short int var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
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
	16,
	9.5,
	-0.25,
	-0.75,
	32,
	0,
	8,
	8,
	2,
	-50,
	256.9,
	32.4,
	-128,
	0,
	1,
	1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch171Wrapper_S
	if ((WrapperStruct00.var_1_2 - 15.25f) <= (WrapperStruct00.var_1_3 * (- WrapperStruct00.var_1_4))) {
		WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_5 + (min (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_7))) + (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9));
	}


	// From: Req2Batch171Wrapper_S
	if (((min (WrapperStruct00.var_1_2 , 15.8f)) - (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12)) != (min ((max (-0.05f , WrapperStruct00.var_1_4)) , WrapperStruct00.var_1_3))) {
		if (WrapperStruct00.var_1_11 < WrapperStruct00.var_1_12) {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_9;
		} else {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_7;
		}
	}


	// From: Req3Batch171Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_15;
	if (WrapperStruct00.var_1_14 || stepLocal_0) {
		WrapperStruct00.var_1_13 = (min (WrapperStruct00.var_1_1 , (min ((max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)) , WrapperStruct00.var_1_5))));
	} else {
		WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7);
	}


	// From: Req4Batch171Wrapper_S
	WrapperStruct00.var_1_16 = 0;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 64);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 63);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 64);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427388000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((WrapperStruct00.var_1_2 - 15.25f) <= (WrapperStruct00.var_1_3 * (- WrapperStruct00.var_1_4))) ? (WrapperStruct00.var_1_1 == ((unsigned char) ((WrapperStruct00.var_1_5 + (min (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_7))) + (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9)))) : 1) && ((((min (WrapperStruct00.var_1_2 , 15.8f)) - (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_12)) != (min ((max (-0.05f , WrapperStruct00.var_1_4)) , WrapperStruct00.var_1_3))) ? ((WrapperStruct00.var_1_11 < WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_10 == ((signed long int) WrapperStruct00.var_1_7))) : 1)) && ((WrapperStruct00.var_1_14 || WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_13 == ((signed short int) (min (WrapperStruct00.var_1_1 , (min ((max (WrapperStruct00.var_1_8 , WrapperStruct00.var_1_9)) , WrapperStruct00.var_1_5)))))) : (WrapperStruct00.var_1_13 == ((signed short int) (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7))))) && (WrapperStruct00.var_1_16 == ((unsigned char) 0))
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
