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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch42Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned char var_1_8;
	unsigned char var_1_9;
	float var_1_10;
	float var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	-1,
	5,
	4,
	16.5,
	127.25,
	1,
	0,
	0,
	0,
	0,
	0
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch42Wrapper_SP
	(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) + 100);


	// From: Req3Batch42Wrapper_SP
	(*(WrapperStruct00_var_1_10_Pointer)) = (min ((*(WrapperStruct00_var_1_11_Pointer)) , 64.15f));


	// From: Req1Batch42Wrapper_SP
	if ((*(WrapperStruct00_var_1_8_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((min ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer)))) - 10);
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (max (((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))) , ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))));
	}


	// From: Req5Batch42Wrapper_SP
	if ((*(WrapperStruct00_var_1_11_Pointer)) <= (*(WrapperStruct00_var_1_10_Pointer))) {
		if ((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_8_Pointer))) {
			(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
		}
	} else {
		if ((*(WrapperStruct00_var_1_8_Pointer)) <= 1000000) {
			(*(WrapperStruct00_var_1_17_Pointer)) = 0;
		} else {
			(*(WrapperStruct00_var_1_17_Pointer)) = 0;
		}
	}


	// From: Req4Batch42Wrapper_SP
	if ((- (*(WrapperStruct00_var_1_10_Pointer))) > (*(WrapperStruct00_var_1_11_Pointer))) {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((*(WrapperStruct00_var_1_13_Pointer)) || ((*(WrapperStruct00_var_1_17_Pointer)) && ((*(WrapperStruct00_var_1_15_Pointer)) || (*(WrapperStruct00_var_1_16_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_9_Pointer))) && (*(WrapperStruct00_var_1_16_Pointer)));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854765600e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854765600e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 0);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 0);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 0);
}



void updateLastVariables() {
}

int property() {
	return ((((((*(WrapperStruct00_var_1_8_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) ((min ((*(WrapperStruct00_var_1_8_Pointer)) , (*(WrapperStruct00_var_1_8_Pointer)))) - 10))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (max (((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))) , ((*(WrapperStruct00_var_1_8_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))))))) && ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_9_Pointer)) + 100)))) && ((*(WrapperStruct00_var_1_10_Pointer)) == ((float) (min ((*(WrapperStruct00_var_1_11_Pointer)) , 64.15f))))) && (((- (*(WrapperStruct00_var_1_10_Pointer))) > (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_13_Pointer)) || ((*(WrapperStruct00_var_1_17_Pointer)) && ((*(WrapperStruct00_var_1_15_Pointer)) || (*(WrapperStruct00_var_1_16_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) (((*(WrapperStruct00_var_1_1_Pointer)) <= (*(WrapperStruct00_var_1_9_Pointer))) && (*(WrapperStruct00_var_1_16_Pointer))))))) && (((*(WrapperStruct00_var_1_11_Pointer)) <= (*(WrapperStruct00_var_1_10_Pointer))) ? (((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer)))) : 1) : (((*(WrapperStruct00_var_1_8_Pointer)) <= 1000000) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) 0)) : ((*(WrapperStruct00_var_1_17_Pointer)) == ((unsigned char) 0))))
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
