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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch57Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	signed char var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	signed char var_1_12;
	signed char var_1_13;
	signed char var_1_14;
	signed char var_1_15;
	signed char var_1_16;
	float var_1_17;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	1,
	0,
	0,
	1,
	64,
	4,
	-4,
	32,
	32,
	-64,
	50,
	16,
	63.5
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
float* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);

// Calibration values

// Last'ed variables
signed char last_1_WrapperStruct00_var_1_9 = 64;
signed char last_1_WrapperStruct00_var_1_14 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch57Wrapper_SP
	unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_6_Pointer));
	if (! (last_1_WrapperStruct00_var_1_14 >= last_1_WrapperStruct00_var_1_9)) {
		if (((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))) && stepLocal_0) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (min (last_1_WrapperStruct00_var_1_9 , last_1_WrapperStruct00_var_1_14));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = last_1_WrapperStruct00_var_1_14;
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = last_1_WrapperStruct00_var_1_14;
	}


	// From: Req3Batch57Wrapper_SP
	signed long int stepLocal_3 = ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))) - (max (64 , (*(WrapperStruct00_var_1_13_Pointer))));
	if ((*(WrapperStruct00_var_1_12_Pointer)) < stepLocal_3) {
		(*(WrapperStruct00_var_1_14_Pointer)) = ((64 - (*(WrapperStruct00_var_1_16_Pointer))) - (*(WrapperStruct00_var_1_13_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_14_Pointer)) = (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))));
	}


	// From: Req4Batch57Wrapper_SP
	(*(WrapperStruct00_var_1_17_Pointer)) = 128.91f;


	// From: Req2Batch57Wrapper_SP
	unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_14_Pointer)) == (*(WrapperStruct00_var_1_1_Pointer));
	unsigned char stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer));
	if (stepLocal_1 && (*(WrapperStruct00_var_1_4_Pointer))) {
		if ((*(WrapperStruct00_var_1_6_Pointer)) || stepLocal_2) {
			(*(WrapperStruct00_var_1_9_Pointer)) = (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer)));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 126);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 126);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 126);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 64);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 63);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_9 = WrapperStruct00.var_1_9;
	last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}

int property() {
	return ((((! (last_1_WrapperStruct00_var_1_14 >= last_1_WrapperStruct00_var_1_9)) ? ((((*(WrapperStruct00_var_1_4_Pointer)) || (*(WrapperStruct00_var_1_5_Pointer))) && (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (min (last_1_WrapperStruct00_var_1_9 , last_1_WrapperStruct00_var_1_14)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) last_1_WrapperStruct00_var_1_14))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) last_1_WrapperStruct00_var_1_14))) && (((*(WrapperStruct00_var_1_5_Pointer)) && (*(WrapperStruct00_var_1_4_Pointer))) ? (((*(WrapperStruct00_var_1_6_Pointer)) || ((*(WrapperStruct00_var_1_14_Pointer)) == (*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) ((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))))))) && (((*(WrapperStruct00_var_1_12_Pointer)) < (((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))) - (max (64 , (*(WrapperStruct00_var_1_13_Pointer)))))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed char) ((64 - (*(WrapperStruct00_var_1_16_Pointer))) - (*(WrapperStruct00_var_1_13_Pointer))))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed char) (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))))) && ((*(WrapperStruct00_var_1_17_Pointer)) == ((float) 128.91f))
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
