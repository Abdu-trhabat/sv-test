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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch193Wrapper_A.c", 13, "reach_error"); }
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
	0.4, 99999999999.5, 128.8, 31.5, 50.875
};
signed long int signed_long_int_Array_0[1] = {
	4
};
signed short int signed_short_int_Array_0[3] = {
	-25, 128, 4
};
unsigned char unsigned_char_Array_0[3] = {
	16, 5, 50
};
unsigned long int unsigned_long_int_Array_0[1] = {
	100000
};

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch193Wrapper_A
	unsigned char stepLocal_2 = unsigned_char_Array_0[1];
	unsigned char stepLocal_1 = unsigned_char_Array_0[2];
	unsigned char stepLocal_0 = unsigned_char_Array_0[1];
	if (unsigned_char_Array_0[2] == stepLocal_0) {
		if (stepLocal_1 > (max ((- unsigned_char_Array_0[1]) , unsigned_char_Array_0[0]))) {
			if ((unsigned_char_Array_0[2] * (unsigned_char_Array_0[0] * -5)) > stepLocal_2) {
				signed_short_int_Array_0[2] = unsigned_char_Array_0[1];
			}
		} else {
			signed_short_int_Array_0[2] = unsigned_char_Array_0[2];
		}
	} else {
		signed_short_int_Array_0[2] = unsigned_char_Array_0[0];
	}


	// From: Req4Batch193Wrapper_A
	signed_short_int_Array_0[0] = 4;


	// From: Req5Batch193Wrapper_A
	signed_short_int_Array_0[1] = signed_short_int_Array_0[0];


	// From: Req2Batch193Wrapper_A
	if (BOOL_unsigned_char_Array_0[0]) {
		signed_long_int_Array_0[0] = (signed_short_int_Array_0[1] + (max ((min (signed_short_int_Array_0[2] , signed_short_int_Array_0[0])) , last_1_signed_long_int_Array_0_0_)));
	}


	// From: Req3Batch193Wrapper_A
	signed short int stepLocal_4 = signed_short_int_Array_0[0];
	unsigned long int stepLocal_3 = 16u;
	if (stepLocal_4 > 64) {
		double_Array_0[3] = (double_Array_0[2] - double_Array_0[1]);
	} else {
		if (stepLocal_3 == (signed_short_int_Array_0[0] / unsigned_long_int_Array_0[0])) {
			double_Array_0[3] = (double_Array_0[4] + double_Array_0[0]);
		} else {
			double_Array_0[3] = double_Array_0[4];
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -461168.6018427383000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= -461168.6018427383000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427383000e+12F && double_Array_0[4] >= 1.0e-20F ));
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 255);
	unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[2] <= 255);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	assume_abort_if_not(unsigned_long_int_Array_0[0] != 0);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}

int property(void) {
	return (((((unsigned_char_Array_0[2] == unsigned_char_Array_0[1]) ? ((unsigned_char_Array_0[2] > (max ((- unsigned_char_Array_0[1]) , unsigned_char_Array_0[0]))) ? (((unsigned_char_Array_0[2] * (unsigned_char_Array_0[0] * -5)) > unsigned_char_Array_0[1]) ? (signed_short_int_Array_0[2] == ((signed short int) unsigned_char_Array_0[1])) : 1) : (signed_short_int_Array_0[2] == ((signed short int) unsigned_char_Array_0[2]))) : (signed_short_int_Array_0[2] == ((signed short int) unsigned_char_Array_0[0]))) && (BOOL_unsigned_char_Array_0[0] ? (signed_long_int_Array_0[0] == ((signed long int) (signed_short_int_Array_0[1] + (max ((min (signed_short_int_Array_0[2] , signed_short_int_Array_0[0])) , last_1_signed_long_int_Array_0_0_))))) : 1)) && ((signed_short_int_Array_0[0] > 64) ? (double_Array_0[3] == ((double) (double_Array_0[2] - double_Array_0[1]))) : ((16u == (signed_short_int_Array_0[0] / unsigned_long_int_Array_0[0])) ? (double_Array_0[3] == ((double) (double_Array_0[4] + double_Array_0[0]))) : (double_Array_0[3] == ((double) double_Array_0[4]))))) && (signed_short_int_Array_0[0] == ((signed short int) 4))) && (signed_short_int_Array_0[1] == ((signed short int) signed_short_int_Array_0[0]))
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
