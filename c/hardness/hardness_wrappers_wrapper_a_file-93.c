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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[7] = {
	9.6, 31.75, 9.186, 128.5, 2.6, -0.9, -0.375
};
float float_Array_0[2] = {
	499.2, 255.3
};
signed long int signed_long_int_Array_0[1] = {
	128
};
signed short int signed_short_int_Array_0[2] = {
	-32, 0
};
unsigned short int unsigned_short_int_Array_0[2] = {
	50, 2
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch93Wrapper_A
	if (((- double_Array_0[6]) / double_Array_0[5]) != (double_Array_0[4] / double_Array_0[3])) {
		if (double_Array_0[6] != ((max (double_Array_0[2] , double_Array_0[1])) - double_Array_0[0])) {
			float_Array_0[1] = float_Array_0[0];
		} else {
			float_Array_0[1] = 64.51f;
		}
	} else {
		float_Array_0[1] = float_Array_0[0];
	}


	// From: Req2Batch93Wrapper_A
	signed long int stepLocal_0 = signed_short_int_Array_0[1] * signed_short_int_Array_0[0];
	if (stepLocal_0 < (100 + 128)) {
		if (BOOL_unsigned_char_Array_0[0]) {
			unsigned_short_int_Array_0[0] = unsigned_short_int_Array_0[1];
		} else {
			unsigned_short_int_Array_0[0] = 4;
		}
	} else {
		unsigned_short_int_Array_0[0] = unsigned_short_int_Array_0[1];
	}


	// From: Req3Batch93Wrapper_A
	unsigned short int stepLocal_1 = unsigned_short_int_Array_0[1];
	if (((unsigned_short_int_Array_0[0] + 100u) << signed_short_int_Array_0[1]) <= stepLocal_1) {
		if (double_Array_0[4] <= ((- double_Array_0[6]) + double_Array_0[1])) {
			signed_long_int_Array_0[0] = signed_short_int_Array_0[1];
		} else {
			signed_long_int_Array_0[0] = signed_short_int_Array_0[0];
		}
	} else {
		signed_long_int_Array_0[0] = signed_short_int_Array_0[0];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -922337.2036854776000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854776000e+12F && double_Array_0[3] >= 1.0e-20F ));
	assume_abort_if_not(double_Array_0[3] != 0.0F);
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= -922337.2036854776000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 9223372.036854776000e+12F && double_Array_0[4] >= 1.0e-20F ));
	double_Array_0[5] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[5] >= -922337.2036854776000e+13F && double_Array_0[5] <= -1.0e-20F) || (double_Array_0[5] <= 9223372.036854776000e+12F && double_Array_0[5] >= 1.0e-20F ));
	assume_abort_if_not(double_Array_0[5] != 0.0F);
	double_Array_0[6] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[6] >= -922337.2036854776000e+13F && double_Array_0[6] <= -1.0e-20F) || (double_Array_0[6] <= 9223372.036854776000e+12F && double_Array_0[6] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -922337.2036854766000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 9223372.036854766000e+12F && float_Array_0[0] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((- double_Array_0[6]) / double_Array_0[5]) != (double_Array_0[4] / double_Array_0[3])) ? ((double_Array_0[6] != ((max (double_Array_0[2] , double_Array_0[1])) - double_Array_0[0])) ? (float_Array_0[1] == ((float) float_Array_0[0])) : (float_Array_0[1] == ((float) 64.51f))) : (float_Array_0[1] == ((float) float_Array_0[0]))) && (((signed_short_int_Array_0[1] * signed_short_int_Array_0[0]) < (100 + 128)) ? (BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_short_int_Array_0[1])) : (unsigned_short_int_Array_0[0] == ((unsigned short int) 4))) : (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_short_int_Array_0[1])))) && ((((unsigned_short_int_Array_0[0] + 100u) << signed_short_int_Array_0[1]) <= unsigned_short_int_Array_0[1]) ? ((double_Array_0[4] <= ((- double_Array_0[6]) + double_Array_0[1])) ? (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[1])) : (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[0]))) : (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[0])))
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
