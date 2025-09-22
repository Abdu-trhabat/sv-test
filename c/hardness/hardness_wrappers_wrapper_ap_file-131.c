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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch131Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[3] = {
	0, 0, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[2]);
signed char signed_char_Array_0[2][2] = {
	{-2, 25}, {-16, 32}
};
signed char* signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer = &(signed_char_Array_0[0][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer = &(signed_char_Array_0[1][0]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer = &(signed_char_Array_0[0][1]);
signed char* signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer = &(signed_char_Array_0[1][1]);
signed short int signed_short_int_Array_0[3] = {
	1000, 10, 5
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned long int unsigned_long_int_Array_0[5] = {
	16, 50, 64, 64, 8
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[3]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[4]);
unsigned short int unsigned_short_int_Array_0[5] = {
	2, 32, 62289, 8, 2
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
	// From: Req1Batch131Wrapper_AP
	if ((~ ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) / (max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) = (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))));
	}


	// From: Req2Batch131Wrapper_AP
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	if (stepLocal_0 == (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)));
	} else {
		(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) = (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer));
	}


	// From: Req3Batch131Wrapper_AP
	unsigned long int stepLocal_1 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
	if (stepLocal_1 >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer))));
	} else {
		(*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) = (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) , (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer))))));
	}


	// From: Req4Batch131Wrapper_AP
	unsigned long int stepLocal_2 = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer));
	if ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) <= stepLocal_2) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + (abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer))))));
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer));
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	signed_char_Array_0[1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[1][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= -127);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 126);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32766);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[0] != 0);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[1] != 0);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967295);
	unsigned_long_int_Array_0[3] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[3] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[3] <= 4294967295);
	unsigned_long_int_Array_0[4] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[4] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[4] <= 4294967295);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65534);
	unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[3] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[3] <= 16384);
	unsigned_short_int_Array_0[4] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[4] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[4] <= 16383);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((~ ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) * (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) < ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) / (max ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer)))))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer)) == ((unsigned char) (! ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) || (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))))) : 1) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)) == (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) - (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) == ((signed short int) (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)))))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)) >= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))) ? ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (min ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)))))) : ((*(signed_char_Array_0_arraysigned_char_Array_0Var0_Pointer)) == ((signed char) (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var1_Pointer)) , (max ((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) , (*(signed_char_Array_0_arraysigned_char_Array_0Var3_Pointer)))))))))) && (((*(signed_char_Array_0_arraysigned_char_Array_0Var2_Pointer)) <= (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) - ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var3_Pointer)) + (abs ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var4_Pointer)))))))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))
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
