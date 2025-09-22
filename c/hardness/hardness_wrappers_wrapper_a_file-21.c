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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[3] = {
	15.4, 15.6, 32.2
};
float float_Array_0[2] = {
	5.75, 8.6
};
signed long int signed_long_int_Array_0[2] = {
	-1000000000, -128
};
signed short int signed_short_int_Array_0[1] = {
	256
};
unsigned char unsigned_char_Array_0[3] = {
	32, 4, 8
};
unsigned short int unsigned_short_int_Array_0[1] = {
	32
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_1_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch21Wrapper_A
	if ((unsigned_char_Array_0[2] + (max (unsigned_char_Array_0[1] , unsigned_char_Array_0[0]))) < (signed_long_int_Array_0[1] * signed_long_int_Array_0[0])) {
		if (signed_long_int_Array_0[1] < (unsigned_char_Array_0[2] - unsigned_char_Array_0[1])) {
			if (signed_long_int_Array_0[1] != (abs (min (unsigned_char_Array_0[0] , unsigned_char_Array_0[2])))) {
				unsigned_short_int_Array_0[0] = unsigned_char_Array_0[2];
			}
		}
	} else {
		unsigned_short_int_Array_0[0] = unsigned_char_Array_0[0];
	}


	// From: Req2Batch21Wrapper_A
	if ((min (double_Array_0[1] , double_Array_0[0])) <= double_Array_0[2]) {
		if (last_1_BOOL_unsigned_char_Array_0_1_ && (signed_long_int_Array_0[1] >= unsigned_short_int_Array_0[0])) {
			BOOL_unsigned_char_Array_0[1] = 0;
		}
	} else {
		BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[0];
	}


	// From: Req3Batch21Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		if ((float_Array_0[0] - float_Array_0[1]) >= ((double_Array_0[1] + double_Array_0[2]) + double_Array_0[0])) {
			signed_short_int_Array_0[0] = (max (unsigned_char_Array_0[2] , unsigned_char_Array_0[1]));
		} else {
			signed_short_int_Array_0[0] = unsigned_char_Array_0[0];
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854776000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= 0.0F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 255);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_1_ = BOOL_unsigned_char_Array_0[1];
}

int property(void) {
	return ((((unsigned_char_Array_0[2] + (max (unsigned_char_Array_0[1] , unsigned_char_Array_0[0]))) < (signed_long_int_Array_0[1] * signed_long_int_Array_0[0])) ? ((signed_long_int_Array_0[1] < (unsigned_char_Array_0[2] - unsigned_char_Array_0[1])) ? ((signed_long_int_Array_0[1] != (abs (min (unsigned_char_Array_0[0] , unsigned_char_Array_0[2])))) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[2])) : 1) : 1) : (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[0]))) && (((min (double_Array_0[1] , double_Array_0[0])) <= double_Array_0[2]) ? ((last_1_BOOL_unsigned_char_Array_0_1_ && (signed_long_int_Array_0[1] >= unsigned_short_int_Array_0[0])) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) 0)) : 1) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[0])))) && (BOOL_unsigned_char_Array_0[0] ? (((float_Array_0[0] - float_Array_0[1]) >= ((double_Array_0[1] + double_Array_0[2]) + double_Array_0[0])) ? (signed_short_int_Array_0[0] == ((signed short int) (max (unsigned_char_Array_0[2] , unsigned_char_Array_0[1])))) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_char_Array_0[0]))) : 1)
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
