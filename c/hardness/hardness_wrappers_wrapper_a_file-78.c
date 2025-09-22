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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch78Wrapper_A.c", 13, "reach_error"); }
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
	1, 0
};
double double_Array_0[3] = {
	128.5, 0.0, 127.875
};
float float_Array_0[3] = {
	100.55, 4.75, 128.75
};
signed long int signed_long_int_Array_0[2][2] = {
	{1000000, 128}, {10, -200}
};
unsigned char unsigned_char_Array_0[2] = {
	16, 1
};
unsigned long int unsigned_long_int_Array_0[2] = {
	0, 4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch78Wrapper_A
	unsigned char stepLocal_1 = BOOL_unsigned_char_Array_0[0];
	unsigned char stepLocal_0 = BOOL_unsigned_char_Array_0[1];
	if (BOOL_unsigned_char_Array_0[1] && stepLocal_1) {
		if (stepLocal_0 && (unsigned_long_int_Array_0[1] > unsigned_long_int_Array_0[0])) {
			signed_long_int_Array_0[1][1] = (signed_long_int_Array_0[0][1] - signed_long_int_Array_0[1][0]);
		} else {
			signed_long_int_Array_0[1][1] = ((signed_long_int_Array_0[0][0] + 5) - signed_long_int_Array_0[1][0]);
		}
	}


	// From: Req2Batch78Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		float_Array_0[0] = (float_Array_0[1] - float_Array_0[2]);
	} else {
		if (unsigned_long_int_Array_0[1] < unsigned_long_int_Array_0[0]) {
			float_Array_0[0] = (max (float_Array_0[2] , float_Array_0[1]));
		} else {
			float_Array_0[0] = float_Array_0[1];
		}
	}


	// From: Req3Batch78Wrapper_A
	unsigned long int stepLocal_2 = abs (8u);
	if (unsigned_long_int_Array_0[1] <= stepLocal_2) {
		double_Array_0[0] = (float_Array_0[1] - 99.5);
	} else {
		double_Array_0[0] = ((double_Array_0[1] - double_Array_0[2]) - float_Array_0[2]);
	}


	// From: Req4Batch78Wrapper_A
	if (0.8f > (- float_Array_0[1])) {
		unsigned_char_Array_0[1] = unsigned_char_Array_0[0];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1] >= 4611686.018427383000e+12F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854766000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= 0.0F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	float_Array_0[2] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[2] >= 0.0F && float_Array_0[2] <= -1.0e-20F) || (float_Array_0[2] <= 9223372.036854766000e+12F && float_Array_0[2] >= 1.0e-20F ));
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 1073741823);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483646);
	signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][1] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483646);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 254);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? ((BOOL_unsigned_char_Array_0[1] && (unsigned_long_int_Array_0[1] > unsigned_long_int_Array_0[0])) ? (signed_long_int_Array_0[1][1] == ((signed long int) (signed_long_int_Array_0[0][1] - signed_long_int_Array_0[1][0]))) : (signed_long_int_Array_0[1][1] == ((signed long int) ((signed_long_int_Array_0[0][0] + 5) - signed_long_int_Array_0[1][0])))) : 1) && (BOOL_unsigned_char_Array_0[1] ? (float_Array_0[0] == ((float) (float_Array_0[1] - float_Array_0[2]))) : ((unsigned_long_int_Array_0[1] < unsigned_long_int_Array_0[0]) ? (float_Array_0[0] == ((float) (max (float_Array_0[2] , float_Array_0[1])))) : (float_Array_0[0] == ((float) float_Array_0[1]))))) && ((unsigned_long_int_Array_0[1] <= (abs (8u))) ? (double_Array_0[0] == ((double) (float_Array_0[1] - 99.5))) : (double_Array_0[0] == ((double) ((double_Array_0[1] - double_Array_0[2]) - float_Array_0[2]))))) && ((0.8f > (- float_Array_0[1])) ? (unsigned_char_Array_0[1] == ((unsigned char) unsigned_char_Array_0[0])) : 1)
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
