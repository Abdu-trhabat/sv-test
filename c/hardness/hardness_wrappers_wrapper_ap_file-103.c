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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[5] = {
	999999999.2, 0.0, 64.25, 16.75, 0.050000000000000044
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[2]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[3]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[4]);
signed long int signed_long_int_Array_0[3] = {
	4, 0, 32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed short int signed_short_int_Array_0[2] = {
	16, -1
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch103Wrapper_AP
	(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));


	// From: Req3Batch103Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (! ((10.25f - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) <= (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) {
			if (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) <= (- 99999.25f)) {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - 64);
			} else {
				(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (max ((min ((max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , 16)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) , 2));
			}
		}
	}


	// From: Req4Batch103Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = ((min (-256 , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	}


	// From: Req2Batch103Wrapper_AP
	signed short int stepLocal_0 = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > stepLocal_0) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) = (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))));
	} else {
		(*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 4611686.018427383000e+12F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 4611686.018427383000e+12F && float_Array_0[2] >= 1.0e-20F ));
	float_Array_0[3] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[3] >= 0.0F && float_Array_0[3] <= -1.0e-20F) || (float_Array_0[3] <= 4611686.018427383000e+12F && float_Array_0[3] >= 1.0e-20F ));
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) > (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) == ((float) (((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer))) - ((*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)))))) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((! ((10.25f - (*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer))) <= (*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)))) ? ((((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) <= (- 99999.25f)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) - 64))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (max ((min ((max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) , 16)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))) , 2))))) : 1) : 1)) && ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) ((min (-256 , (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)))) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))))
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
