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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Wrapper_A.c", 13, "reach_error"); }
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
	5.2, 9.7
};
float float_Array_0[2] = {
	99.25, 0.8
};
signed char signed_char_Array_0[5] = {
	10, 4, 4, 50, 32
};
signed long int signed_long_int_Array_0[1] = {
	10
};
signed short int signed_short_int_Array_0[1] = {
	64
};
unsigned char unsigned_char_Array_0[3] = {
	128, 8, 2
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch141Wrapper_A
	if (float_Array_0[1] < float_Array_0[0]) {
		signed_char_Array_0[4] = (max ((-32 + signed_char_Array_0[3]) , (max (signed_char_Array_0[2] , signed_char_Array_0[1]))));
	} else {
		signed_char_Array_0[4] = ((1 - signed_char_Array_0[0]) + signed_char_Array_0[3]);
	}


	// From: Req2Batch141Wrapper_A
	if (BOOL_unsigned_char_Array_0[0] || ((signed_char_Array_0[0] / unsigned_char_Array_0[1]) <= (signed_char_Array_0[1] * signed_char_Array_0[3]))) {
		signed_short_int_Array_0[0] = signed_char_Array_0[0];
	}


	// From: Req3Batch141Wrapper_A
	unsigned_char_Array_0[2] = (unsigned_char_Array_0[0] - signed_char_Array_0[0]);


	// From: Req4Batch141Wrapper_A
	signed long int stepLocal_1 = -100;
	signed long int stepLocal_0 = 4;
	if (stepLocal_1 >= signed_char_Array_0[3]) {
		if (float_Array_0[1] > 63.5f) {
			if (! ((64 >> signed_long_int_Array_0[0]) >= signed_char_Array_0[2])) {
				if (stepLocal_0 >= signed_short_int_Array_0[0]) {
					double_Array_0[0] = (max (double_Array_0[1] , 10.2));
				}
			} else {
				double_Array_0[0] = double_Array_0[1];
			}
		} else {
			double_Array_0[0] = double_Array_0[1];
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854766000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854776000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854776000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854776000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854776000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= 0);
	assume_abort_if_not(signed_char_Array_0[0] <= 63);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -127);
	assume_abort_if_not(signed_char_Array_0[1] <= 126);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= -127);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= -63);
	assume_abort_if_not(signed_char_Array_0[3] <= 63);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 1);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 30);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	assume_abort_if_not(unsigned_char_Array_0[1] != 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((float_Array_0[1] < float_Array_0[0]) ? (signed_char_Array_0[4] == ((signed char) (max ((-32 + signed_char_Array_0[3]) , (max (signed_char_Array_0[2] , signed_char_Array_0[1])))))) : (signed_char_Array_0[4] == ((signed char) ((1 - signed_char_Array_0[0]) + signed_char_Array_0[3])))) && ((BOOL_unsigned_char_Array_0[0] || ((signed_char_Array_0[0] / unsigned_char_Array_0[1]) <= (signed_char_Array_0[1] * signed_char_Array_0[3]))) ? (signed_short_int_Array_0[0] == ((signed short int) signed_char_Array_0[0])) : 1)) && (unsigned_char_Array_0[2] == ((unsigned char) (unsigned_char_Array_0[0] - signed_char_Array_0[0])))) && ((-100 >= signed_char_Array_0[3]) ? ((float_Array_0[1] > 63.5f) ? ((! ((64 >> signed_long_int_Array_0[0]) >= signed_char_Array_0[2])) ? ((4 >= signed_short_int_Array_0[0]) ? (double_Array_0[0] == ((double) (max (double_Array_0[1] , 10.2)))) : 1) : (double_Array_0[0] == ((double) double_Array_0[1]))) : (double_Array_0[0] == ((double) double_Array_0[1]))) : 1)
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
