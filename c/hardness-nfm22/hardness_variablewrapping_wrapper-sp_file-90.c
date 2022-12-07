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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch90Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned char var_1_2;
	signed short int var_1_3;
	signed short int var_1_4;
	signed short int var_1_5;
	unsigned long int var_1_6;
	unsigned long int var_1_7;
	unsigned long int var_1_8;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	signed short int var_1_14;
	signed short int var_1_15;
	signed long int var_1_16;
};

// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
struct WrapperStruct00 WrapperStruct00 = {
	25,
	1,
	0,
	1,
	10,
	2,
	2762957886,
	2,
	0,
	1,
	0,
	1,
	-25,
	10,
	-5
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_10 = 0;
signed short int last_1_WrapperStruct00_var_1_14 = -25;
signed long int last_1_WrapperStruct00_var_1_16 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch90Wrapper_SP
	unsigned long int stepLocal_1 = (*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer));
	signed long int stepLocal_0 = min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer)));
	if (last_1_WrapperStruct00_var_1_14 != stepLocal_0) {
		if (stepLocal_1 >= last_1_WrapperStruct00_var_1_16) {
			if (last_1_WrapperStruct00_var_1_10) {
				(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
			} else {
				(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
			}
		} else {
			(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	}


	// From: Req5Batch90Wrapper_SP
	if ((*(WrapperStruct00_var_1_6_Pointer)) <= (*(WrapperStruct00_var_1_7_Pointer))) {
		if ((*(WrapperStruct00_var_1_15_Pointer)) > (*(WrapperStruct00_var_1_6_Pointer))) {
			(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
		}
	}


	// From: Req3Batch90Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		(*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) || (! (*(WrapperStruct00_var_1_12_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_10_Pointer)) = ((! (*(WrapperStruct00_var_1_13_Pointer))) || (*(WrapperStruct00_var_1_12_Pointer)));
	}


	// From: Req4Batch90Wrapper_SP
	(*(WrapperStruct00_var_1_14_Pointer)) = (max ((*(WrapperStruct00_var_1_3_Pointer)) , ((*(WrapperStruct00_var_1_15_Pointer)) - 256)));


	// From: Req1Batch90Wrapper_SP
	if ((*(WrapperStruct00_var_1_10_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min (((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))) , (*(WrapperStruct00_var_1_5_Pointer))));
	}
}



void updateVariables() {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 16383);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 16383);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 4294967295);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 0);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
}



void updateLastVariables() {
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
	last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property() {
	return (((((*(WrapperStruct00_var_1_10_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (min (((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_4_Pointer))) , (*(WrapperStruct00_var_1_5_Pointer)))))) : 1) && ((last_1_WrapperStruct00_var_1_14 != (min ((*(WrapperStruct00_var_1_3_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer))))) ? ((((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))) >= last_1_WrapperStruct00_var_1_16) ? (last_1_WrapperStruct00_var_1_10 ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_8_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_8_Pointer))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_8_Pointer)))))) && ((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_11_Pointer)) || (! (*(WrapperStruct00_var_1_12_Pointer)))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) ((! (*(WrapperStruct00_var_1_13_Pointer))) || (*(WrapperStruct00_var_1_12_Pointer))))))) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((signed short int) (max ((*(WrapperStruct00_var_1_3_Pointer)) , ((*(WrapperStruct00_var_1_15_Pointer)) - 256)))))) && (((*(WrapperStruct00_var_1_6_Pointer)) <= (*(WrapperStruct00_var_1_7_Pointer))) ? (((*(WrapperStruct00_var_1_15_Pointer)) > (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_15_Pointer)))) : 1) : 1)
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
