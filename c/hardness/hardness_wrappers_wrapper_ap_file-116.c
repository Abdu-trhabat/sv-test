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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch116Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2] = {
	0, 1
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[1] = {
	25.6
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed char signed_char_Array_0[2] = {
	-5, -64
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1]);
signed long int signed_long_int_Array_0[2][5] = {
	{16, -4, 5, 1867567405, 1}, {8, 32, 128, -128, -128}
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1][0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[0][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[1][1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[0][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer = &(signed_long_int_Array_0[1][2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer = &(signed_long_int_Array_0[0][3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer = &(signed_long_int_Array_0[1][3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer = &(signed_long_int_Array_0[0][4]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer = &(signed_long_int_Array_0[1][4]);
signed short int signed_short_int_Array_0[2] = {
	0, 5
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[2] = {
	4, 64
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req5Batch116Wrapper_AP
	(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer));


	// From: Req6Batch116Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer));


	// From: Req4Batch116Wrapper_AP
	signed long int stepLocal_2 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer));
	if (stepLocal_2 <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = ((min ((max ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) , (min ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))))) - (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer))));
	}


	// From: Req3Batch116Wrapper_AP
	(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) >= (~ (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) && (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))));


	// From: Req1Batch116Wrapper_AP
	signed long int stepLocal_0 = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer))) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer));
	if ((~ (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < stepLocal_0) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = 8;
		}
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = 5;
	}


	// From: Req2Batch116Wrapper_AP
	signed long int stepLocal_1 = min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (stepLocal_1 >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
			(*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) = 2.6f;
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483646);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
	signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][1] <= 536870911);
	signed_long_int_Array_0[0][2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][2] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][2] <= 1073741823);
	signed_long_int_Array_0[1][2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][2] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[1][2] <= 2147483646);
	signed_long_int_Array_0[0][3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][3] >= 1610612734);
	assume_abort_if_not(signed_long_int_Array_0[0][3] <= 2147483646);
	signed_long_int_Array_0[1][3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][3] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1][3] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[1][3] != 0);
	signed_long_int_Array_0[0][4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0][4] <= 2147483647);
	signed_long_int_Array_0[1][4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1][4] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((~ (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) < (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var9_Pointer)) * (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer))) / (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var7_Pointer)))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) 8))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) 5))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? (((min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) == ((float) 2.6f)) : 1) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) >= (~ (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)))) && (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var8_Pointer)) <= (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) ((min ((max ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) , (min ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var5_Pointer)))))) - (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var6_Pointer)) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) - (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)))))) : 1)) && ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer))))) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))
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
