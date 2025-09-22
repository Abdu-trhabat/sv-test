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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Wrapper_AP.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
	255.5, 64.7, 499.77
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[2]);
signed long int signed_long_int_Array_0[5] = {
	2, -25, 32, 1, 32
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer = &(signed_long_int_Array_0[1]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer = &(signed_long_int_Array_0[2]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer = &(signed_long_int_Array_0[3]);
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer = &(signed_long_int_Array_0[4]);
signed short int signed_short_int_Array_0[2] = {
	-256, 256
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
unsigned short int unsigned_short_int_Array_0[5] = {
	10, 10000, 10000, 30958, 25
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer = &(unsigned_short_int_Array_0[3]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer = &(unsigned_short_int_Array_0[4]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch145Wrapper_AP
	if (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) = (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)));
	}


	// From: Req2Batch145Wrapper_AP
	unsigned char stepLocal_1 = (10 > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	unsigned short int stepLocal_0 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer));
	if (stepLocal_1 || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) {
		if (stepLocal_0 >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer));
	}


	// From: Req3Batch145Wrapper_AP
	unsigned short int stepLocal_2 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
	if ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) != stepLocal_2) {
		(*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
	}


	// From: Req4Batch145Wrapper_AP
	unsigned short int stepLocal_3 = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
	if ((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) <= (min ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) {
		if ((min ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) , ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) & (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))) < stepLocal_3) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (min ((min ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))));
		}
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483647);
	signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 8192);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 16383);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 8192);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 16384);
	unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[3] >= 16383);
	assume_abort_if_not(unsigned_short_int_Array_0[3] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var4_Pointer)) + (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var3_Pointer))) <= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)) == ((unsigned short int) (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) + (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)))) - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))))) : 1) && ((((10 > (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) && (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer))) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))) ? (((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) >= (*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var1_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))) && (((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) != (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) : 1)) && (((*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)) <= (min ((*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer))))) ? (((min ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) , ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) & (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer))))) < (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (min ((min ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer))))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)))))
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
