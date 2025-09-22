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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2][2] = {
	{0, 0}, {0, 1}
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1][0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer = &(BOOL_unsigned_char_Array_0[0][1]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer = &(BOOL_unsigned_char_Array_0[1][1]);
signed long int signed_long_int_Array_0[1] = {
	-100000000
};
signed long int* signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer = &(signed_long_int_Array_0[0]);
signed short int signed_short_int_Array_0[3] = {
	-4, -32, -100
};
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer = &(signed_short_int_Array_0[0]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer = &(signed_short_int_Array_0[1]);
signed short int* signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer = &(signed_short_int_Array_0[2]);
unsigned char unsigned_char_Array_0[2] = {
	10, 4
};
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer = &(unsigned_char_Array_0[0]);
unsigned char* unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer = &(unsigned_char_Array_0[1]);
unsigned long int unsigned_long_int_Array_0[2][3] = {
	{32, 4, 1443780595}, {8, 1, 2032620576}
};
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer = &(unsigned_long_int_Array_0[0][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer = &(unsigned_long_int_Array_0[1][0]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer = &(unsigned_long_int_Array_0[0][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer = &(unsigned_long_int_Array_0[1][1]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer = &(unsigned_long_int_Array_0[0][2]);
unsigned long int* unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer = &(unsigned_long_int_Array_0[1][2]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch121Wrapper_AP
	unsigned long int stepLocal_1 = ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)));
	unsigned long int stepLocal_0 = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer));
	if (stepLocal_1 == (- (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) {
		if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) != stepLocal_0) {
			(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer));
		}
	} else {
		(*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) = (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer));
	}


	// From: Req2Batch121Wrapper_AP
	unsigned long int stepLocal_2 = max (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer)));
	if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) <= stepLocal_2) {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)));
	} else {
		(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) = 0;
	}


	// From: Req4Batch121Wrapper_AP
	(*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) = (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer));


	// From: Req5Batch121Wrapper_AP
	(*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer));


	// From: Req3Batch121Wrapper_AP
	if ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) {
		if (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + 2)));
		} else {
			(*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) = (min ((abs ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))));
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][0] <= 1);
	BOOL_unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0][1] <= 0);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -16383);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 16383);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 32766);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 254);
	unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] != 0);
	unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967295);
	unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 1073741823);
	unsigned_long_int_Array_0[1][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][1] <= 1073741824);
	unsigned_long_int_Array_0[0][2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][2] >= 1073741824);
	assume_abort_if_not(unsigned_long_int_Array_0[0][2] <= 2147483647);
	unsigned_long_int_Array_0[1][2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][2] >= 1073741823);
	assume_abort_if_not(unsigned_long_int_Array_0[1][2] <= 2147483648);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer))) - ((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) + (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer)))) == (- (- (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) ? (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) != (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer))) ? ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)))) : 1) : ((*(signed_long_int_Array_0_arraysigned_long_int_Array_0Var0_Pointer)) == ((signed long int) (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var4_Pointer)) <= (max (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var3_Pointer)) / (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var0_Pointer))) , (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var1_Pointer))))) ? ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer))))) : ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) == ((unsigned char) 0)))) && (((*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var5_Pointer)) <= (*(unsigned_long_int_Array_0_arrayunsigned_long_int_Array_0Var2_Pointer))) ? ((! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer))) ? ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (min ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer)) , ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)) + 2))))) : ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var1_Pointer)) == ((signed short int) (min ((abs ((*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var0_Pointer)))) , (*(signed_short_int_Array_0_arraysigned_short_int_Array_0Var2_Pointer))))))) : 1)) && ((*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var0_Pointer)) == ((unsigned char) (*(unsigned_char_Array_0_arrayunsigned_char_Array_0Var1_Pointer))))) && ((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var3_Pointer)) == ((unsigned char) (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var2_Pointer))))
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
