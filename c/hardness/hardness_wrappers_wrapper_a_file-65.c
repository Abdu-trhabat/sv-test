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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch65Wrapper_A.c", 13, "reach_error"); }
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
	1
};
double double_Array_0[5] = {
	25.25, 100.5, 63.6, 0.0, 0.8
};
float float_Array_0[3] = {
	8.2, 256.75, 1000000000.1
};
signed char signed_char_Array_0[2] = {
	-8, 8
};
signed long int signed_long_int_Array_0[2][3] = {
	{10, 16, -25}, {-500, 8, -32}
};
unsigned short int unsigned_short_int_Array_0[3] = {
	0, 2, 50
};

// Calibration values

// Last'ed variables
double last_1_double_Array_0_1_ = 100.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch65Wrapper_A
	if (0.625f > last_1_double_Array_0_1_) {
		if (BOOL_unsigned_char_Array_0[0]) {
			float_Array_0[2] = (abs (float_Array_0[0]));
		}
	} else {
		float_Array_0[2] = (abs (float_Array_0[0]));
	}


	// From: Req3Batch65Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		if (signed_long_int_Array_0[0][2] >= ((signed_long_int_Array_0[0][0] - signed_long_int_Array_0[0][1]) * 64)) {
			double_Array_0[1] = ((min (double_Array_0[0] , 50.5)) - double_Array_0[2]);
		}
	} else {
		if (float_Array_0[1] <= float_Array_0[2]) {
			double_Array_0[1] = (double_Array_0[2] - (double_Array_0[3] - double_Array_0[4]));
		}
	}


	// From: Req2Batch65Wrapper_A
	if (float_Array_0[0] > float_Array_0[2]) {
		signed_long_int_Array_0[1][2] = ((max (signed_long_int_Array_0[0][2] , -64)) + ((signed_long_int_Array_0[1][1] + -2) + signed_long_int_Array_0[1][0]));
	}


	// From: Req4Batch65Wrapper_A
	signed_char_Array_0[0] = signed_char_Array_0[1];


	// From: Req5Batch65Wrapper_A
	unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[2];


	// From: Req6Batch65Wrapper_A
	unsigned_short_int_Array_0[0] = unsigned_short_int_Array_0[2];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854766000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= 4611686.018427383000e+12F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= 0.0F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427383000e+12F && double_Array_0[4] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= -536870911);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 536870911);
	signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
	signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][1] >= -268435455);
	assume_abort_if_not(signed_long_int_Array_0[1][1] <= 268435456);
	signed_long_int_Array_0[0][2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][2] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[0][2] <= 1073741823);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65534);
}



void updateLastVariables(void) {
	last_1_double_Array_0_1_ = double_Array_0[1];
}

int property(void) {
	return ((((((0.625f > last_1_double_Array_0_1_) ? (BOOL_unsigned_char_Array_0[0] ? (float_Array_0[2] == ((float) (abs (float_Array_0[0])))) : 1) : (float_Array_0[2] == ((float) (abs (float_Array_0[0]))))) && ((float_Array_0[0] > float_Array_0[2]) ? (signed_long_int_Array_0[1][2] == ((signed long int) ((max (signed_long_int_Array_0[0][2] , -64)) + ((signed_long_int_Array_0[1][1] + -2) + signed_long_int_Array_0[1][0])))) : 1)) && (BOOL_unsigned_char_Array_0[0] ? ((signed_long_int_Array_0[0][2] >= ((signed_long_int_Array_0[0][0] - signed_long_int_Array_0[0][1]) * 64)) ? (double_Array_0[1] == ((double) ((min (double_Array_0[0] , 50.5)) - double_Array_0[2]))) : 1) : ((float_Array_0[1] <= float_Array_0[2]) ? (double_Array_0[1] == ((double) (double_Array_0[2] - (double_Array_0[3] - double_Array_0[4])))) : 1))) && (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[1]))) && (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[2]))) && (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_short_int_Array_0[2]))
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
