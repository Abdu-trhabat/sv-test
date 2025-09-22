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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch124Wrapper_A.c", 13, "reach_error"); }
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
	0
};
double double_Array_0[2][2] = {
	{100000000.4, 8.5}, {3.2, 64.5}
};
signed char signed_char_Array_0[2][2] = {
	{5, 100}, {64, 2}
};
signed short int signed_short_int_Array_0[1] = {
	-8
};
unsigned long int unsigned_long_int_Array_0[3] = {
	16, 8, 64
};
unsigned short int unsigned_short_int_Array_0[1] = {
	8
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch124Wrapper_A
	unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[0];
	if (! (double_Array_0[0][1] == (15.2 + double_Array_0[1][0]))) {
		if (stepLocal_0 && (double_Array_0[0][1] == double_Array_0[1][0])) {
			if (BOOL_unsigned_char_Array_0[0]) {
				double_Array_0[1][1] = (2.5 - double_Array_0[0][0]);
			} else {
				double_Array_0[1][1] = double_Array_0[0][0];
			}
		}
	} else {
		double_Array_0[1][1] = double_Array_0[0][0];
	}


	// From: Req2Batch124Wrapper_A
	unsigned_long_int_Array_0[2] = (unsigned_long_int_Array_0[1] + unsigned_long_int_Array_0[0]);


	// From: Req3Batch124Wrapper_A
	unsigned long int stepLocal_1 = max (unsigned_long_int_Array_0[0] , unsigned_long_int_Array_0[1]);
	if ((abs (unsigned_long_int_Array_0[2])) < stepLocal_1) {
		signed_char_Array_0[1][0] = ((signed_char_Array_0[0][1] - signed_char_Array_0[1][1]) - (abs (signed_char_Array_0[0][0])));
	}


	// From: Req5Batch124Wrapper_A
	signed_short_int_Array_0[0] = 16;


	// From: Req4Batch124Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		if (double_Array_0[0][0] > 99.4) {
			if (signed_short_int_Array_0[0] >= unsigned_long_int_Array_0[2]) {
				unsigned_short_int_Array_0[0] = (min (signed_char_Array_0[0][1] , 256));
			}
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= -922337.2036854776000e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854776000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= -922337.2036854776000e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854776000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	signed_char_Array_0[0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0] >= -126);
	assume_abort_if_not(signed_char_Array_0[0][0] <= 126);
	signed_char_Array_0[0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1] >= 62);
	assume_abort_if_not(signed_char_Array_0[0][1] <= 126);
	signed_char_Array_0[1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_char_Array_0[1][1] <= 63);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((! (double_Array_0[0][1] == (15.2 + double_Array_0[1][0]))) ? ((BOOL_unsigned_char_Array_0[0] && (double_Array_0[0][1] == double_Array_0[1][0])) ? (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[1][1] == ((double) (2.5 - double_Array_0[0][0]))) : (double_Array_0[1][1] == ((double) double_Array_0[0][0]))) : 1) : (double_Array_0[1][1] == ((double) double_Array_0[0][0]))) && (unsigned_long_int_Array_0[2] == ((unsigned long int) (unsigned_long_int_Array_0[1] + unsigned_long_int_Array_0[0])))) && (((abs (unsigned_long_int_Array_0[2])) < (max (unsigned_long_int_Array_0[0] , unsigned_long_int_Array_0[1]))) ? (signed_char_Array_0[1][0] == ((signed char) ((signed_char_Array_0[0][1] - signed_char_Array_0[1][1]) - (abs (signed_char_Array_0[0][0]))))) : 1)) && (BOOL_unsigned_char_Array_0[0] ? ((double_Array_0[0][0] > 99.4) ? ((signed_short_int_Array_0[0] >= unsigned_long_int_Array_0[2]) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) (min (signed_char_Array_0[0][1] , 256)))) : 1) : 1) : 1)) && (signed_short_int_Array_0[0] == ((signed short int) 16))
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
