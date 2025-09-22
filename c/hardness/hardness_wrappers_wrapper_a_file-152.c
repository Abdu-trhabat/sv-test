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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Wrapper_A.c", 13, "reach_error"); }
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
	{9.7, 127.8}, {3.5, 63.25}
};
signed long int signed_long_int_Array_0[5] = {
	200, 64, 100000, -50, -5
};
signed short int signed_short_int_Array_0[2] = {
	128, 16
};
unsigned char unsigned_char_Array_0[2] = {
	128, 10
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch152Wrapper_A
	signed_long_int_Array_0[3] = (32 - signed_long_int_Array_0[2]);


	// From: Req3Batch152Wrapper_A
	signed long int stepLocal_2 = signed_long_int_Array_0[3];
	signed long int stepLocal_1 = (unsigned_char_Array_0[0] - unsigned_char_Array_0[1]) * signed_long_int_Array_0[3];
	if (signed_long_int_Array_0[4] >= stepLocal_2) {
		double_Array_0[0][1] = (double_Array_0[1][0] - double_Array_0[0][0]);
	} else {
		if (stepLocal_1 <= (signed_long_int_Array_0[2] / signed_long_int_Array_0[0])) {
			double_Array_0[0][1] = double_Array_0[1][0];
		} else {
			if (BOOL_unsigned_char_Array_0[0]) {
				double_Array_0[0][1] = (5.2 + double_Array_0[1][1]);
			}
		}
	}


	// From: Req4Batch152Wrapper_A
	if (signed_short_int_Array_0[0] >= (unsigned_char_Array_0[1] << signed_long_int_Array_0[2])) {
		signed_long_int_Array_0[1] = (abs (unsigned_char_Array_0[1]));
	} else {
		if (BOOL_unsigned_char_Array_0[0]) {
			signed_long_int_Array_0[1] = -4;
		}
	}


	// From: Req1Batch152Wrapper_A
	signed long int stepLocal_0 = signed_long_int_Array_0[1] + 5;
	if (10 > stepLocal_0) {
		if (127.625f != (- double_Array_0[0][1])) {
			signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
		} else {
			signed_short_int_Array_0[1] = -10;
		}
	} else {
		signed_short_int_Array_0[1] = signed_short_int_Array_0[0];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 9223372.036854766000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1] >= -461168.6018427383000e+13F && double_Array_0[1][1] <= -1.0e-20F) || (double_Array_0[1][1] <= 4611686.018427383000e+12F && double_Array_0[1][1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483646);
	signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 127);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((10 > (signed_long_int_Array_0[1] + 5)) ? ((127.625f != (- double_Array_0[0][1])) ? (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0])) : (signed_short_int_Array_0[1] == ((signed short int) -10))) : (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0]))) && (signed_long_int_Array_0[3] == ((signed long int) (32 - signed_long_int_Array_0[2])))) && ((signed_long_int_Array_0[4] >= signed_long_int_Array_0[3]) ? (double_Array_0[0][1] == ((double) (double_Array_0[1][0] - double_Array_0[0][0]))) : ((((unsigned_char_Array_0[0] - unsigned_char_Array_0[1]) * signed_long_int_Array_0[3]) <= (signed_long_int_Array_0[2] / signed_long_int_Array_0[0])) ? (double_Array_0[0][1] == ((double) double_Array_0[1][0])) : (BOOL_unsigned_char_Array_0[0] ? (double_Array_0[0][1] == ((double) (5.2 + double_Array_0[1][1]))) : 1)))) && ((signed_short_int_Array_0[0] >= (unsigned_char_Array_0[1] << signed_long_int_Array_0[2])) ? (signed_long_int_Array_0[1] == ((signed long int) (abs (unsigned_char_Array_0[1])))) : (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[1] == ((signed long int) -4)) : 1))
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
