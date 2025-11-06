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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	double var_1_2;
	double var_1_3;
	double var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	unsigned char var_1_8;
	signed long int var_1_9;
	signed long int var_1_10;
	unsigned short int var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
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
	31.6,
	0.0,
	255.875,
	24.5,
	49.5,
	32.6,
	8.2,
	0,
	50,
	256,
	50174,
	0,
	0,
	50,
	25,
	50,
	64,
	64,
	1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch151Wrapper_S
	WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) - WrapperStruct00.var_1_4);


	// From: Req2Batch151Wrapper_S
	WrapperStruct00.var_1_5 = ((WrapperStruct00.var_1_3 - WrapperStruct00.var_1_6) + WrapperStruct00.var_1_7);


	// From: Req3Batch151Wrapper_S
	if (25 <= ((100000000 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10)) {
		if (1 >= WrapperStruct00.var_1_9) {
			if ((abs (WrapperStruct00.var_1_11 - 8)) == WrapperStruct00.var_1_10) {
				WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_12 && (! 0));
			} else {
				WrapperStruct00.var_1_8 = (WrapperStruct00.var_1_12 && WrapperStruct00.var_1_13);
			}
		}
	}


	// From: Req4Batch151Wrapper_S
	if (! WrapperStruct00.var_1_13) {
		WrapperStruct00.var_1_14 = ((max ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16) , WrapperStruct00.var_1_17)) + (abs (WrapperStruct00.var_1_18 + WrapperStruct00.var_1_19)));
	} else {
		if (WrapperStruct00.var_1_13) {
			WrapperStruct00.var_1_14 = WrapperStruct00.var_1_19;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1073741823);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 65535);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 64);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 127);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 64);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((WrapperStruct00.var_1_1 == ((double) ((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) - WrapperStruct00.var_1_4))) && (WrapperStruct00.var_1_5 == ((float) ((WrapperStruct00.var_1_3 - WrapperStruct00.var_1_6) + WrapperStruct00.var_1_7)))) && ((25 <= ((100000000 + WrapperStruct00.var_1_9) - WrapperStruct00.var_1_10)) ? ((1 >= WrapperStruct00.var_1_9) ? (((abs (WrapperStruct00.var_1_11 - 8)) == WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_8 == ((unsigned char) (WrapperStruct00.var_1_12 && (! 0)))) : (WrapperStruct00.var_1_8 == ((unsigned char) (WrapperStruct00.var_1_12 && WrapperStruct00.var_1_13)))) : 1) : 1)) && ((! WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_14 == ((unsigned char) ((max ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16) , WrapperStruct00.var_1_17)) + (abs (WrapperStruct00.var_1_18 + WrapperStruct00.var_1_19))))) : (WrapperStruct00.var_1_13 ? (WrapperStruct00.var_1_14 == ((unsigned char) WrapperStruct00.var_1_19)) : 1))
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
