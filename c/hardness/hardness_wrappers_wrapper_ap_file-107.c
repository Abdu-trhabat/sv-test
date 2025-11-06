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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch107Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
	1000.75, 10.5, 3.25
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
signed char signed_char_Array_0[7] = {
	2, 50, 32, 10, 64, -1, 1
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[2]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[3]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer = &(signed_char_Array_0[4]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer = &(signed_char_Array_0[5]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer = &(signed_char_Array_0[6]);
signed short int signed_short_int_Array_0[2][2] = {
	{2, 32}, {32, 256}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[1][1]);
unsigned long int unsigned_long_int_Array_0[3] = {
	64, 10000, 5
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch107Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer));
	} else {
		if ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = 10;
		} else {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer));
		}
	}


	// From: Req2Batch107Wrapper_AP
	unsigned long int stepLocal_0 = ~ (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)));
	if (! ((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))) {
		if ((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) >= stepLocal_0) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + -2));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) = ((min ((abs (-8)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)));
		}
	}


	// From: Req3Batch107Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer));


	// From: Req4Batch107Wrapper_AP
	if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
		if ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) > (((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer));
		} else {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = -100;
		}
	}
}



void updateVariables(void) {
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854776000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1] <= 64);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= 0);
	assume_abort_if_not(signed_char_Array_0[2] <= 127);
	signed_char_Array_0[4] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[4] >= 63);
	assume_abort_if_not(signed_char_Array_0[4] <= 127);
	signed_char_Array_0[5] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[5] >= -127);
	assume_abort_if_not(signed_char_Array_0[5] <= 126);
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32766);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= -8191);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 8192);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32766);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)))) : (((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) 10)) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)))))) && ((! ((*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)) >= (*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)))) ? (((min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) >= (~ (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) == ((signed short int) ((*(signed_char_Array_0_arraysigned_char_Array_0Var6_Pointer)) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) + -2)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) == ((signed short int) ((min ((abs (-8)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)))) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))) : 1)) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer))))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) > (((*(signed_char_Array_0_arraysigned_char_Array_0Var4_Pointer)) - (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))) - (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var5_Pointer)))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) -100))) : 1)
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
