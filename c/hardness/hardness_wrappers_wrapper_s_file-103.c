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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_2;
	float var_1_3;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	signed long int var_1_8;
	unsigned char var_1_9;
	signed long int var_1_10;
	signed long int var_1_11;
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
	-1,
	16,
	0.050000000000000044,
	16.75,
	64.25,
	0.0,
	999999999.2,
	4,
	1,
	0,
	32
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch103Wrapper_S
	WrapperStruct00.var_1_1 = WrapperStruct00.var_1_2;


	// From: Req3Batch103Wrapper_S
	if (! WrapperStruct00.var_1_9) {
		if (! ((10.25f - WrapperStruct00.var_1_4) <= WrapperStruct00.var_1_5)) {
			if ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_6) <= (- 99999.25f)) {
				WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_10 - 64);
			} else {
				WrapperStruct00.var_1_8 = (max ((min ((max (WrapperStruct00.var_1_2 , 16)) , WrapperStruct00.var_1_1)) , 2));
			}
		}
	}


	// From: Req4Batch103Wrapper_S
	if (! WrapperStruct00.var_1_9) {
		if (WrapperStruct00.var_1_9) {
			WrapperStruct00.var_1_11 = ((min (-256 , WrapperStruct00.var_1_8)) + WrapperStruct00.var_1_2);
		} else {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_2;
		}
	} else {
		WrapperStruct00.var_1_11 = WrapperStruct00.var_1_2;
	}


	// From: Req2Batch103Wrapper_S
	signed short int stepLocal_0 = WrapperStruct00.var_1_2;
	if (WrapperStruct00.var_1_8 > stepLocal_0) {
		WrapperStruct00.var_1_3 = ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5) - (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7));
	} else {
		WrapperStruct00.var_1_3 = WrapperStruct00.var_1_7;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 32766);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483646);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_2)) && ((WrapperStruct00.var_1_8 > WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_3 == ((float) ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5) - (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_3 == ((float) WrapperStruct00.var_1_7)))) && ((! WrapperStruct00.var_1_9) ? ((! ((10.25f - WrapperStruct00.var_1_4) <= WrapperStruct00.var_1_5)) ? (((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_6) <= (- 99999.25f)) ? (WrapperStruct00.var_1_8 == ((signed long int) (WrapperStruct00.var_1_10 - 64))) : (WrapperStruct00.var_1_8 == ((signed long int) (max ((min ((max (WrapperStruct00.var_1_2 , 16)) , WrapperStruct00.var_1_1)) , 2))))) : 1) : 1)) && ((! WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_9 ? (WrapperStruct00.var_1_11 == ((signed long int) ((min (-256 , WrapperStruct00.var_1_8)) + WrapperStruct00.var_1_2))) : (WrapperStruct00.var_1_11 == ((signed long int) WrapperStruct00.var_1_2))) : (WrapperStruct00.var_1_11 == ((signed long int) WrapperStruct00.var_1_2)))
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
