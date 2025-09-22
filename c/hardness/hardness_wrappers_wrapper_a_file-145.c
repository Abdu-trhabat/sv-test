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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Wrapper_A.c", 13, "reach_error"); }
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
	255.5, 64.7, 499.77
};
signed long int signed_long_int_Array_0[5] = {
	2, -25, 32, 1, 32
};
signed short int signed_short_int_Array_0[2] = {
	-256, 256
};
unsigned short int unsigned_short_int_Array_0[5] = {
	10, 10000, 10000, 30958, 25
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch145Wrapper_A
	if ((signed_long_int_Array_0[4] + signed_long_int_Array_0[3]) <= signed_long_int_Array_0[2]) {
		unsigned_short_int_Array_0[4] = ((unsigned_short_int_Array_0[3] + (unsigned_short_int_Array_0[2] + unsigned_short_int_Array_0[1])) - unsigned_short_int_Array_0[0]);
	}


	// From: Req2Batch145Wrapper_A
	unsigned char stepLocal_1 = (10 > signed_long_int_Array_0[1]) && BOOL_unsigned_char_Array_0[1];
	unsigned short int stepLocal_0 = unsigned_short_int_Array_0[3];
	if (stepLocal_1 || BOOL_unsigned_char_Array_0[0]) {
		if (stepLocal_0 >= signed_long_int_Array_0[1]) {
			signed_long_int_Array_0[0] = unsigned_short_int_Array_0[0];
		}
	} else {
		signed_long_int_Array_0[0] = unsigned_short_int_Array_0[4];
	}


	// From: Req3Batch145Wrapper_A
	unsigned short int stepLocal_2 = unsigned_short_int_Array_0[0];
	if (signed_long_int_Array_0[0] != stepLocal_2) {
		double_Array_0[0] = double_Array_0[2];
	}


	// From: Req4Batch145Wrapper_A
	unsigned short int stepLocal_3 = unsigned_short_int_Array_0[0];
	if (double_Array_0[2] <= (min (double_Array_0[0] , double_Array_0[1]))) {
		if ((min (signed_long_int_Array_0[0] , (signed_long_int_Array_0[0] & unsigned_short_int_Array_0[3]))) < stepLocal_3) {
			signed_short_int_Array_0[1] = unsigned_short_int_Array_0[2];
		} else {
			signed_short_int_Array_0[1] = (min ((min (unsigned_short_int_Array_0[1] , unsigned_short_int_Array_0[2])) , signed_short_int_Array_0[0]));
		}
	} else {
		signed_short_int_Array_0[1] = unsigned_short_int_Array_0[2];
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
	assume_abort_if_not((double_Array_0[1] >= -922337.2036854776000e+13F && double_Array_0[1] <= -1.0e-20F) || (double_Array_0[1] <= 9223372.036854776000e+12F && double_Array_0[1] >= 1.0e-20F ));
	double_Array_0[2] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[2] >= -922337.2036854766000e+13F && double_Array_0[2] <= -1.0e-20F) || (double_Array_0[2] <= 9223372.036854766000e+12F && double_Array_0[2] >= 1.0e-20F ));
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483647);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483647);
	signed_long_int_Array_0[4] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[4] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[4] <= 2147483647);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32766);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 32767);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 8192);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 16383);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 8192);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 16384);
	unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[3] >= 16383);
	assume_abort_if_not(unsigned_short_int_Array_0[3] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((signed_long_int_Array_0[4] + signed_long_int_Array_0[3]) <= signed_long_int_Array_0[2]) ? (unsigned_short_int_Array_0[4] == ((unsigned short int) ((unsigned_short_int_Array_0[3] + (unsigned_short_int_Array_0[2] + unsigned_short_int_Array_0[1])) - unsigned_short_int_Array_0[0]))) : 1) && ((((10 > signed_long_int_Array_0[1]) && BOOL_unsigned_char_Array_0[1]) || BOOL_unsigned_char_Array_0[0]) ? ((unsigned_short_int_Array_0[3] >= signed_long_int_Array_0[1]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[0])) : 1) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[4])))) && ((signed_long_int_Array_0[0] != unsigned_short_int_Array_0[0]) ? (double_Array_0[0] == ((double) double_Array_0[2])) : 1)) && ((double_Array_0[2] <= (min (double_Array_0[0] , double_Array_0[1]))) ? (((min (signed_long_int_Array_0[0] , (signed_long_int_Array_0[0] & unsigned_short_int_Array_0[3]))) < unsigned_short_int_Array_0[0]) ? (signed_short_int_Array_0[1] == ((signed short int) unsigned_short_int_Array_0[2])) : (signed_short_int_Array_0[1] == ((signed short int) (min ((min (unsigned_short_int_Array_0[1] , unsigned_short_int_Array_0[2])) , signed_short_int_Array_0[0]))))) : (signed_short_int_Array_0[1] == ((signed short int) unsigned_short_int_Array_0[2])))
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
