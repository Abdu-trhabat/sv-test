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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	unsigned char var_1_2;
	unsigned long int var_1_3;
	unsigned long int var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_6;
	signed long int var_1_7;
	signed char var_1_8;
	signed long int var_1_9;
	unsigned char var_1_10;
	unsigned short int var_1_11;
	signed char var_1_12;
	signed char var_1_13;
	signed char var_1_14;
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
	16,
	0,
	32,
	8,
	256,
	0,
	10,
	-100,
	1,
	0,
	64,
	-50,
	32,
	2
};
signed char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned long int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned long int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed long int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch194Wrapper_SP
	unsigned char stepLocal_2 = (*(WrapperStruct00_var_1_2_Pointer));
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_5_Pointer)) / (min ((*(WrapperStruct00_var_1_7_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))));
	if (stepLocal_2 && (*(WrapperStruct00_var_1_10_Pointer))) {
		(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
	} else {
		if ((*(WrapperStruct00_var_1_10_Pointer))) {
			if ((*(WrapperStruct00_var_1_6_Pointer)) >= stepLocal_1) {
				(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
			}
		}
	}


	// From: Req3Batch194Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		if ((*(WrapperStruct00_var_1_7_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) | (max ((*(WrapperStruct00_var_1_11_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))))) {
			if (((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)) / (max ((*(WrapperStruct00_var_1_7_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))) {
				(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
			} else {
				(*(WrapperStruct00_var_1_12_Pointer)) = 8;
			}
		} else {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
		}
	}


	// From: Req1Batch194Wrapper_SP
	unsigned char stepLocal_0 = ((*(WrapperStruct00_var_1_9_Pointer)) % (*(WrapperStruct00_var_1_7_Pointer))) >= (*(WrapperStruct00_var_1_9_Pointer));
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		if (((*(WrapperStruct00_var_1_3_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) && stepLocal_0) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_8_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 65535);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 65535);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_7 != 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -126);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 126);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_11 != 0);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((*(WrapperStruct00_var_1_2_Pointer)) ? ((((*(WrapperStruct00_var_1_3_Pointer)) == (*(WrapperStruct00_var_1_4_Pointer))) && (((*(WrapperStruct00_var_1_9_Pointer)) % (*(WrapperStruct00_var_1_7_Pointer))) >= (*(WrapperStruct00_var_1_9_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (abs ((*(WrapperStruct00_var_1_8_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer))))) && (((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) ? (((*(WrapperStruct00_var_1_6_Pointer)) >= ((*(WrapperStruct00_var_1_5_Pointer)) / (min ((*(WrapperStruct00_var_1_7_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_8_Pointer)))) : 1) : 1))) && ((*(WrapperStruct00_var_1_2_Pointer)) ? (((*(WrapperStruct00_var_1_7_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) | (max ((*(WrapperStruct00_var_1_11_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))))) ? ((((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) < ((*(WrapperStruct00_var_1_8_Pointer)) / (max ((*(WrapperStruct00_var_1_7_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer)))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) 8))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_8_Pointer))))) : 1)
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
