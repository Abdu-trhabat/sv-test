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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	float var_1_2;
	float var_1_3;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	unsigned char var_1_8;
	float var_1_9;
	float var_1_10;
	unsigned short int var_1_11;
	unsigned short int var_1_12;
	unsigned short int var_1_13;
	unsigned char var_1_14;
	signed char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
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
	8.4,
	9999999999.14,
	16.2,
	15.125,
	256.4,
	256.75,
	8.8,
	1,
	25.75,
	8.6,
	128,
	0,
	10,
	1,
	5,
	128,
	32,
	0,
	128
};

// Calibration values

// Last'ed variables
float last_1_WrapperStruct00_var_1_7 = 8.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch112Wrapper_S
	if (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_1 = (min (WrapperStruct00.var_1_4 , (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6))));
	}


	// From: Req2Batch112Wrapper_S
	if (WrapperStruct00.var_1_8) {
		if (last_1_WrapperStruct00_var_1_7 < WrapperStruct00.var_1_1) {
			WrapperStruct00.var_1_7 = ((max (WrapperStruct00.var_1_9 , 32.75f)) + WrapperStruct00.var_1_10);
		}
	} else {
		WrapperStruct00.var_1_7 = WrapperStruct00.var_1_9;
	}


	// From: Req3Batch112Wrapper_S
	WrapperStruct00.var_1_11 = (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13));


	// From: Req4Batch112Wrapper_S
	signed long int stepLocal_0 = 0;
	if (stepLocal_0 <= (WrapperStruct00.var_1_12 >> WrapperStruct00.var_1_16)) {
		if (! (WrapperStruct00.var_1_1 != WrapperStruct00.var_1_2)) {
			if (WrapperStruct00.var_1_8) {
				WrapperStruct00.var_1_14 = ((max (128 , WrapperStruct00.var_1_17)) - WrapperStruct00.var_1_16);
			} else {
				if (WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_10) {
					WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_18);
				} else {
					if (WrapperStruct00.var_1_19) {
						WrapperStruct00.var_1_14 = WrapperStruct00.var_1_18;
					} else {
						WrapperStruct00.var_1_14 = WrapperStruct00.var_1_20;
					}
				}
			}
		}
	} else {
		WrapperStruct00.var_1_14 = WrapperStruct00.var_1_18;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 65534);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 65534);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 15);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 254);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((float) (min (WrapperStruct00.var_1_4 , (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)))))) : 1) && (WrapperStruct00.var_1_8 ? ((last_1_WrapperStruct00_var_1_7 < WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_7 == ((float) ((max (WrapperStruct00.var_1_9 , 32.75f)) + WrapperStruct00.var_1_10))) : 1) : (WrapperStruct00.var_1_7 == ((float) WrapperStruct00.var_1_9)))) && (WrapperStruct00.var_1_11 == ((unsigned short int) (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13))))) && ((0 <= (WrapperStruct00.var_1_12 >> WrapperStruct00.var_1_16)) ? ((! (WrapperStruct00.var_1_1 != WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_8 ? (WrapperStruct00.var_1_14 == ((unsigned char) ((max (128 , WrapperStruct00.var_1_17)) - WrapperStruct00.var_1_16))) : ((WrapperStruct00.var_1_7 >= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_14 == ((unsigned char) (WrapperStruct00.var_1_16 + WrapperStruct00.var_1_18))) : (WrapperStruct00.var_1_19 ? (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_18)) : (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_20))))) : 1) : (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_18)))
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
