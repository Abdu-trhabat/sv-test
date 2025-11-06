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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch155Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





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
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
signed char signed_char_Array_0[5] = {
	0, -64, 16, 50, -128
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed long int signed_long_int_Array_0[2] = {
	1623884356, 64
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[1] = {
	-25
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[1] = {
	1
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[3] = {
	64, 1000, 10
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_1_ = 64;
signed short int last_1_signed_short_int_Array_0_0_ = -25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch155Wrapper_AP
	if (last_1_signed_long_int_Array_0_1_ < last_1_signed_short_int_Array_0_0_) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + 64));
	}


	// From: Req4Batch155Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));


	// From: Req5Batch155Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer));


	// From: Req6Batch155Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));


	// From: Req2Batch155Wrapper_AP
	if (last_1_signed_long_int_Array_0_1_ > (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) {
		if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) > last_1_signed_long_int_Array_0_1_) {
			if ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) != (16 | (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) {
				if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
					(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
				} else {
					(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
				}
			}
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));
	}


	// From: Req3Batch155Wrapper_AP
	signed long int stepLocal_0 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));
	if (stepLocal_0 == ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (min ((max (-16 , ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) , (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))));
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= -1);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= 0);
	assume_abort_if_not(signed_char_Array_0[3] <= 126);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 1073741823);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 16384);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 32767);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}

int property(void) {
	return ((((((last_1_signed_long_int_Array_0_1_ < last_1_signed_short_int_Array_0_0_) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) + 64)))) : 1) && ((last_1_signed_long_int_Array_0_1_ > (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) > last_1_signed_long_int_Array_0_1_) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) != (16 | (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (min ((max (-16 , ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) , (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))
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
