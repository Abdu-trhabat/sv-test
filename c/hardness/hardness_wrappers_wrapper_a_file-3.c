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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[5] = {
	1, 0, 0, 1, 0
};
double double_Array_0[5] = {
	127.5, 15.75, 8.5, -0.5, 5.25
};
signed long int signed_long_int_Array_0[5] = {
	-5, 500, -100, -5, -64
};

// Calibration values

// Last'ed variables
unsigned char last_1_BOOL_unsigned_char_Array_0_4_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch3Wrapper_A
	unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[3];
	if (! BOOL_unsigned_char_Array_0[3]) {
		if (stepLocal_0 && last_1_BOOL_unsigned_char_Array_0_4_) {
			BOOL_unsigned_char_Array_0[4] = (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]);
		}
	}


	// From: Req3Batch3Wrapper_A
	signed long int stepLocal_2 = signed_long_int_Array_0[1];
	signed long int stepLocal_1 = signed_long_int_Array_0[0];
	if (stepLocal_2 <= signed_long_int_Array_0[3]) {
		if (signed_long_int_Array_0[2] >= stepLocal_1) {
			BOOL_unsigned_char_Array_0[0] = (! BOOL_unsigned_char_Array_0[1]);
		} else {
			BOOL_unsigned_char_Array_0[0] = (BOOL_unsigned_char_Array_0[4] || (! BOOL_unsigned_char_Array_0[1]));
		}
	}


	// From: Req4Batch3Wrapper_A
	if (BOOL_unsigned_char_Array_0[2]) {
		double_Array_0[0] = (min (((max (double_Array_0[1] , double_Array_0[3])) + double_Array_0[4]) , (abs (min (3.5 , double_Array_0[2])))));
	} else {
		double_Array_0[0] = double_Array_0[4];
	}


	// From: Req2Batch3Wrapper_A
	if (! BOOL_unsigned_char_Array_0[0]) {
		signed_long_int_Array_0[4] = (signed_long_int_Array_0[3] + signed_long_int_Array_0[1]);
	} else {
		signed_long_int_Array_0[4] = (((abs (signed_long_int_Array_0[0])) + signed_long_int_Array_0[2]) + signed_long_int_Array_0[3]);
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[3] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[3] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= -461168.6018427383000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 4611686.018427383000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -461168.6018427383000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427383000e+12F && double_Array_0[3] >= 1.0e-20F ));
	double_Array_0[4] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[4] >= -461168.6018427383000e+13F && double_Array_0[4] <= -1.0e-20F) || (double_Array_0[4] <= 4611686.018427383000e+12F && double_Array_0[4] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -536870912);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 536870912);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 1073741823);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -536870911);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 536870911);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -1073741823);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 1073741823);
}



void updateLastVariables(void) {
	last_1_BOOL_unsigned_char_Array_0_4_ = BOOL_unsigned_char_Array_0[4];
}

int property(void) {
	return ((((! BOOL_unsigned_char_Array_0[3]) ? ((BOOL_unsigned_char_Array_0[3] && last_1_BOOL_unsigned_char_Array_0_4_) ? (BOOL_unsigned_char_Array_0[4] == ((unsigned char) (BOOL_unsigned_char_Array_0[2] || BOOL_unsigned_char_Array_0[1]))) : 1) : 1) && ((! BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[4] == ((signed long int) (signed_long_int_Array_0[3] + signed_long_int_Array_0[1]))) : (signed_long_int_Array_0[4] == ((signed long int) (((abs (signed_long_int_Array_0[0])) + signed_long_int_Array_0[2]) + signed_long_int_Array_0[3]))))) && ((signed_long_int_Array_0[1] <= signed_long_int_Array_0[3]) ? ((signed_long_int_Array_0[2] >= signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (! BOOL_unsigned_char_Array_0[1]))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (BOOL_unsigned_char_Array_0[4] || (! BOOL_unsigned_char_Array_0[1]))))) : 1)) && (BOOL_unsigned_char_Array_0[2] ? (double_Array_0[0] == ((double) (min (((max (double_Array_0[1] , double_Array_0[3])) + double_Array_0[4]) , (abs (min (3.5 , double_Array_0[2]))))))) : (double_Array_0[0] == ((double) double_Array_0[4])))
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
