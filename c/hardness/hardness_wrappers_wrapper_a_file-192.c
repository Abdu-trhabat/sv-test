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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch192Wrapper_A.c", 13, "reach_error"); }
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
	7.25, 7.375, 8.2, 500.35, 256.6
};
signed char signed_char_Array_0[1] = {
	-4
};
signed long int signed_long_int_Array_0[3] = {
	-5, 16, 32
};
unsigned char unsigned_char_Array_0[2] = {
	16, 32
};
unsigned short int unsigned_short_int_Array_0[2] = {
	8, 5
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch192Wrapper_A
	signed long int stepLocal_2 = (200 - unsigned_char_Array_0[0]) - unsigned_char_Array_0[1];
	signed long int stepLocal_1 = signed_long_int_Array_0[1];
	if (stepLocal_1 < unsigned_short_int_Array_0[1]) {
		if (stepLocal_2 >= -100) {
			unsigned_short_int_Array_0[0] = unsigned_char_Array_0[0];
		} else {
			unsigned_short_int_Array_0[0] = unsigned_char_Array_0[1];
		}
	}


	// From: Req3Batch192Wrapper_A
	signed long int stepLocal_3 = 1 - unsigned_char_Array_0[1];
	if ((abs (double_Array_0[0])) >= double_Array_0[3]) {
		if ((-4 + (unsigned_char_Array_0[0] * unsigned_short_int_Array_0[0])) < stepLocal_3) {
			signed_char_Array_0[0] = unsigned_char_Array_0[0];
		} else {
			signed_char_Array_0[0] = -8;
		}
	} else {
		signed_char_Array_0[0] = unsigned_char_Array_0[0];
	}


	// From: Req1Batch192Wrapper_A
	signed long int stepLocal_0 = (min (signed_long_int_Array_0[2] , -5)) + (max (signed_long_int_Array_0[1] , signed_long_int_Array_0[0]));
	if (BOOL_unsigned_char_Array_0[0]) {
		if ((min (unsigned_short_int_Array_0[0] , 0)) <= stepLocal_0) {
			double_Array_0[4] = (abs (double_Array_0[3]));
		} else {
			double_Array_0[4] = ((double_Array_0[1] + double_Array_0[0]) - double_Array_0[2]);
		}
	} else {
		double_Array_0[4] = double_Array_0[1];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= 0.0F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 4611686.018427383000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 0.0F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -922337.2036854766000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 9223372.036854766000e+12F && double_Array_0[3] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 64);
	unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1] <= 127);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((BOOL_unsigned_char_Array_0[0] ? (((min (unsigned_short_int_Array_0[0] , 0)) <= ((min (signed_long_int_Array_0[2] , -5)) + (max (signed_long_int_Array_0[1] , signed_long_int_Array_0[0])))) ? (double_Array_0[4] == ((double) (abs (double_Array_0[3])))) : (double_Array_0[4] == ((double) ((double_Array_0[1] + double_Array_0[0]) - double_Array_0[2])))) : (double_Array_0[4] == ((double) double_Array_0[1]))) && ((signed_long_int_Array_0[1] < unsigned_short_int_Array_0[1]) ? ((((200 - unsigned_char_Array_0[0]) - unsigned_char_Array_0[1]) >= -100) ? (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[0])) : (unsigned_short_int_Array_0[0] == ((unsigned short int) unsigned_char_Array_0[1]))) : 1)) && (((abs (double_Array_0[0])) >= double_Array_0[3]) ? (((-4 + (unsigned_char_Array_0[0] * unsigned_short_int_Array_0[0])) < (1 - unsigned_char_Array_0[1])) ? (signed_char_Array_0[0] == ((signed char) unsigned_char_Array_0[0])) : (signed_char_Array_0[0] == ((signed char) -8))) : (signed_char_Array_0[0] == ((signed char) unsigned_char_Array_0[0])))
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
