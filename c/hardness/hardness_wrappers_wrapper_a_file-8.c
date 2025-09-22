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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch8Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[5] = {
	0, 0, 0, 0, 0
};
double double_Array_0[7] = {
	2.8, 64.5, 0.0, 3.5, 199.15, 25.2, 0.5
};
signed long int signed_long_int_Array_0[2][2] = {
	{-1, 64}, {32, 128}
};
signed short int signed_short_int_Array_0[2] = {
	1, 500
};
unsigned long int unsigned_long_int_Array_0[2] = {
	4, 16
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch8Wrapper_A
	if (unsigned_long_int_Array_0[1] >= (8u * unsigned_long_int_Array_0[0])) {
		BOOL_unsigned_char_Array_0[4] = (! (BOOL_unsigned_char_Array_0[3] || (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1])));
	} else {
		BOOL_unsigned_char_Array_0[4] = BOOL_unsigned_char_Array_0[0];
	}


	// From: Req2Batch8Wrapper_A
	signed long int stepLocal_1 = signed_long_int_Array_0[1][0];
	unsigned long int stepLocal_0 = 1u;
	if (((unsigned_long_int_Array_0[0] * unsigned_long_int_Array_0[1]) * (signed_long_int_Array_0[0][0] - signed_long_int_Array_0[1][0])) >= stepLocal_0) {
		if (unsigned_long_int_Array_0[0] <= stepLocal_1) {
			signed_long_int_Array_0[0][1] = signed_long_int_Array_0[1][1];
		} else {
			signed_long_int_Array_0[0][1] = 8;
		}
	} else {
		signed_long_int_Array_0[0][1] = signed_long_int_Array_0[1][1];
	}


	// From: Req3Batch8Wrapper_A
	if ((~ (min (unsigned_long_int_Array_0[0] , signed_long_int_Array_0[0][1]))) <= (signed_long_int_Array_0[1][0] % 1u)) {
		double_Array_0[0] = (double_Array_0[1] + (double_Array_0[4] + double_Array_0[5]));
	} else {
		double_Array_0[0] = ((double_Array_0[2] - double_Array_0[3]) - double_Array_0[6]);
	}


	// From: Req4Batch8Wrapper_A
	signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 0);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427383000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 4611686.018427383000e+12F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427383000e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= -230584.3009213691400e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 2305843.009213691400e+12F && double_Array_0[4] >= 1.0e-20F ));
	double_Array_0[5] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[5] >= -230584.3009213691400e+13F && double_Array_0[5] <= -1.0e-20F) || (double_Array_0[5] <= 2305843.009213691400e+12F && double_Array_0[5] >= 1.0e-20F ));
	double_Array_0[6] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[6] >= 0.0F && double_Array_0[6] <= -1.0e-20F) || (double_Array_0[6] <= 9223372.036854766000e+12F && double_Array_0[6] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
	signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][1] >= -2147483647);
	assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483646);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((unsigned_long_int_Array_0[1] >= (8u * unsigned_long_int_Array_0[0])) ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (! (BOOL_unsigned_char_Array_0[3] || (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]))))) : (BOOL_unsigned_char_Array_0[4] == ((unsigned char) BOOL_unsigned_char_Array_0[0]))) && ((((unsigned_long_int_Array_0[0] * unsigned_long_int_Array_0[1]) * (signed_long_int_Array_0[0][0] - signed_long_int_Array_0[1][0])) >= 1u) ? ((unsigned_long_int_Array_0[0] <= signed_long_int_Array_0[1][0]) ? (signed_long_int_Array_0[0][1] == ((signed long int) signed_long_int_Array_0[1][1])) : (signed_long_int_Array_0[0][1] == ((signed long int) 8))) : (signed_long_int_Array_0[0][1] == ((signed long int) signed_long_int_Array_0[1][1])))) && (((~ (min (unsigned_long_int_Array_0[0] , signed_long_int_Array_0[0][1]))) <= (signed_long_int_Array_0[1][0] % 1u)) ? (double_Array_0[0] == ((double) (double_Array_0[1] + (double_Array_0[4] + double_Array_0[5])))) : (double_Array_0[0] == ((double) ((double_Array_0[2] - double_Array_0[3]) - double_Array_0[6]))))) && (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0]))
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
