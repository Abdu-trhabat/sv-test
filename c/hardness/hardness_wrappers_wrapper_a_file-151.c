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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch151Wrapper_A.c", 13, "reach_error"); }
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
	0, 0, 0
};
double double_Array_0[2][2] = {
	{24.5, 0.0}, {255.875, 31.6}
};
float float_Array_0[3] = {
	8.2, 32.6, 49.5
};
signed long int signed_long_int_Array_0[2] = {
	50, 256
};
unsigned char unsigned_char_Array_0[2][3] = {
	{50, 50, 64}, {64, 25, 1}
};
unsigned short int unsigned_short_int_Array_0[1] = {
	50174
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch151Wrapper_A
	double_Array_0[1][1] = ((double_Array_0[0][1] - double_Array_0[1][0]) - double_Array_0[0][0]);


	// From: Req2Batch151Wrapper_A
	float_Array_0[2] = ((double_Array_0[1][0] - float_Array_0[1]) + float_Array_0[0]);


	// From: Req3Batch151Wrapper_A
	if (25 <= ((100000000 + signed_long_int_Array_0[0]) - signed_long_int_Array_0[1])) {
		if (1 >= signed_long_int_Array_0[0]) {
			if ((abs (unsigned_short_int_Array_0[0] - 8)) == signed_long_int_Array_0[1]) {
				BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[0] && (! 0));
			} else {
				BOOL_unsigned_char_Array_0[2] = (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[1]);
			}
		}
	}


	// From: Req4Batch151Wrapper_A
	if (! BOOL_unsigned_char_Array_0[1]) {
		unsigned_char_Array_0[0][1] = ((max ((unsigned_char_Array_0[1][1] + unsigned_char_Array_0[0][0]) , unsigned_char_Array_0[1][0])) + (abs (unsigned_char_Array_0[0][2] + unsigned_char_Array_0[1][2])));
	} else {
		if (BOOL_unsigned_char_Array_0[1]) {
			unsigned_char_Array_0[0][1] = unsigned_char_Array_0[1][2];
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	double_Array_0[0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0] >= 0.0F && double_Array_0[0][0] <= -1.0e-20F) || (double_Array_0[0][0] <= 9223372.036854766000e+12F && double_Array_0[0][0] >= 1.0e-20F ));
	double_Array_0[1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0] >= 0.0F && double_Array_0[1][0] <= -1.0e-20F) || (double_Array_0[1][0] <= 4611686.018427383000e+12F && double_Array_0[1][0] >= 1.0e-20F ));
	double_Array_0[0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1] >= 4611686.018427383000e+12F && double_Array_0[0][1] <= -1.0e-20F) || (double_Array_0[0][1] <= 9223372.036854766000e+12F && double_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0] >= -461168.6018427383000e+13F && float_Array_0[0] <= -1.0e-20F) || (float_Array_0[0] <= 4611686.018427383000e+12F && float_Array_0[0] >= 1.0e-20F ));
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= 0.0F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 4611686.018427383000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 1073741823);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 63);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][1] <= 64);
	unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][2] <= 64);
	unsigned_char_Array_0[1][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][2] <= 63);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((double_Array_0[1][1] == ((double) ((double_Array_0[0][1] - double_Array_0[1][0]) - double_Array_0[0][0]))) && (float_Array_0[2] == ((float) ((double_Array_0[1][0] - float_Array_0[1]) + float_Array_0[0])))) && ((25 <= ((100000000 + signed_long_int_Array_0[0]) - signed_long_int_Array_0[1])) ? ((1 >= signed_long_int_Array_0[0]) ? (((abs (unsigned_short_int_Array_0[0] - 8)) == signed_long_int_Array_0[1]) ? (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[0] && (! 0)))) : (BOOL_unsigned_char_Array_0[2] == ((unsigned char) (BOOL_unsigned_char_Array_0[0] && BOOL_unsigned_char_Array_0[1])))) : 1) : 1)) && ((! BOOL_unsigned_char_Array_0[1]) ? (unsigned_char_Array_0[0][1] == ((unsigned char) ((max ((unsigned_char_Array_0[1][1] + unsigned_char_Array_0[0][0]) , unsigned_char_Array_0[1][0])) + (abs (unsigned_char_Array_0[0][2] + unsigned_char_Array_0[1][2]))))) : (BOOL_unsigned_char_Array_0[1] ? (unsigned_char_Array_0[0][1] == ((unsigned char) unsigned_char_Array_0[1][2])) : 1))
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
