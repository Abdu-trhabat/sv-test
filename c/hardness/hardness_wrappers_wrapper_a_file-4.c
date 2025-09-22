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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch4Wrapper_A.c", 13, "reach_error"); }
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
float float_Array_0[2][2] = {
	{99.6, 127.5}, {256.5, 16.5}
};
signed short int signed_short_int_Array_0[1] = {
	-25
};
unsigned char unsigned_char_Array_0[2][2] = {
	{4, 8}, {4, 0}
};
unsigned long int unsigned_long_int_Array_0[2] = {
	10, 4288034294
};
unsigned short int unsigned_short_int_Array_0[2][2] = {
	{4, 256}, {25, 5}
};

// Calibration values

// Last'ed variables
unsigned short int last_1_unsigned_short_int_Array_0_1__1_ = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch4Wrapper_A
	unsigned_short_int_Array_0[0][0] = unsigned_short_int_Array_0[0][1];


	// From: Req4Batch4Wrapper_A
	if ((- (float_Array_0[0][0] / 0.6f)) > ((float_Array_0[0][1] + 3.25f) / (min (float_Array_0[1][1] , float_Array_0[1][0])))) {
		unsigned_long_int_Array_0[0] = (500u + (min (unsigned_char_Array_0[0][0] , unsigned_short_int_Array_0[0][0])));
	} else {
		unsigned_long_int_Array_0[0] = (unsigned_long_int_Array_0[1] - unsigned_char_Array_0[0][0]);
	}


	// From: Req5Batch4Wrapper_A
	unsigned_char_Array_0[1][1] = unsigned_char_Array_0[0][1];


	// From: Req1Batch4Wrapper_A
	signed long int stepLocal_1 = - signed_short_int_Array_0[0];
	unsigned long int stepLocal_0 = unsigned_long_int_Array_0[0];
	if ((last_1_unsigned_short_int_Array_0_1__1_ / signed_short_int_Array_0[0]) >= stepLocal_0) {
		if (stepLocal_1 > last_1_unsigned_short_int_Array_0_1__1_) {
			unsigned_short_int_Array_0[1][1] = (min (unsigned_short_int_Array_0[0][1] , unsigned_short_int_Array_0[1][0]));
		}
	}


	// From: Req3Batch4Wrapper_A
	unsigned long int stepLocal_2 = unsigned_long_int_Array_0[0] / signed_short_int_Array_0[0];
	if (stepLocal_2 != (unsigned_short_int_Array_0[0][1] - 64)) {
		unsigned_char_Array_0[1][0] = (max (unsigned_char_Array_0[0][0] , unsigned_char_Array_0[0][1]));
	} else {
		unsigned_char_Array_0[1][0] = (min (unsigned_char_Array_0[0][1] , unsigned_char_Array_0[0][0]));
	}
}



void updateVariables(void) {
	float_Array_0[0][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][0] >= -922337.2036854776000e+13F && float_Array_0[0][0] <= -1.0e-20F) || (float_Array_0[0][0] <= 9223372.036854776000e+12F && float_Array_0[0][0] >= 1.0e-20F ));
	float_Array_0[1][0] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][0] >= -922337.2036854776000e+13F && float_Array_0[1][0] <= -1.0e-20F) || (float_Array_0[1][0] <= 9223372.036854776000e+12F && float_Array_0[1][0] >= 1.0e-20F ));
	assume_abort_if_not(float_Array_0[1][0] != 0.0F);
	float_Array_0[0][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[0][1] >= -922337.2036854776000e+13F && float_Array_0[0][1] <= -1.0e-20F) || (float_Array_0[0][1] <= 9223372.036854776000e+12F && float_Array_0[0][1] >= 1.0e-20F ));
	float_Array_0[1][1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1][1] >= -922337.2036854776000e+13F && float_Array_0[1][1] <= -1.0e-20F) || (float_Array_0[1][1] <= 9223372.036854776000e+12F && float_Array_0[1][1] >= 1.0e-20F ));
	assume_abort_if_not(float_Array_0[1][1] != 0.0F);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[0] != 0);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 2147483647);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967294);
	unsigned_short_int_Array_0[1][0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1][0] <= 65534);
	unsigned_short_int_Array_0[0][1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0][1] <= 65534);
}



void updateLastVariables(void) {
	last_1_unsigned_short_int_Array_0_1__1_ = unsigned_short_int_Array_0[1][1];
}

int property(void) {
	return ((((((last_1_unsigned_short_int_Array_0_1__1_ / signed_short_int_Array_0[0]) >= unsigned_long_int_Array_0[0]) ? (((- signed_short_int_Array_0[0]) > last_1_unsigned_short_int_Array_0_1__1_) ? (unsigned_short_int_Array_0[1][1] == ((unsigned short int) (min (unsigned_short_int_Array_0[0][1] , unsigned_short_int_Array_0[1][0])))) : 1) : 1) && (unsigned_short_int_Array_0[0][0] == ((unsigned short int) unsigned_short_int_Array_0[0][1]))) && (((unsigned_long_int_Array_0[0] / signed_short_int_Array_0[0]) != (unsigned_short_int_Array_0[0][1] - 64)) ? (unsigned_char_Array_0[1][0] == ((unsigned char) (max (unsigned_char_Array_0[0][0] , unsigned_char_Array_0[0][1])))) : (unsigned_char_Array_0[1][0] == ((unsigned char) (min (unsigned_char_Array_0[0][1] , unsigned_char_Array_0[0][0])))))) && (((- (float_Array_0[0][0] / 0.6f)) > ((float_Array_0[0][1] + 3.25f) / (min (float_Array_0[1][1] , float_Array_0[1][0])))) ? (unsigned_long_int_Array_0[0] == ((unsigned long int) (500u + (min (unsigned_char_Array_0[0][0] , unsigned_short_int_Array_0[0][0]))))) : (unsigned_long_int_Array_0[0] == ((unsigned long int) (unsigned_long_int_Array_0[1] - unsigned_char_Array_0[0][0]))))) && (unsigned_char_Array_0[1][1] == ((unsigned char) unsigned_char_Array_0[0][1]))
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
