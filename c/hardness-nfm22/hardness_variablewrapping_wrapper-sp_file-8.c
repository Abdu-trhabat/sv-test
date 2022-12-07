// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2022 Jana (Philipp) Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

// Prototype declarations of the functions used to communicate with the model checkers
extern unsigned long __VERIFIER_nondet_ulong();
extern long __VERIFIER_nondet_long();
extern unsigned char __VERIFIER_nondet_uchar();
extern char __VERIFIER_nondet_char();
extern unsigned short __VERIFIER_nondet_ushort();
extern short __VERIFIER_nondet_short();
extern float __VERIFIER_nondet_float();
extern double __VERIFIER_nondet_double();

extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	signed long int var_1_8;
	float var_1_12;
	float var_1_13;
	float var_1_14;
	float var_1_15;
	float var_1_16;
	float var_1_17;
	signed long int var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	0,
	0,
	0,
	0,
	0,
	64,
	2.4,
	127.75,
	0.0,
	31.4,
	256.75,
	256.6,
	0,
	32,
	100
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
float* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed long int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
unsigned char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch8Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));


	// From: Req6Batch8Wrapper_SP
	(*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_20_Pointer));


	// From: Req5Batch8Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));


	// From: Req2Batch8Wrapper_SP
	unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_19_Pointer));
	signed long int stepLocal_0 = ((*(WrapperStruct00_var_1_18_Pointer)) * (*(WrapperStruct00_var_1_18_Pointer))) * ((*(WrapperStruct00_var_1_19_Pointer)) - (*(WrapperStruct00_var_1_19_Pointer)));
	if (stepLocal_0 >= 1u) {
		if ((*(WrapperStruct00_var_1_18_Pointer)) <= stepLocal_1) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_19_Pointer));
	}


	// From: Req3Batch8Wrapper_SP
	signed long int stepLocal_2 = (*(WrapperStruct00_var_1_8_Pointer));
	if ((*(WrapperStruct00_var_1_19_Pointer)) > stepLocal_2) {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) + (((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (*(WrapperStruct00_var_1_16_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_16_Pointer)) - ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))));
	}


	// From: Req1Batch8Wrapper_SP
	if ((*(WrapperStruct00_var_1_18_Pointer)) >= (8u * (*(WrapperStruct00_var_1_8_Pointer)))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (! ((*(WrapperStruct00_var_1_4_Pointer)) || ((*(WrapperStruct00_var_1_5_Pointer)) || (*(WrapperStruct00_var_1_6_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427382800e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 2305843.009213691390e+12F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 2305843.009213691390e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427382800e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 254);
}



void updateLastVariables() {
}

int property() {
	return (((((((*(WrapperStruct00_var_1_18_Pointer)) >= (8u * (*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! ((*(WrapperStruct00_var_1_4_Pointer)) || ((*(WrapperStruct00_var_1_5_Pointer)) || (*(WrapperStruct00_var_1_6_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer))))) && (((((*(WrapperStruct00_var_1_18_Pointer)) * (*(WrapperStruct00_var_1_18_Pointer))) * ((*(WrapperStruct00_var_1_19_Pointer)) - (*(WrapperStruct00_var_1_19_Pointer)))) >= 1u) ? (((*(WrapperStruct00_var_1_18_Pointer)) <= (*(WrapperStruct00_var_1_19_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_19_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_19_Pointer))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_19_Pointer)))))) && (((*(WrapperStruct00_var_1_19_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((float) ((*(WrapperStruct00_var_1_13_Pointer)) + (((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))) - (*(WrapperStruct00_var_1_16_Pointer)))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((float) ((*(WrapperStruct00_var_1_16_Pointer)) - ((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)))))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((float) (*(WrapperStruct00_var_1_14_Pointer))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_19_Pointer))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_20_Pointer))))
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
