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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch83Wrapper_A.c", 13, "reach_error"); }
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
double double_Array_0[5] = {
	24.8, 127.625, 0.8, 128.75, 1.5
};
signed char signed_char_Array_0[2] = {
	5, 64
};
signed long int signed_long_int_Array_0[2][2] = {
	{-64, 128}, {2, 1000000000}
};
signed short int signed_short_int_Array_0[1] = {
	-128
};
unsigned char unsigned_char_Array_0[1] = {
	4
};
unsigned short int unsigned_short_int_Array_0[2] = {
	25, 128
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch83Wrapper_A
	signed long int stepLocal_0 = min ((signed_long_int_Array_0[1][1] * signed_long_int_Array_0[0][1]) , (~ signed_long_int_Array_0[1][0]));
	if (BOOL_unsigned_char_Array_0[0]) {
		unsigned_short_int_Array_0[1] = (abs (abs (unsigned_short_int_Array_0[0])));
	} else {
		if ((unsigned_short_int_Array_0[0] / unsigned_char_Array_0[0]) >= stepLocal_0) {
			unsigned_short_int_Array_0[1] = unsigned_char_Array_0[0];
		} else {
			unsigned_short_int_Array_0[1] = unsigned_short_int_Array_0[0];
		}
	}


	// From: Req2Batch83Wrapper_A
	signed long int stepLocal_2 = unsigned_short_int_Array_0[1] ^ signed_long_int_Array_0[1][1];
	signed long int stepLocal_1 = unsigned_short_int_Array_0[0] + unsigned_short_int_Array_0[1];
	if (signed_long_int_Array_0[0][1] <= stepLocal_1) {
		if (unsigned_short_int_Array_0[1] == stepLocal_2) {
			double_Array_0[1] = ((abs (double_Array_0[2])) + double_Array_0[3]);
		} else {
			double_Array_0[1] = double_Array_0[3];
		}
	} else {
		double_Array_0[1] = double_Array_0[2];
	}


	// From: Req3Batch83Wrapper_A
	if (signed_long_int_Array_0[0][1] > signed_long_int_Array_0[0][0]) {
		double_Array_0[0] = (min (double_Array_0[3] , double_Array_0[2]));
	}


	// From: Req4Batch83Wrapper_A
	signed_short_int_Array_0[0] = 200;


	// From: Req5Batch83Wrapper_A
	signed_char_Array_0[1] = signed_char_Array_0[0];


	// From: Req6Batch83Wrapper_A
	double_Array_0[4] = double_Array_0[2];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -461168.6018427383000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 4611686.018427383000e+12F && double_Array_0[2] >= 1.0e-20F ));
	double_Array_0[3] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[3] >= -461168.6018427383000e+13F && double_Array_0[3] <= -1.0e-20F) || (double_Array_0[3] <= 4611686.018427383000e+12F && double_Array_0[3] >= 1.0e-20F ));
	signed_char_Array_0[0] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[0] >= -127);
	assume_abort_if_not(signed_char_Array_0[0] <= 126);
	signed_long_int_Array_0[0][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0][0] <= 2147483647);
	signed_long_int_Array_0[1][0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][0] <= 2147483647);
	signed_long_int_Array_0[0][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0][1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0][1] <= 2147483647);
	signed_long_int_Array_0[1][1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1][1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1][1] <= 2147483647);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 255);
	assume_abort_if_not(unsigned_char_Array_0[0] != 0);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((BOOL_unsigned_char_Array_0[0] ? (unsigned_short_int_Array_0[1] == ((unsigned short int) (abs (abs (unsigned_short_int_Array_0[0]))))) : (((unsigned_short_int_Array_0[0] / unsigned_char_Array_0[0]) >= (min ((signed_long_int_Array_0[1][1] * signed_long_int_Array_0[0][1]) , (~ signed_long_int_Array_0[1][0])))) ? (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_char_Array_0[0])) : (unsigned_short_int_Array_0[1] == ((unsigned short int) unsigned_short_int_Array_0[0])))) && ((signed_long_int_Array_0[0][1] <= (unsigned_short_int_Array_0[0] + unsigned_short_int_Array_0[1])) ? ((unsigned_short_int_Array_0[1] == (unsigned_short_int_Array_0[1] ^ signed_long_int_Array_0[1][1])) ? (double_Array_0[1] == ((double) ((abs (double_Array_0[2])) + double_Array_0[3]))) : (double_Array_0[1] == ((double) double_Array_0[3]))) : (double_Array_0[1] == ((double) double_Array_0[2])))) && ((signed_long_int_Array_0[0][1] > signed_long_int_Array_0[0][0]) ? (double_Array_0[0] == ((double) (min (double_Array_0[3] , double_Array_0[2])))) : 1)) && (signed_short_int_Array_0[0] == ((signed short int) 200))) && (signed_char_Array_0[1] == ((signed char) signed_char_Array_0[0]))) && (double_Array_0[4] == ((double) double_Array_0[2]))
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
