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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	signed short int var_1_4;
	signed short int var_1_5;
	signed short int var_1_6;
	signed short int var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	signed short int var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned short int var_1_16;
	unsigned short int var_1_17;
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
	0,
	8,
	0,
	2,
	10,
	-5,
	-100,
	0,
	0,
	0,
	0,
	0,
	10,
	2,
	64,
	1,
	59616
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned short int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned short int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);

// Calibration values

// Last'ed variables
unsigned short int last_1_WrapperStruct00_var_1_16 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch197Wrapper_SP
	signed long int stepLocal_0 = last_1_WrapperStruct00_var_1_16;
	if (! (*(WrapperStruct00_var_1_9_Pointer))) {
		if ((*(WrapperStruct00_var_1_4_Pointer)) < stepLocal_0) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) && (*(WrapperStruct00_var_1_11_Pointer)));
		}
	}


	// From: Req3Batch197Wrapper_SP
	unsigned char stepLocal_1 = ((*(WrapperStruct00_var_1_13_Pointer)) >> (*(WrapperStruct00_var_1_14_Pointer))) > (*(WrapperStruct00_var_1_3_Pointer));
	if (stepLocal_1 || (*(WrapperStruct00_var_1_8_Pointer))) {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((abs (200 - (*(WrapperStruct00_var_1_14_Pointer)))) - (*(WrapperStruct00_var_1_15_Pointer)));
	}


	// From: Req1Batch197Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min ((*(WrapperStruct00_var_1_4_Pointer)) , (min ((*(WrapperStruct00_var_1_5_Pointer)) , ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))))));
	}


	// From: Req4Batch197Wrapper_SP
	if ((*(WrapperStruct00_var_1_14_Pointer)) > (max ((*(WrapperStruct00_var_1_15_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer))))) {
		(*(WrapperStruct00_var_1_16_Pointer)) = (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) - (*(WrapperStruct00_var_1_15_Pointer)));
	} else {
		if ((*(WrapperStruct00_var_1_15_Pointer)) < ((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
		} else {
			(*(WrapperStruct00_var_1_16_Pointer)) = 8;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 32766);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 16383);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 0);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 0);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 14);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 49150);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 65534);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (min ((*(WrapperStruct00_var_1_4_Pointer)) , (min ((*(WrapperStruct00_var_1_5_Pointer)) , ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer))))))))) : 1) && ((! (*(WrapperStruct00_var_1_9_Pointer))) ? (((*(WrapperStruct00_var_1_4_Pointer)) < last_1_WrapperStruct00_var_1_16) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_10_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_10_Pointer)) && (*(WrapperStruct00_var_1_11_Pointer)))))) : 1)) && (((((*(WrapperStruct00_var_1_13_Pointer)) >> (*(WrapperStruct00_var_1_14_Pointer))) > (*(WrapperStruct00_var_1_3_Pointer))) || (*(WrapperStruct00_var_1_8_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((unsigned char) ((abs (200 - (*(WrapperStruct00_var_1_14_Pointer)))) - (*(WrapperStruct00_var_1_15_Pointer))))) : 1)) && (((*(WrapperStruct00_var_1_14_Pointer)) > (max ((*(WrapperStruct00_var_1_15_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer))))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned short int) (((*(WrapperStruct00_var_1_17_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) - (*(WrapperStruct00_var_1_15_Pointer))))) : (((*(WrapperStruct00_var_1_15_Pointer)) < ((*(WrapperStruct00_var_1_1_Pointer)) * (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned short int) 8))))
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
