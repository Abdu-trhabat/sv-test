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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch42Wrapper_A.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[7] = {
	1, 0, 0, 0, 0, 0, 0
};
float float_Array_0[2] = {
	16.5, 127.25
};
signed long int signed_long_int_Array_0[5] = {
	100, 10, 256, 64, -1
};
signed short int signed_short_int_Array_0[2] = {
	-200, -8
};
unsigned char unsigned_char_Array_0[2] = {
	4, 5
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch42Wrapper_A
	if (signed_short_int_Array_0[1] > signed_short_int_Array_0[0]) {
		signed_long_int_Array_0[4] = ((min (signed_long_int_Array_0[3] , signed_long_int_Array_0[2])) - 10);
	} else {
		signed_long_int_Array_0[4] = (max ((signed_long_int_Array_0[2] - signed_long_int_Array_0[1]) , (signed_long_int_Array_0[3] - signed_long_int_Array_0[0])));
	}


	// From: Req2Batch42Wrapper_A
	unsigned_char_Array_0[1] = (unsigned_char_Array_0[0] + 100);


	// From: Req3Batch42Wrapper_A
	float_Array_0[0] = (min (float_Array_0[1] , 64.15f));


	// From: Req5Batch42Wrapper_A
	if (float_Array_0[1] <= float_Array_0[0]) {
		if (signed_long_int_Array_0[4] != signed_long_int_Array_0[0]) {
			BOOL_unsigned_char_Array_0[3] = BOOL_unsigned_char_Array_0[5];
		}
	} else {
		if (signed_long_int_Array_0[3] <= 1000000) {
			BOOL_unsigned_char_Array_0[3] = 0;
		} else {
			BOOL_unsigned_char_Array_0[3] = BOOL_unsigned_char_Array_0[6];
		}
	}


	// From: Req4Batch42Wrapper_A
	if ((- float_Array_0[0]) > float_Array_0[1]) {
		BOOL_unsigned_char_Array_0[0] = (BOOL_unsigned_char_Array_0[1] || (BOOL_unsigned_char_Array_0[3] && (BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[2])));
	} else {
		BOOL_unsigned_char_Array_0[0] = ((signed_long_int_Array_0[4] <= unsigned_char_Array_0[0]) && BOOL_unsigned_char_Array_0[2]);
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 0);
	BOOL_unsigned_char_Array_0[2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[2] <= 0);
	BOOL_unsigned_char_Array_0[4] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[4] <= 0);
	BOOL_unsigned_char_Array_0[5] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[5] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[5] <= 0);
	BOOL_unsigned_char_Array_0[6] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[6] >= 1);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[6] <= 1);
	float_Array_0[1] = __VERIFIER_nondet_float();
	assume_abort_if_not((float_Array_0[1] >= -922337.2036854766000e+13F && float_Array_0[1] <= -1.0e-20F) || (float_Array_0[1] <= 9223372.036854766000e+12F && float_Array_0[1] >= 1.0e-20F ));
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483646);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= 0);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483646);
	signed_long_int_Array_0[2] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[2] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[2] <= 2147483646);
	signed_long_int_Array_0[3] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[3] >= -1);
	assume_abort_if_not(signed_long_int_Array_0[3] <= 2147483646);
	signed_short_int_Array_0[0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[0] <= 32767);
	signed_short_int_Array_0[1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1] >= -32768);
	assume_abort_if_not(signed_short_int_Array_0[1] <= 32767);
	unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0] <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((signed_short_int_Array_0[1] > signed_short_int_Array_0[0]) ? (signed_long_int_Array_0[4] == ((signed long int) ((min (signed_long_int_Array_0[3] , signed_long_int_Array_0[2])) - 10))) : (signed_long_int_Array_0[4] == ((signed long int) (max ((signed_long_int_Array_0[2] - signed_long_int_Array_0[1]) , (signed_long_int_Array_0[3] - signed_long_int_Array_0[0])))))) && (unsigned_char_Array_0[1] == ((unsigned char) (unsigned_char_Array_0[0] + 100)))) && (float_Array_0[0] == ((float) (min (float_Array_0[1] , 64.15f))))) && (((- float_Array_0[0]) > float_Array_0[1]) ? (BOOL_unsigned_char_Array_0[0] == ((unsigned char) (BOOL_unsigned_char_Array_0[1] || (BOOL_unsigned_char_Array_0[3] && (BOOL_unsigned_char_Array_0[4] || BOOL_unsigned_char_Array_0[2]))))) : (BOOL_unsigned_char_Array_0[0] == ((unsigned char) ((signed_long_int_Array_0[4] <= unsigned_char_Array_0[0]) && BOOL_unsigned_char_Array_0[2]))))) && ((float_Array_0[1] <= float_Array_0[0]) ? ((signed_long_int_Array_0[4] != signed_long_int_Array_0[0]) ? (BOOL_unsigned_char_Array_0[3] == ((unsigned char) BOOL_unsigned_char_Array_0[5])) : 1) : ((signed_long_int_Array_0[3] <= 1000000) ? (BOOL_unsigned_char_Array_0[3] == ((unsigned char) 0)) : (BOOL_unsigned_char_Array_0[3] == ((unsigned char) BOOL_unsigned_char_Array_0[6]))))
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
