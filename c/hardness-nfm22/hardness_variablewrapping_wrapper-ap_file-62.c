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
void reach_error() { __assert_fail("0", "Req1_Prop1_Batch62Wrapper_AP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





// Function prototypes


// Internal control logic variables
unsigned char isInitial = 0;

// Signal variables
unsigned char BOOL_unsigned_char_Array_0[1] = {
	1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
signed char signed_char_Array_0[3] = {
	-5, -128, 32
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed long int signed_long_int_Array_0[3] = {
	4, 1494406358, 256
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[1] = {
	-32
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned char unsigned_char_Array_0[2] = {
	16, 16
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);

// Calibration values

// Last'ed variables
signed char last_1_signed_char_Array_0_2_ = 32;
signed short int last_1_signed_short_int_Array_0_0_ = -32;
unsigned char last_1_unsigned_char_Array_0_1_ = 16;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch62Wrapper_AP
	signed char stepLocal_1 = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	signed long int stepLocal_0 = last_1_unsigned_char_Array_0_1_;
	if (last_1_unsigned_char_Array_0_1_ <= stepLocal_1) {
		if (stepLocal_0 <= (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - last_1_signed_char_Array_0_2_);
		} else {
			if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = last_1_signed_short_int_Array_0_0_;
			} else {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (last_1_unsigned_char_Array_0_1_ + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)));
			}
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - last_1_signed_char_Array_0_2_);
	}


	// From: Req6Batch62Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer));


	// From: Req1Batch62Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = (16 - 2);


	// From: Req2Batch62Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (abs (-4));
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) = (abs ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))));
	}


	// From: Req5Batch62Wrapper_AP
	(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer));


	// From: Req3Batch62Wrapper_AP
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			if ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) != (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) {
				(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer));
			}
		}
	}
}



void updateVariables() {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -126);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 1073741822);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
}



void updateLastVariables() {
	last_1_signed_char_Array_0_2_ = signed_char_Array_0[2];
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
	last_1_unsigned_char_Array_0_1_ = unsigned_char_Array_0[1];
}

int property() {
	return ((((((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) (16 - 2))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (abs (-4)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) == ((signed char) (abs ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)))))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) < (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) != (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)))) : 1) : 1) : 1)) && ((last_1_unsigned_char_Array_0_1_ <= (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((last_1_unsigned_char_Array_0_1_ <= (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - last_1_signed_char_Array_0_2_))) : ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) last_1_signed_short_int_Array_0_0_)) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (last_1_unsigned_char_Array_0_1_ + (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer))) - last_1_signed_char_Array_0_2_))))) && ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))))) && ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))))
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
