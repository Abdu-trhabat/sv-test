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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
	9.3, 31.2
};
float float_Array_0[2] = {
	99999999999999.2, 4.9
};
signed char signed_char_Array_0[5] = {
	1, -32, -16, -32, -50
};
signed long int signed_long_int_Array_0[2] = {
	100, 1
};
signed short int signed_short_int_Array_0[1] = {
	1
};
unsigned char unsigned_char_Array_0[2][2] = {
	{32, 0}, {5, 32}
};

// Calibration values

// Last'ed variables
signed short int last_1_signed_short_int_Array_0_0_ = 1;
unsigned char last_1_unsigned_char_Array_0_1__1_ = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch75Wrapper_A
	signed long int stepLocal_0 = max (signed_long_int_Array_0[1] , signed_long_int_Array_0[0]);
	if (((last_1_unsigned_char_Array_0_1__1_ * last_1_signed_short_int_Array_0_0_) * last_1_signed_short_int_Array_0_0_) < stepLocal_0) {
		unsigned_char_Array_0[1][1] = unsigned_char_Array_0[0][0];
	} else {
		unsigned_char_Array_0[1][1] = 10;
	}


	// From: Req2Batch75Wrapper_A
	if ((- double_Array_0[0]) >= double_Array_0[1]) {
		if (BOOL_unsigned_char_Array_0[0]) {
			signed_short_int_Array_0[0] = (abs ((min (unsigned_char_Array_0[0][1] , last_1_signed_short_int_Array_0_0_)) + (max (unsigned_char_Array_0[1][1] , unsigned_char_Array_0[1][0]))));
		} else {
			signed_short_int_Array_0[0] = (unsigned_char_Array_0[1][0] + unsigned_char_Array_0[1][1]);
		}
	}


	// From: Req3Batch75Wrapper_A
	if (2.8f == double_Array_0[1]) {
		signed_char_Array_0[0] = ((max ((max (signed_char_Array_0[1] , 16)) , signed_char_Array_0[3])) + signed_char_Array_0[4]);
	}


	// From: Req4Batch75Wrapper_A
	signed_char_Array_0[2] = (min (-4 , signed_char_Array_0[3]));


	// From: Req5Batch75Wrapper_A
	if (unsigned_char_Array_0[1][1] > (signed_short_int_Array_0[0] + signed_char_Array_0[2])) {
		float_Array_0[0] = float_Array_0[1];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1] <= 63);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= -63);
	assume_abort_if_not(signed_char_Array_0[3] <= 63);
	signed_char_Array_0[4] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[4] >= -63);
	assume_abort_if_not(signed_char_Array_0[4] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 255);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 255);
}



void updateLastVariables(void) {
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
	last_1_unsigned_char_Array_0_1__1_ = unsigned_char_Array_0[1][1];
}

int property(void) {
	return (((((((last_1_unsigned_char_Array_0_1__1_ * last_1_signed_short_int_Array_0_0_) * last_1_signed_short_int_Array_0_0_) < (max (signed_long_int_Array_0[1] , signed_long_int_Array_0[0]))) ? (unsigned_char_Array_0[1][1] == ((unsigned char) unsigned_char_Array_0[0][0])) : (unsigned_char_Array_0[1][1] == ((unsigned char) 10))) && (((- double_Array_0[0]) >= double_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_short_int_Array_0[0] == ((signed short int) (abs ((min (unsigned_char_Array_0[0][1] , last_1_signed_short_int_Array_0_0_)) + (max (unsigned_char_Array_0[1][1] , unsigned_char_Array_0[1][0])))))) : (signed_short_int_Array_0[0] == ((signed short int) (unsigned_char_Array_0[1][0] + unsigned_char_Array_0[1][1])))) : 1)) && ((2.8f == double_Array_0[1]) ? (signed_char_Array_0[0] == ((signed char) ((max ((max (signed_char_Array_0[1] , 16)) , signed_char_Array_0[3])) + signed_char_Array_0[4]))) : 1)) && (signed_char_Array_0[2] == ((signed char) (min (-4 , signed_char_Array_0[3]))))) && ((unsigned_char_Array_0[1][1] > (signed_short_int_Array_0[0] + signed_char_Array_0[2])) ? (float_Array_0[0] == ((float) float_Array_0[1])) : 1)
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
