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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned short int var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_6;
	unsigned short int var_1_7;
	unsigned short int var_1_8;
	unsigned short int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	signed long int var_1_16;
	signed long int var_1_17;
	unsigned char var_1_18;
	unsigned long int var_1_19;
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
	8,
	1,
	32,
	4,
	16,
	128,
	10000,
	0,
	38382,
	0,
	0,
	0,
	32,
	2,
	2,
	-1000000,
	-1000000000,
	100,
	10
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned long int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned long int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch66Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))) + ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer)))));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)));
	}


	// From: Req2Batch66Wrapper_SP
	unsigned short int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer));
	unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_1_Pointer));
	if (stepLocal_0 || (*(WrapperStruct00_var_1_11_Pointer))) {
		if ((*(WrapperStruct00_var_1_6_Pointer)) != stepLocal_1) {
			(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
		} else {
			(*(WrapperStruct00_var_1_10_Pointer)) = (max (((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))) , (max ((*(WrapperStruct00_var_1_12_Pointer)) , (*(WrapperStruct00_var_1_15_Pointer))))));
		}
	}


	// From: Req3Batch66Wrapper_SP
	if ((*(WrapperStruct00_var_1_9_Pointer)) < (*(WrapperStruct00_var_1_4_Pointer))) {
		(*(WrapperStruct00_var_1_16_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) + 16);
	} else {
		if ((*(WrapperStruct00_var_1_11_Pointer)) || ((*(WrapperStruct00_var_1_17_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer)))) {
			(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
		} else {
			(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_1_Pointer));
		}
	}


	// From: Req4Batch66Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));


	// From: Req5Batch66Wrapper_SP
	(*(WrapperStruct00_var_1_19_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 8192);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 8192);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 16383);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 8191);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 65534);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 254);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_4_Pointer)) + (((*(WrapperStruct00_var_1_5_Pointer)) + (*(WrapperStruct00_var_1_6_Pointer))) + ((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_8_Pointer))))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)))))) && ((((*(WrapperStruct00_var_1_4_Pointer)) > (*(WrapperStruct00_var_1_1_Pointer))) || (*(WrapperStruct00_var_1_11_Pointer))) ? (((*(WrapperStruct00_var_1_6_Pointer)) != (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_12_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (max (((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))) , (max ((*(WrapperStruct00_var_1_12_Pointer)) , (*(WrapperStruct00_var_1_15_Pointer))))))))) : 1)) && (((*(WrapperStruct00_var_1_9_Pointer)) < (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_7_Pointer)) + 16))) : (((*(WrapperStruct00_var_1_11_Pointer)) || ((*(WrapperStruct00_var_1_17_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_1_Pointer))))))) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_15_Pointer))))) && ((*(WrapperStruct00_var_1_19_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_12_Pointer))))
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
