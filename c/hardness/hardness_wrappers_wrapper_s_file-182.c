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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	signed long int var_1_2;
	unsigned char var_1_3;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	signed short int var_1_7;
	signed short int var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	double var_1_12;
	double var_1_13;
	float var_1_14;
	float var_1_15;
	float var_1_16;
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
	127.25,
	5,
	1,
	255.4,
	64.2,
	128.5,
	-16,
	-32,
	5.6,
	2.125,
	-0.3,
	1.75,
	255.5,
	49.5,
	9999999.3,
	7.4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch182Wrapper_S
	if (! WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_1 = ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) - WrapperStruct00.var_1_6);
	}


	// From: Req2Batch182Wrapper_S
	signed long int stepLocal_0 = min (WrapperStruct00.var_1_2 , 10);
	if (-16 <= stepLocal_0) {
		WrapperStruct00.var_1_7 = WrapperStruct00.var_1_8;
	} else {
		WrapperStruct00.var_1_7 = (abs (1));
	}


	// From: Req3Batch182Wrapper_S
	if (WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_9 = (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11);
	} else {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_4;
	}


	// From: Req4Batch182Wrapper_S
	WrapperStruct00.var_1_12 = (min ((max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_11)) , WrapperStruct00.var_1_6));


	// From: Req5Batch182Wrapper_S
	if (WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_13 = (max (16.5 , (WrapperStruct00.var_1_4 - 9.99999999975E9)));
	}


	// From: Req6Batch182Wrapper_S
	if (((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_15)) - WrapperStruct00.var_1_5) < ((WrapperStruct00.var_1_6 - WrapperStruct00.var_1_16) * (- WrapperStruct00.var_1_12))) {
		if (WrapperStruct00.var_1_3) {
			WrapperStruct00.var_1_14 = WrapperStruct00.var_1_5;
		} else {
			WrapperStruct00.var_1_14 = 1.8199999999999998f;
		}
	} else {
		WrapperStruct00.var_1_14 = WrapperStruct00.var_1_4;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 32766);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((! WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((float) ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) - WrapperStruct00.var_1_6))) : 1) && ((-16 <= (min (WrapperStruct00.var_1_2 , 10))) ? (WrapperStruct00.var_1_7 == ((signed short int) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_7 == ((signed short int) (abs (1)))))) && (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_9 == ((float) (WrapperStruct00.var_1_10 + WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_9 == ((float) WrapperStruct00.var_1_4)))) && (WrapperStruct00.var_1_12 == ((double) (min ((max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_11)) , WrapperStruct00.var_1_6))))) && (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_13 == ((double) (max (16.5 , (WrapperStruct00.var_1_4 - 9.99999999975E9))))) : 1)) && ((((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_15)) - WrapperStruct00.var_1_5) < ((WrapperStruct00.var_1_6 - WrapperStruct00.var_1_16) * (- WrapperStruct00.var_1_12))) ? (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_14 == ((float) WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_14 == ((float) 1.8199999999999998f))) : (WrapperStruct00.var_1_14 == ((float) WrapperStruct00.var_1_4)))
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
