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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch117Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[7] = {
	0, 0, 0, 1, 0, 0, 0
};
double double_Array_0[7] = {
	16.75, 1.4, 99.25, 128.79, 4.75, 9.5, 256.75
};
signed long int signed_long_int_Array_0[3] = {
	-2, 256, 1504831784
};
unsigned long int unsigned_long_int_Array_0[2][2] = {
	{64, 8}, {1000, 8}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch117Wrapper_A
	unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[3];
	if (BOOL_unsigned_char_Array_0[6] && stepLocal_0) {
		BOOL_unsigned_char_Array_0[2] = ((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) || (BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[5]));
	}


	// From: Req5Batch117Wrapper_A
	unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[4];
	if (BOOL_unsigned_char_Array_0[1] && stepLocal_1) {
		double_Array_0[6] = (min ((double_Array_0[0] - double_Array_0[3]) , (max ((max (double_Array_0[2] , double_Array_0[5])) , double_Array_0[1]))));
	} else {
		double_Array_0[6] = double_Array_0[3];
	}


	// From: Req1Batch117Wrapper_A
	if ((unsigned_long_int_Array_0[0][1] >= unsigned_long_int_Array_0[1][0]) || BOOL_unsigned_char_Array_0[2]) {
		if (BOOL_unsigned_char_Array_0[2]) {
			unsigned_long_int_Array_0[1][1] = 4u;
		} else {
			unsigned_long_int_Array_0[1][1] = (max (unsigned_long_int_Array_0[0][0] , 32u));
		}
	}


	// From: Req2Batch117Wrapper_A
	if (BOOL_unsigned_char_Array_0[2]) {
		double_Array_0[4] = double_Array_0[2];
	}


	// From: Req4Batch117Wrapper_A
	if ((- double_Array_0[2]) < double_Array_0[6]) {
		signed_long_int_Array_0[0] = (signed_long_int_Array_0[1] - (signed_long_int_Array_0[2] - 5));
	} else {
		signed_long_int_Array_0[0] = (32 - signed_long_int_Array_0[2]);
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 0);
	BOOL_unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[5] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[5] <= 0);
	BOOL_unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[6] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[6] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 0.0F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[5] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[5] >= -922337.2036854766000e+13F && double_Array_0[5] <= -1.0e-20F) || (double_Array_0[5] <= 9223372.036854766000e+12F && double_Array_0[5] >= 1.0e-20F ));
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= 1073741823);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483646);
	unsigned_long_int_Array_0[0][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][0] <= 4294967294);
	unsigned_long_int_Array_0[1][0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1][0] <= 4294967295);
	unsigned_long_int_Array_0[0][1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0][1] <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((unsigned_long_int_Array_0[0][1] >= unsigned_long_int_Array_0[1][0]) || BOOL_unsigned_char_Array_0[2]) ? (BOOL_unsigned_char_Array_0[2] ? (unsigned_long_int_Array_0[1][1] == ((unsigned long int) 4u)) : (unsigned_long_int_Array_0[1][1] == ((unsigned long int) (max (unsigned_long_int_Array_0[0][0] , 32u))))) : 1) && (BOOL_unsigned_char_Array_0[2] ? (double_Array_0[4] == ((double) double_Array_0[2])) : 1)) && ((BOOL_unsigned_char_Array_0[6] && BOOL_unsigned_char_Array_0[3]) ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) ((BOOL_unsigned_char_Array_0[0] || BOOL_unsigned_char_Array_0[1]) || (BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[5])))) : 1)) && (((- double_Array_0[2]) < double_Array_0[6]) ? (signed_long_int_Array_0[0] == ((signed long int) (signed_long_int_Array_0[1] - (signed_long_int_Array_0[2] - 5)))) : (signed_long_int_Array_0[0] == ((signed long int) (32 - signed_long_int_Array_0[2]))))) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[4]) ? (double_Array_0[6] == ((double) (min ((double_Array_0[0] - double_Array_0[3]) , (max ((max (double_Array_0[2] , double_Array_0[5])) , double_Array_0[1])))))) : (double_Array_0[6] == ((double) double_Array_0[3])))
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
