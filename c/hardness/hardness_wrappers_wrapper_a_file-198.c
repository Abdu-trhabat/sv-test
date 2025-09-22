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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch198Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[2][2] = {
	{0.9, 16.75}, {15.5, 0.8}
};
float float_Array_0[1] = {
	16.8
};
signed char signed_char_Array_0[2][2][2] = {
	{{-1, 5}, {100, 16}}, {{-64, -8}, {-32, 2}}
};
signed long int signed_long_int_Array_0[2] = {
	0, 32
};
signed short int signed_short_int_Array_0[1] = {
	256
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch198Wrapper_A
	signed long int stepLocal_0 = signed_long_int_Array_0[1];
	if (stepLocal_0 >= signed_long_int_Array_0[0]) {
		double_Array_0[1][1] = (((min (double_Array_0[0][1] , double_Array_0[1][0])) + 10.55) + double_Array_0[0][0]);
	}


	// From: Req2Batch198Wrapper_A
	if (double_Array_0[0][0] > 64.2) {
		float_Array_0[0] = double_Array_0[0][1];
	}


	// From: Req3Batch198Wrapper_A
	unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[0];
	if (BOOL_unsigned_char_Array_0[1] || stepLocal_1) {
		signed_char_Array_0[1][0][0] = (min (signed_char_Array_0[1][1][0] , (signed_char_Array_0[0][0][0] - signed_char_Array_0[0][1][0])));
	} else {
		if (BOOL_unsigned_char_Array_0[1]) {
			signed_char_Array_0[1][0][0] = (signed_char_Array_0[0][1][1] + (max (signed_char_Array_0[1][1][1] , (max (signed_char_Array_0[0][0][1] , signed_char_Array_0[1][0][1])))));
		} else {
			if (double_Array_0[0][0] >= double_Array_0[1][0]) {
				signed_char_Array_0[1][0][0] = signed_char_Array_0[1][0][1];
			} else {
				signed_char_Array_0[1][0][0] = signed_char_Array_0[0][0][1];
			}
		}
	}


	// From: Req4Batch198Wrapper_A
	if (double_Array_0[1][1] > (abs (max (double_Array_0[0][1] , double_Array_0[1][0])))) {
		signed_short_int_Array_0[0] = (25 - (max (4 , signed_char_Array_0[0][1][0])));
	} else {
		signed_short_int_Array_0[0] = 32;
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= -461168.6018427383000e+13F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 4611686.018427383000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= -230584.3009213691400e+13F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 2305843.009213691400e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= -230584.3009213691400e+13F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 2305843.009213691400e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	signed_char_Array_0[0][0][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0][0] >= -1);
	assume_abort_if_not(signed_char_Array_0[0][0][0] <= 126);
	signed_char_Array_0[0][1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1][0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0][1][0] <= 126);
	signed_char_Array_0[1][1][0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1][0] >= -127);
	assume_abort_if_not(signed_char_Array_0[1][1][0] <= 126);
	signed_char_Array_0[0][0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][0][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[0][0][1] <= 63);
	signed_char_Array_0[1][0][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][0][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1][0][1] <= 63);
	signed_char_Array_0[0][1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0][1][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[0][1][1] <= 63);
	signed_char_Array_0[1][1][1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1][1][1] >= -63);
	assume_abort_if_not(signed_char_Array_0[1][1][1] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((signed_long_int_Array_0[1] >= signed_long_int_Array_0[0]) ? (double_Array_0[1][1] == ((double) (((min (double_Array_0[0][1] , double_Array_0[1][0])) + 10.55) + double_Array_0[0][0]))) : 1) && ((double_Array_0[0][0] > 64.2) ? (float_Array_0[0] == ((float) double_Array_0[0][1])) : 1)) && ((BOOL_unsigned_char_Array_0[1] || BOOL_unsigned_char_Array_0[0]) ? (signed_char_Array_0[1][0][0] == ((signed char) (min (signed_char_Array_0[1][1][0] , (signed_char_Array_0[0][0][0] - signed_char_Array_0[0][1][0]))))) : (BOOL_unsigned_char_Array_0[1] ? (signed_char_Array_0[1][0][0] == ((signed char) (signed_char_Array_0[0][1][1] + (max (signed_char_Array_0[1][1][1] , (max (signed_char_Array_0[0][0][1] , signed_char_Array_0[1][0][1]))))))) : ((double_Array_0[0][0] >= double_Array_0[1][0]) ? (signed_char_Array_0[1][0][0] == ((signed char) signed_char_Array_0[1][0][1])) : (signed_char_Array_0[1][0][0] == ((signed char) signed_char_Array_0[0][0][1])))))) && ((double_Array_0[1][1] > (abs (max (double_Array_0[0][1] , double_Array_0[1][0])))) ? (signed_short_int_Array_0[0] == ((signed short int) (25 - (max (4 , signed_char_Array_0[0][1][0]))))) : (signed_short_int_Array_0[0] == ((signed short int) 32)))
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
