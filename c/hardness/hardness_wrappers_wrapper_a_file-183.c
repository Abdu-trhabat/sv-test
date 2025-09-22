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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[3] = {
	0, 1, 1
};
double double_Array_0[3] = {
	99.25, 255.75, 7.5
};
signed char signed_char_Array_0[1] = {
	50
};
signed long int signed_long_int_Array_0[1] = {
	-1
};
signed short int signed_short_int_Array_0[1] = {
	-4
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{16, 55604}, {128, 128}
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch183Wrapper_A
	if ((double_Array_0[2] / double_Array_0[1]) >= double_Array_0[0]) {
		unsigned_short_int_Array_0[1][1] = ((unsigned_short_int_Array_0[0][1] - unsigned_short_int_Array_0[1][0]) - unsigned_short_int_Array_0[0][0]);
	}


	// From: Req3Batch183Wrapper_A
	if (unsigned_short_int_Array_0[1][1] > unsigned_short_int_Array_0[0][0]) {
		if (double_Array_0[0] > (double_Array_0[2] + double_Array_0[1])) {
			BOOL_unsigned_char_Array_0[1] = BOOL_unsigned_char_Array_0[2];
		} else {
			BOOL_unsigned_char_Array_0[1] = 0;
		}
	} else {
		BOOL_unsigned_char_Array_0[1] = (BOOL_unsigned_char_Array_0[2] && (! BOOL_unsigned_char_Array_0[0]));
	}


	// From: Req4Batch183Wrapper_A
	unsigned short int stepLocal_2 = unsigned_short_int_Array_0[0][1];
	unsigned short int stepLocal_1 = unsigned_short_int_Array_0[0][0];
	if (stepLocal_1 <= unsigned_short_int_Array_0[1][1]) {
		if ((abs (signed_char_Array_0[0])) < stepLocal_2) {
			signed_long_int_Array_0[0] = signed_char_Array_0[0];
		} else {
			signed_long_int_Array_0[0] = unsigned_short_int_Array_0[0][0];
		}
	} else {
		signed_long_int_Array_0[0] = unsigned_short_int_Array_0[0][1];
	}


	// From: Req2Batch183Wrapper_A
	signed long int stepLocal_0 = max (signed_long_int_Array_0[0] , unsigned_short_int_Array_0[1][0]);
	if (unsigned_short_int_Array_0[0][1] >= stepLocal_0) {
		if (! BOOL_unsigned_char_Array_0[1]) {
			signed_short_int_Array_0[0] = unsigned_short_int_Array_0[1][0];
		} else {
			signed_short_int_Array_0[0] = -4;
		}
	} else {
		signed_short_int_Array_0[0] = unsigned_short_int_Array_0[0][1];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 1);
	double_Array_0[0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0] >= -922337.2036854776000e+13F && double_Array_0[0] <= -1.0e-20F) || (double_Array_0[0] <= 9223372.036854776000e+12F && double_Array_0[0] >= 1.0e-20F ));
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	assume_abort_if_not(double_Array_0[1] != 0.0F);
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854776000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854776000e+12F && double_Array_0[2] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0] <= 127);
	unsigned_short_int_Array_0[0][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][0] <= 32767);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 16383);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 49150);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((double_Array_0[2] / double_Array_0[1]) >= double_Array_0[0]) ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) ((unsigned_short_int_Array_0[0][1] - unsigned_short_int_Array_0[1][0]) - unsigned_short_int_Array_0[0][0]))) : 1) && ((unsigned_short_int_Array_0[0][1] >= (max (signed_long_int_Array_0[0] , unsigned_short_int_Array_0[1][0]))) ? ((! BOOL_unsigned_char_Array_0[1]) ? (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[1][0])) : (signed_short_int_Array_0[0] == ((signed short int) -4))) : (signed_short_int_Array_0[0] == ((signed short int) unsigned_short_int_Array_0[0][1])))) && ((unsigned_short_int_Array_0[1][1] > unsigned_short_int_Array_0[0][0]) ? ((double_Array_0[0] > (double_Array_0[2] + double_Array_0[1])) ? (BOOL_unsigned_char_Array_0[1] == ((unsigned char) BOOL_unsigned_char_Array_0[2])) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) 0))) : (BOOL_unsigned_char_Array_0[1] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] && (! BOOL_unsigned_char_Array_0[0])))))) && ((unsigned_short_int_Array_0[0][0] <= unsigned_short_int_Array_0[1][1]) ? (((abs (signed_char_Array_0[0])) < unsigned_short_int_Array_0[0][1]) ? (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[0])) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[0][0]))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[0][1])))
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
