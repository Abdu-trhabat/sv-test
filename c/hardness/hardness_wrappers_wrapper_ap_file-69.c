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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch69Wrapper_AP.c", 13, "reach_error"); }
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
float float_Array_0[1] = {
	16.25
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed char signed_char_Array_0[2][2] = {
	{-4, -100}, {50, 16}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[2] = {
	8, -5
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[5] = {
	1, -1, 32, -128, -100
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer = &(signed_short_int_Array_0[3]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer = &(signed_short_int_Array_0[4]);
unsigned long int unsigned_long_int_Array_0[2][2] = {
	{500, 8}, {256, 0}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch69Wrapper_AP
	unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) * (min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))));
	if (stepLocal_0 < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) {
		if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) > stepLocal_1) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) = 4;
		}
	}


	// From: Req2Batch69Wrapper_AP
	unsigned long int stepLocal_3 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
	unsigned char stepLocal_2 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)));
	if ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || stepLocal_2) {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) , (min (-200 , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))))));
	} else {
		if (stepLocal_3 != 1u) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer));
		}
	}


	// From: Req3Batch69Wrapper_AP
	signed long int stepLocal_4 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >> (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
	if (((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) >= stepLocal_4) {
		if ((- 999999.75f) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)))));
		}
	}


	// From: Req4Batch69Wrapper_AP
	(*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) = 4;
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -63);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 63);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= 1);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 30);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 32767);
	signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[3] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[3] <= 32766);
	unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967295);
	unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967295);
	unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967295);
	unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) * (min ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) < (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)) > (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) == ((signed short int) 4))) : 1) && (((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) || ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) > ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)) , (min (-200 , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer)))))))) : (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) != 1u) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var4_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var3_Pointer))))))) && ((((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))) >= ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >> (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) ? (((- 999999.75f) > (*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer))))))) : 1) : 1)) && ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) == ((signed char) 4))
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
