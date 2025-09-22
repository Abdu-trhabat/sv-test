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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Wrapper_A.c", 13, "reach_error"); }
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
float float_Array_0[2] = {
	32.5, 5.2
};
signed long int signed_long_int_Array_0[1] = {
	0
};
signed short int signed_short_int_Array_0[7] = {
	-256, 16, 8, -32, 8, -1000, -256
};
unsigned char unsigned_char_Array_0[2][2] = {
	{2, 128}, {10, 64}
};

// Calibration values

// Last'ed variables
signed long int last_1_signed_long_int_Array_0_0_ = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch30Wrapper_A
	signed long int stepLocal_0 = last_1_signed_long_int_Array_0_0_;
	if (BOOL_unsigned_char_Array_0[0]) {
		if (stepLocal_0 > ((last_1_signed_long_int_Array_0_0_ / signed_short_int_Array_0[4]) % signed_short_int_Array_0[3])) {
			unsigned_char_Array_0[1][1] = (max ((min (unsigned_char_Array_0[0][1] , unsigned_char_Array_0[1][0])) , unsigned_char_Array_0[0][0]));
		}
	} else {
		unsigned_char_Array_0[1][1] = unsigned_char_Array_0[0][0];
	}


	// From: Req2Batch30Wrapper_A
	signed short int stepLocal_2 = signed_short_int_Array_0[4];
	signed short int stepLocal_1 = signed_short_int_Array_0[3];
	if ((unsigned_char_Array_0[1][1] + signed_short_int_Array_0[5]) < stepLocal_1) {
		if (BOOL_unsigned_char_Array_0[0]) {
			if (stepLocal_2 > signed_short_int_Array_0[6]) {
				signed_long_int_Array_0[0] = signed_short_int_Array_0[6];
			}
		} else {
			signed_long_int_Array_0[0] = unsigned_char_Array_0[1][0];
		}
	} else {
		signed_long_int_Array_0[0] = unsigned_char_Array_0[0][0];
	}


	// From: Req3Batch30Wrapper_A
	unsigned char stepLocal_5 = signed_short_int_Array_0[1] >= unsigned_char_Array_0[1][0];
	signed short int stepLocal_4 = signed_short_int_Array_0[0];
	signed short int stepLocal_3 = signed_short_int_Array_0[5];
	if (signed_short_int_Array_0[6] > stepLocal_4) {
		if (stepLocal_3 <= ((max (unsigned_char_Array_0[0][0] , unsigned_char_Array_0[1][1])) << (signed_short_int_Array_0[1] - signed_short_int_Array_0[2]))) {
			if (stepLocal_5 || BOOL_unsigned_char_Array_0[0]) {
				float_Array_0[0] = 255.75f;
			}
		}
	} else {
		float_Array_0[0] = float_Array_0[1];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= 11);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 23);
	signed_short_int_Array_0[2] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[2] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[2] <= 11);
	signed_short_int_Array_0[3] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[3] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[3] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[3] != 0);
	signed_short_int_Array_0[4] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[4] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[4] <= 32767);
	assume_abort_if_not(signed_short_int_Array_0[4] != 0);
	signed_short_int_Array_0[5] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[5] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[5] <= 32767);
	signed_short_int_Array_0[6] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[6] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[6] <= 32767);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 254);
	unsigned_char_Array_0[0][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][1] <= 254);
}



void updateLastVariables(void) {
	last_1_signed_long_int_Array_0_0_ = signed_long_int_Array_0[0];
}

int property(void) {
	return ((BOOL_unsigned_char_Array_0[0] ? ((last_1_signed_long_int_Array_0_0_ > ((last_1_signed_long_int_Array_0_0_ / signed_short_int_Array_0[4]) % signed_short_int_Array_0[3])) ? (unsigned_char_Array_0[1][1] == ((unsigned char) (max ((min (unsigned_char_Array_0[0][1] , unsigned_char_Array_0[1][0])) , unsigned_char_Array_0[0][0])))) : 1) : (unsigned_char_Array_0[1][1] == ((unsigned char) unsigned_char_Array_0[0][0]))) && (((unsigned_char_Array_0[1][1] + signed_short_int_Array_0[5]) < signed_short_int_Array_0[3]) ? (BOOL_unsigned_char_Array_0[0] ? ((signed_short_int_Array_0[4] > signed_short_int_Array_0[6]) ? (signed_long_int_Array_0[0] == ((signed long int) signed_short_int_Array_0[6])) : 1) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[1][0]))) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_char_Array_0[0][0])))) && ((signed_short_int_Array_0[6] > signed_short_int_Array_0[0]) ? ((signed_short_int_Array_0[5] <= ((max (unsigned_char_Array_0[0][0] , unsigned_char_Array_0[1][1])) << (signed_short_int_Array_0[1] - signed_short_int_Array_0[2]))) ? (((signed_short_int_Array_0[1] >= unsigned_char_Array_0[1][0]) || BOOL_unsigned_char_Array_0[0]) ? (float_Array_0[0] == ((float) 255.75f)) : 1) : 1) : (float_Array_0[0] == ((float) float_Array_0[1])))
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
