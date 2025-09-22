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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165Wrapper_AP.c", 13, "reach_error"); }
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
	1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
float float_Array_0[2][2][2] = {
	{{31.2, 2.7}, {0.25, 255.6}}, {{15.25, 128.75}, {7.5, 10.5}}
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0][0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar1_Pointer = &(float_Array_0[1][0][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar2_Pointer = &(float_Array_0[0][1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar3_Pointer = &(float_Array_0[1][1][0]);
float* float_Array_0_arrayfloat_Array_0arrayVar4_Pointer = &(float_Array_0[0][0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar5_Pointer = &(float_Array_0[1][0][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar6_Pointer = &(float_Array_0[0][1][1]);
float* float_Array_0_arrayfloat_Array_0arrayVar7_Pointer = &(float_Array_0[1][1][1]);
signed short int signed_short_int_Array_0[3][3] = {
	{-32, 10, -10}, {25, 128, 16}, {-64, -256, 100}
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2][0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[0][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[1][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer = &(signed_short_int_Array_0[2][1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var6_Pointer = &(signed_short_int_Array_0[0][2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer = &(signed_short_int_Array_0[1][2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var8_Pointer = &(signed_short_int_Array_0[2][2]);
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{100, 33508}, {58974, 21271}
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1][0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[0][1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[1][1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch165Wrapper_AP
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) >= ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) {
		(*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) = (max ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) , (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - 200.2f))));
	} else {
		(*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) = (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer));
	}


	// From: Req2Batch165Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer)))));
	}


	// From: Req3Batch165Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var6_Pointer)) = ((max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer))))) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var8_Pointer)) - 100));
	}


	// From: Req4Batch165Wrapper_AP
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var8_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer))))));
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer))) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	float_Array_0[0][0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0][0] >= 0.0F && float_Array_0[0][0][0] <= -1.0e-20F) || (float_Array_0[0][0][0] <= 4611686.018427383000e+12F && float_Array_0[0][0][0] >= 1.0e-20F ));
	float_Array_0[1][0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0][0] >= 0.0F && float_Array_0[1][0][0] <= -1.0e-20F) || (float_Array_0[1][0][0] <= 4611686.018427383000e+12F && float_Array_0[1][0][0] >= 1.0e-20F ));
	float_Array_0[0][1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1][0] >= 0.0F && float_Array_0[0][1][0] <= -1.0e-20F) || (float_Array_0[0][1][0] <= 4611686.018427383000e+12F && float_Array_0[0][1][0] >= 1.0e-20F ));
	float_Array_0[1][1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1][0] >= -922337.2036854766000e+13F && float_Array_0[1][1][0] <= -1.0e-20F) || (float_Array_0[1][1][0] <= 9223372.036854766000e+12F && float_Array_0[1][1][0] >= 1.0e-20F ));
	float_Array_0[0][0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0][1] >= -922337.2036854776000e+13F && float_Array_0[0][0][1] <= -1.0e-20F) || (float_Array_0[0][0][1] <= 9223372.036854776000e+12F && float_Array_0[0][0][1] >= 1.0e-20F ));
	float_Array_0[1][0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0][1] >= -922337.2036854776000e+13F && float_Array_0[1][0][1] <= -1.0e-20F) || (float_Array_0[1][0][1] <= 9223372.036854776000e+12F && float_Array_0[1][0][1] >= 1.0e-20F ));
	float_Array_0[0][1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1][1] >= -922337.2036854776000e+13F && float_Array_0[0][1][1] <= -1.0e-20F) || (float_Array_0[0][1][1] <= 9223372.036854776000e+12F && float_Array_0[0][1][1] >= 1.0e-20F ));
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 16383);
	signed_short_int_Array_0[2][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2][0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[2][0] <= 16383);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 16383);
	signed_short_int_Array_0[1][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][1] <= 16383);
	signed_short_int_Array_0[2][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2][1] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[2][1] <= 16383);
	signed_short_int_Array_0[1][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[1][2] <= 16383);
	signed_short_int_Array_0[2][2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2][2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[2][2] <= 16383);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 49150);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
	unsigned_short_int_Array_0[1][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] >= 16383);
	assume_abort_if_not(unsigned_short_int_Array_0[1][1] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(float_Array_0_arrayfloat_Array_0arrayVar6_Pointer)) >= ((*(float_Array_0_arrayfloat_Array_0arrayVar5_Pointer)) + (*(float_Array_0_arrayfloat_Array_0arrayVar4_Pointer)))) ? ((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) == ((float) (max ((*(float_Array_0_arrayfloat_Array_0arrayVar3_Pointer)) , (((*(float_Array_0_arrayfloat_Array_0arrayVar2_Pointer)) - (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))) + ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) - 200.2f)))))) : ((*(float_Array_0_arrayfloat_Array_0arrayVar7_Pointer)) == ((float) (*(float_Array_0_arrayfloat_Array_0arrayVar1_Pointer))))) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var5_Pointer))))))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var6_Pointer)) == ((signed short int) ((max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer))))) + ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var8_Pointer)) - 100)))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) - (max ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var8_Pointer)) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer)))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var7_Pointer))) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer))))))
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
