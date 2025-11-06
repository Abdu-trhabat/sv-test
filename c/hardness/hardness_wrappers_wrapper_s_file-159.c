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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch159Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_2;
	signed long int var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned short int var_1_7;
	float var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	signed long int var_1_12;
	signed long int var_1_13;
	unsigned short int var_1_14;
	signed short int var_1_15;
	signed long int var_1_16;
	signed short int var_1_17;
	float var_1_18;
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
	0,
	-16,
	0,
	0,
	0,
	64,
	256.305,
	25.25,
	128.8,
	50.825,
	32,
	-64,
	5,
	-100,
	0,
	10,
	128.75
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch159Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_3;
	if (WrapperStruct00.var_1_2) {
		if (64 < stepLocal_0) {
			WrapperStruct00.var_1_1 = (! (WrapperStruct00.var_1_4 && WrapperStruct00.var_1_5));
		}
	} else {
		if (WrapperStruct00.var_1_5) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
		}
	}


	// From: Req2Batch159Wrapper_S
	if (((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_9) / WrapperStruct00.var_1_10) < WrapperStruct00.var_1_11) {
		if ((min (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_12)) < WrapperStruct00.var_1_13) {
			if (WrapperStruct00.var_1_4) {
				WrapperStruct00.var_1_7 = (min (WrapperStruct00.var_1_14 , 1));
			}
		}
	}


	// From: Req3Batch159Wrapper_S
	signed long int stepLocal_1 = (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_7) * (WrapperStruct00.var_1_16 >> WrapperStruct00.var_1_17);
	if (-128 == stepLocal_1) {
		if (WrapperStruct00.var_1_9 > (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_18)) {
			if (WrapperStruct00.var_1_18 < 4.8f) {
				WrapperStruct00.var_1_15 = WrapperStruct00.var_1_17;
			} else {
				WrapperStruct00.var_1_15 = -32;
			}
		} else {
			WrapperStruct00.var_1_15 = WrapperStruct00.var_1_17;
		}
	} else {
		WrapperStruct00.var_1_15 = WrapperStruct00.var_1_17;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_10 != 0.0F);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 65534);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483647);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 30);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_18 >= 0.0F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((WrapperStruct00.var_1_2 ? ((64 < WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((unsigned char) (! (WrapperStruct00.var_1_4 && WrapperStruct00.var_1_5)))) : 1) : (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_4)))) && ((((WrapperStruct00.var_1_8 - WrapperStruct00.var_1_9) / WrapperStruct00.var_1_10) < WrapperStruct00.var_1_11) ? (((min (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_12)) < WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_4 ? (WrapperStruct00.var_1_7 == ((unsigned short int) (min (WrapperStruct00.var_1_14 , 1)))) : 1) : 1) : 1)) && ((-128 == ((WrapperStruct00.var_1_14 - WrapperStruct00.var_1_7) * (WrapperStruct00.var_1_16 >> WrapperStruct00.var_1_17))) ? ((WrapperStruct00.var_1_9 > (WrapperStruct00.var_1_8 - WrapperStruct00.var_1_18)) ? ((WrapperStruct00.var_1_18 < 4.8f) ? (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_17)) : (WrapperStruct00.var_1_15 == ((signed short int) -32))) : (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_17))) : (WrapperStruct00.var_1_15 == ((signed short int) WrapperStruct00.var_1_17)))
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
