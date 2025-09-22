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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Wrapper_A.c", 13, "reach_error"); }
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
signed long int signed_long_int_Array_0[1] = {
	-100
};
signed short int signed_short_int_Array_0[2][2] = {
	{-16, 1}, {8, 0}
};
unsigned long int unsigned_long_int_Array_0[3] = {
	128, 10000, 8
};
unsigned short int unsigned_short_int_Array_0[2] = {
	100, 200
};

// Calibration values

// Last'ed variables
unsigned long int last_1_unsigned_long_int_Array_0_1_ = 10000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch187Wrapper_A
	unsigned char stepLocal_1 = (unsigned_short_int_Array_0[0] / signed_long_int_Array_0[0]) < unsigned_short_int_Array_0[1];
	unsigned short int stepLocal_0 = unsigned_short_int_Array_0[0];
	if (BOOL_unsigned_char_Array_0[1]) {
		if (unsigned_short_int_Array_0[1] <= stepLocal_0) {
			if (BOOL_unsigned_char_Array_0[0] && stepLocal_1) {
				unsigned_long_int_Array_0[2] = unsigned_short_int_Array_0[0];
			}
		} else {
			unsigned_long_int_Array_0[2] = unsigned_short_int_Array_0[1];
		}
	}


	// From: Req3Batch187Wrapper_A
	signed long int stepLocal_5 = signed_long_int_Array_0[0];
	unsigned long int stepLocal_4 = unsigned_long_int_Array_0[2];
	if (last_1_unsigned_long_int_Array_0_1_ > stepLocal_5) {
		if ((signed_short_int_Array_0[1][0] - signed_short_int_Array_0[0][1]) > stepLocal_4) {
			unsigned_long_int_Array_0[1] = ((min (signed_short_int_Array_0[0][1] , (last_1_unsigned_long_int_Array_0_1_ + unsigned_long_int_Array_0[2]))) + unsigned_long_int_Array_0[0]);
		}
	} else {
		unsigned_long_int_Array_0[1] = unsigned_long_int_Array_0[2];
	}


	// From: Req2Batch187Wrapper_A
	unsigned long int stepLocal_3 = unsigned_long_int_Array_0[2];
	signed long int stepLocal_2 = 2;
	if (stepLocal_2 == (min ((unsigned_long_int_Array_0[1] | unsigned_long_int_Array_0[2]) , unsigned_long_int_Array_0[2]))) {
		if (unsigned_long_int_Array_0[1] < stepLocal_3) {
			signed_short_int_Array_0[1][1] = (signed_short_int_Array_0[1][0] - 8);
		} else {
			signed_short_int_Array_0[1][1] = signed_short_int_Array_0[1][0];
		}
	} else {
		if (BOOL_unsigned_char_Array_0[1]) {
			signed_short_int_Array_0[1][1] = signed_short_int_Array_0[1][0];
		} else {
			signed_short_int_Array_0[1][1] = signed_short_int_Array_0[0][0];
		}
	}
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	signed_long_int_Array_0[0] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[0] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[0] <= 2147483647);
	assume_abort_if_not(signed_long_int_Array_0[0] != 0);
	signed_short_int_Array_0[0][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][0] >= -32767);
	assume_abort_if_not(signed_short_int_Array_0[0][0] <= 32766);
	signed_short_int_Array_0[1][0] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[1][0] >= -1);
	assume_abort_if_not(signed_short_int_Array_0[1][0] <= 32766);
	signed_short_int_Array_0[0][1] = __VERIFIER_nondet_short();
	assume_abort_if_not(signed_short_int_Array_0[0][1] >= 0);
	assume_abort_if_not(signed_short_int_Array_0[0][1] <= 32767);
	unsigned_long_int_Array_0[0] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[0] <= 2147483647);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65535);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 65535);
}



void updateLastVariables(void) {
	last_1_unsigned_long_int_Array_0_1_ = unsigned_long_int_Array_0[1];
}

int property(void) {
	return ((BOOL_unsigned_char_Array_0[1] ? ((unsigned_short_int_Array_0[1] <= unsigned_short_int_Array_0[0]) ? ((BOOL_unsigned_char_Array_0[0] && ((unsigned_short_int_Array_0[0] / signed_long_int_Array_0[0]) < unsigned_short_int_Array_0[1])) ? (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_short_int_Array_0[0])) : 1) : (unsigned_long_int_Array_0[2] == ((unsigned long int) unsigned_short_int_Array_0[1]))) : 1) && ((2 == (min ((unsigned_long_int_Array_0[1] | unsigned_long_int_Array_0[2]) , unsigned_long_int_Array_0[2]))) ? ((unsigned_long_int_Array_0[1] < unsigned_long_int_Array_0[2]) ? (signed_short_int_Array_0[1][1] == ((signed short int) (signed_short_int_Array_0[1][0] - 8))) : (signed_short_int_Array_0[1][1] == ((signed short int) signed_short_int_Array_0[1][0]))) : (BOOL_unsigned_char_Array_0[1] ? (signed_short_int_Array_0[1][1] == ((signed short int) signed_short_int_Array_0[1][0])) : (signed_short_int_Array_0[1][1] == ((signed short int) signed_short_int_Array_0[0][0]))))) && ((last_1_unsigned_long_int_Array_0_1_ > signed_long_int_Array_0[0]) ? (((signed_short_int_Array_0[1][0] - signed_short_int_Array_0[0][1]) > unsigned_long_int_Array_0[2]) ? (unsigned_long_int_Array_0[1] == ((unsigned long int) ((min (signed_short_int_Array_0[0][1] , (last_1_unsigned_long_int_Array_0_1_ + unsigned_long_int_Array_0[2]))) + unsigned_long_int_Array_0[0]))) : 1) : (unsigned_long_int_Array_0[1] == ((unsigned long int) unsigned_long_int_Array_0[2])))
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
