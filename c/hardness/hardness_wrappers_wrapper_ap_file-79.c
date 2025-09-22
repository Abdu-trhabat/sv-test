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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79Wrapper_AP.c", 13, "reach_error"); }
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
	0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[2] = {
	32.5, 1.6
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
float float_Array_0[1] = {
	15.5
};
float* float_Array_0_arrayfloat_Array_0arrayVar0_Pointer = &(float_Array_0[0]);
signed char signed_char_Array_0[2][2] = {
	{64, 0}, {64, -16}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[2] = {
	4, -64
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed short int signed_short_int_Array_0[1] = {
	8
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
unsigned short int unsigned_short_int_Array_0[1] = {
	32
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_1_ = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch79Wrapper_AP
	signed long int stepLocal_1 = (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
	if ((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) {
		if (stepLocal_1 <= (~ ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) {
			(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
		} else {
			(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) = (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer));
		}
	}


	// From: Req4Batch79Wrapper_AP
	(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));


	// From: Req1Batch79Wrapper_AP
	if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + -32);
		} else {
			(*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) = ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , 16)));
		}
	}


	// From: Req2Batch79Wrapper_AP
	signed long int stepLocal_0 = max ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
	if (stepLocal_0 <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >> (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) {
		if ((- (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer));
		} else {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = last_1_signed_long_int_Array_0_1_;
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -1);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= 1);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 30);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_1_ = signed_long_int_Array_0[1];
}

int property(void) {
	return ((((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) + -32))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)) == ((signed char) ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) - (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , 16)))))) : 1) && (((max ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) <= ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) * ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) >> (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) ? (((- (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) >= (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) last_1_signed_long_int_Array_0_1_))) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))) && (((*(float_Array_0_arrayfloat_Array_0arrayVar0_Pointer)) < (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))) ? ((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) + (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))) <= (~ ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) % (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)) == ((unsigned short int) (*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer))))) : 1)) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))))
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
