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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	signed long int var_1_2;
	signed long int var_1_3;
	signed long int var_1_4;
	signed long int var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned long int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned long int var_1_12;
	unsigned long int var_1_13;
	unsigned char var_1_14;
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
	50,
	0,
	1,
	16,
	1,
	10,
	8,
	2,
	128,
	200,
	0,
	1000000000,
	1000000000,
	5
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_9 = 128;
unsigned char last_1_WrapperStruct00_var_1_14 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch154Wrapper_SP
	if (last_1_WrapperStruct00_var_1_9 < (*(WrapperStruct00_var_1_3_Pointer))) {
		if (last_1_WrapperStruct00_var_1_14 <= (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) - (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_9_Pointer)) = ((1211749435u + ((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) - (*(WrapperStruct00_var_1_8_Pointer)));
		} else {
			if ((*(WrapperStruct00_var_1_10_Pointer)) < ((*(WrapperStruct00_var_1_7_Pointer)) | (*(WrapperStruct00_var_1_5_Pointer)))) {
				(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
			}
		}
	} else {
		(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	}


	// From: Req3Batch154Wrapper_SP
	unsigned long int stepLocal_1 = ((*(WrapperStruct00_var_1_7_Pointer)) & (*(WrapperStruct00_var_1_9_Pointer))) / (*(WrapperStruct00_var_1_10_Pointer));
	if (stepLocal_1 < ((*(WrapperStruct00_var_1_8_Pointer)) + (abs ((*(WrapperStruct00_var_1_11_Pointer)))))) {
		(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	} else {
		(*(WrapperStruct00_var_1_14_Pointer)) = 5;
	}


	// From: Req1Batch154Wrapper_SP
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer));
	if ((max ((*(WrapperStruct00_var_1_2_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))) != stepLocal_0) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_6_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min (((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) , (*(WrapperStruct00_var_1_6_Pointer))));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 254);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 127);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 191);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 255);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 64);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 536870912);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1073741824);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 536870912);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_9 = WrapperStruct00.var_1_9;
	last_1_WrapperStruct00_var_1_14 = WrapperStruct00.var_1_14;
}

int property(void) {
	return ((((max ((*(WrapperStruct00_var_1_2_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))) != ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (abs ((*(WrapperStruct00_var_1_6_Pointer)))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (min (((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) , (*(WrapperStruct00_var_1_6_Pointer))))))) && ((last_1_WrapperStruct00_var_1_9 < (*(WrapperStruct00_var_1_3_Pointer))) ? ((last_1_WrapperStruct00_var_1_14 <= (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) - (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) ((1211749435u + ((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_13_Pointer)))) - (*(WrapperStruct00_var_1_8_Pointer))))) : (((*(WrapperStruct00_var_1_10_Pointer)) < ((*(WrapperStruct00_var_1_7_Pointer)) | (*(WrapperStruct00_var_1_5_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_10_Pointer)))) : 1)) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_8_Pointer)))))) && (((((*(WrapperStruct00_var_1_7_Pointer)) & (*(WrapperStruct00_var_1_9_Pointer))) / (*(WrapperStruct00_var_1_10_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)) + (abs ((*(WrapperStruct00_var_1_11_Pointer)))))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) 5)))
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
