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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch194Wrapper_A.c", 13, "reach_error"); }
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
	0, 0
};
signed char signed_char_Array_0[5] = {
	-50, 32, -100, 2, 16
};
signed long int signed_long_int_Array_0[2] = {
	1, 10
};
unsigned long int unsigned_long_int_Array_0[2] = {
	8, 32
};
unsigned short int unsigned_short_int_Array_0[3] = {
	64, 0, 256
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch194Wrapper_A
	unsigned char stepLocal_2 = BOOL_unsigned_char_Array_0[1];
	signed long int stepLocal_1 = unsigned_short_int_Array_0[2] / (min (signed_long_int_Array_0[1] , unsigned_short_int_Array_0[0]));
	if (stepLocal_2 && BOOL_unsigned_char_Array_0[0]) {
		signed_long_int_Array_0[0] = unsigned_short_int_Array_0[1];
	} else {
		if (BOOL_unsigned_char_Array_0[0]) {
			if (unsigned_short_int_Array_0[1] >= stepLocal_1) {
				signed_long_int_Array_0[0] = signed_char_Array_0[2];
			}
		}
	}


	// From: Req3Batch194Wrapper_A
	if (BOOL_unsigned_char_Array_0[1]) {
		if (signed_long_int_Array_0[1] > (signed_char_Array_0[2] | (max (unsigned_short_int_Array_0[0] , unsigned_long_int_Array_0[1])))) {
			if ((signed_char_Array_0[1] - signed_char_Array_0[3]) < (signed_char_Array_0[2] / (max (signed_long_int_Array_0[1] , unsigned_short_int_Array_0[0])))) {
				signed_char_Array_0[0] = signed_char_Array_0[2];
			} else {
				signed_char_Array_0[0] = 8;
			}
		} else {
			signed_char_Array_0[0] = signed_char_Array_0[2];
		}
	}


	// From: Req1Batch194Wrapper_A
	unsigned char stepLocal_0 = (signed_long_int_Array_0[0] % signed_long_int_Array_0[1]) >= signed_long_int_Array_0[0];
	if (BOOL_unsigned_char_Array_0[1]) {
		if ((unsigned_long_int_Array_0[1] == unsigned_long_int_Array_0[0]) && stepLocal_0) {
			signed_char_Array_0[4] = (abs (signed_char_Array_0[2]));
		}
	} else {
		signed_char_Array_0[4] = signed_char_Array_0[2];
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	signed_char_Array_0[1] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[1] >= -1);
	assume_abort_if_not(signed_char_Array_0[1] <= 127);
	signed_char_Array_0[2] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[2] >= -126);
	assume_abort_if_not(signed_char_Array_0[2] <= 126);
	signed_char_Array_0[3] = __VERIFIER_nondet_char();
	assume_abort_if_not(signed_char_Array_0[3] >= 0);
	assume_abort_if_not(signed_char_Array_0[3] <= 127);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[1] != 0);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 4294967295);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	assume_abort_if_not(unsigned_short_int_Array_0[0] != 0);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 65535);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((BOOL_unsigned_char_Array_0[1] ? (((unsigned_long_int_Array_0[1] == unsigned_long_int_Array_0[0]) && ((signed_long_int_Array_0[0] % signed_long_int_Array_0[1]) >= signed_long_int_Array_0[0])) ? (signed_char_Array_0[4] == ((signed char) (abs (signed_char_Array_0[2])))) : 1) : (signed_char_Array_0[4] == ((signed char) signed_char_Array_0[2]))) && ((BOOL_unsigned_char_Array_0[1] && BOOL_unsigned_char_Array_0[0]) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[1])) : (BOOL_unsigned_char_Array_0[0] ? ((unsigned_short_int_Array_0[1] >= (unsigned_short_int_Array_0[2] / (min (signed_long_int_Array_0[1] , unsigned_short_int_Array_0[0])))) ? (signed_long_int_Array_0[0] == ((signed long int) signed_char_Array_0[2])) : 1) : 1))) && (BOOL_unsigned_char_Array_0[1] ? ((signed_long_int_Array_0[1] > (signed_char_Array_0[2] | (max (unsigned_short_int_Array_0[0] , unsigned_long_int_Array_0[1])))) ? (((signed_char_Array_0[1] - signed_char_Array_0[3]) < (signed_char_Array_0[2] / (max (signed_long_int_Array_0[1] , unsigned_short_int_Array_0[0])))) ? (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[2])) : (signed_char_Array_0[0] == ((signed char) 8))) : (signed_char_Array_0[0] == ((signed char) signed_char_Array_0[2]))) : 1)
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
