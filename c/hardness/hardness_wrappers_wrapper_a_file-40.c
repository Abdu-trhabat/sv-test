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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch40Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[2] = {
	8.4, 49.75
};
float float_Array_0[2][2] = {
	{128.5, 9999.3}, {7.5, 63.7}
};
signed char signed_char_Array_0[3] = {
	-2, 25, -5
};
signed long int signed_long_int_Array_0[5] = {
	-10, -2, 5, -256, -4
};
signed short int signed_short_int_Array_0[2] = {
	1, -256
};
unsigned char unsigned_char_Array_0[3] = {
	1, 64, 128
};

// Calibration values

// Last'ed variables
double last_1_double_Array_0_0_ = 8.4;
signed short int last_1_signed_short_int_Array_0_0_ = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch40Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		if (BOOL_unsigned_char_Array_0[0] && (float_Array_0[1][1] <= (- 63.9f))) {
			if (float_Array_0[1][1] >= float_Array_0[0][1]) {
				if (BOOL_unsigned_char_Array_0[0]) {
					signed_long_int_Array_0[4] = signed_long_int_Array_0[3];
				}
			}
		}
	}


	// From: Req2Batch40Wrapper_A
	if (((signed_long_int_Array_0[4] / signed_long_int_Array_0[1]) / signed_long_int_Array_0[0]) >= (signed_long_int_Array_0[2] | signed_long_int_Array_0[3])) {
		unsigned_char_Array_0[1] = (unsigned_char_Array_0[2] - unsigned_char_Array_0[0]);
	} else {
		unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
	}


	// From: Req3Batch40Wrapper_A
	if (last_1_double_Array_0_0_ != (min (float_Array_0[1][1] , float_Array_0[0][0]))) {
		double_Array_0[0] = (double_Array_0[1] + (127.4 - 8.25));
	}


	// From: Req4Batch40Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		signed_char_Array_0[0] = (max (signed_char_Array_0[1] , (-2 + signed_char_Array_0[2])));
	}


	// From: Req5Batch40Wrapper_A
	float_Array_0[1][0] = double_Array_0[1];


	// From: Req6Batch40Wrapper_A
	signed_short_int_Array_0[0] = last_1_signed_short_int_Array_0_0_;


	// From: Req7Batch40Wrapper_A
	signed_short_int_Array_0[1] = signed_char_Array_0[2];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427383000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854776000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= -63);
	assume_abort_if_not(signed_char_Array_0[2] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[1] != 0);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -2147483647);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483646);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 254);
}



void updateLastVariables(void) {
	last_1_double_Array_0_0_ = double_Array_0[0];
	last_1_signed_short_int_Array_0_0_ = signed_short_int_Array_0[0];
}

int property(void) {
	return ((((((BOOL_unsigned_char_Array_0[1] ? ((BOOL_unsigned_char_Array_0[0] && (float_Array_0[1][1] <= (- 63.9f))) ? ((float_Array_0[1][1] >= float_Array_0[0][1]) ? (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[4] == ((signed long int) signed_long_int_Array_0[3])) : 1) : 1) : 1) : 1) && ((((signed_long_int_Array_0[4] / signed_long_int_Array_0[1]) / signed_long_int_Array_0[0]) >= (signed_long_int_Array_0[2] | signed_long_int_Array_0[3])) ? (unsigned_char_Array_0[1] == ((unsigned char) (unsigned_char_Array_0[2] - unsigned_char_Array_0[0]))) : (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])))) && ((last_1_double_Array_0_0_ != (min (float_Array_0[1][1] , float_Array_0[0][0]))) ? (double_Array_0[0] == ((double) (double_Array_0[1] + (127.4 - 8.25)))) : 1)) && (BOOL_unsigned_char_Array_0[0] ? (signed_char_Array_0[0] == ((signed char) (max (signed_char_Array_0[1] , (-2 + signed_char_Array_0[2]))))) : 1)) && (float_Array_0[1][0] == ((float) double_Array_0[1]))) && (signed_short_int_Array_0[0] == ((signed short int) last_1_signed_short_int_Array_0_0_))) && (signed_short_int_Array_0[1] == ((signed short int) signed_char_Array_0[2]))
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
