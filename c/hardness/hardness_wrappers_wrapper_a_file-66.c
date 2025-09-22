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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Wrapper_A.c", 13, "reach_error"); }
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
signed long int signed_long_int_Array_0[2] = {
	-1000000, -1000000000
};
unsigned char unsigned_char_Array_0[2][3] = {
	{0, 0, 2}, {32, 2, 100}
};
unsigned long int unsigned_long_int_Array_0[3] = {
	10, 32, 1
};
unsigned short int unsigned_short_int_Array_0[7] = {
	38382, 0, 10000, 128, 16, 4, 8
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch66Wrapper_A
	if (unsigned_long_int_Array_0[2] <= unsigned_long_int_Array_0[1]) {
		unsigned_short_int_Array_0[6] = (unsigned_short_int_Array_0[5] + ((unsigned_short_int_Array_0[4] + unsigned_short_int_Array_0[3]) + (unsigned_short_int_Array_0[2] - unsigned_short_int_Array_0[1])));
	} else {
		unsigned_short_int_Array_0[6] = (unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[2]);
	}


	// From: Req2Batch66Wrapper_A
	unsigned short int stepLocal_1 = unsigned_short_int_Array_0[5];
	unsigned char stepLocal_0 = unsigned_short_int_Array_0[5] > unsigned_short_int_Array_0[6];
	if (stepLocal_0 || BOOL_unsigned_char_Array_0[0]) {
		if (unsigned_short_int_Array_0[3] != stepLocal_1) {
			unsigned_char_Array_0[0][1] = unsigned_char_Array_0[0][0];
		} else {
			unsigned_char_Array_0[0][1] = (max ((unsigned_char_Array_0[1][0] + unsigned_char_Array_0[1][1]) , (max (unsigned_char_Array_0[0][0] , unsigned_char_Array_0[0][2]))));
		}
	}


	// From: Req3Batch66Wrapper_A
	if (unsigned_short_int_Array_0[0] < unsigned_short_int_Array_0[5]) {
		signed_long_int_Array_0[0] = (unsigned_short_int_Array_0[2] + 16);
	} else {
		if (BOOL_unsigned_char_Array_0[0] || (signed_long_int_Array_0[1] <= unsigned_long_int_Array_0[1])) {
			signed_long_int_Array_0[0] = unsigned_short_int_Array_0[5];
		} else {
			signed_long_int_Array_0[0] = unsigned_short_int_Array_0[6];
		}
	}


	// From: Req4Batch66Wrapper_A
	unsigned_char_Array_0[1][2] = unsigned_char_Array_0[0][2];


	// From: Req5Batch66Wrapper_A
	unsigned_long_int_Array_0[0] = unsigned_char_Array_0[0][0];
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	signed_long_int_Array_0[1] = __VERIFIER_nondet_long();
	assume_abort_if_not(signed_long_int_Array_0[1] >= -2147483648);
	assume_abort_if_not(signed_long_int_Array_0[1] <= 2147483647);
	unsigned_char_Array_0[0][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][0] <= 254);
	unsigned_char_Array_0[1][0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][0] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][0] <= 127);
	unsigned_char_Array_0[1][1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[1][1] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[1][1] <= 127);
	unsigned_char_Array_0[0][2] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(unsigned_char_Array_0[0][2] >= 0);
	assume_abort_if_not(unsigned_char_Array_0[0][2] <= 254);
	unsigned_long_int_Array_0[1] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[1] <= 4294967295);
	unsigned_long_int_Array_0[2] = __VERIFIER_nondet_ulong();
	assume_abort_if_not(unsigned_long_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_long_int_Array_0[2] <= 4294967295);
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 32767);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
	unsigned_short_int_Array_0[1] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[1] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[1] <= 8191);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 8191);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 16383);
	unsigned_short_int_Array_0[3] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[3] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[3] <= 8192);
	unsigned_short_int_Array_0[4] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[4] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[4] <= 8192);
	unsigned_short_int_Array_0[5] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[5] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[5] <= 32767);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((unsigned_long_int_Array_0[2] <= unsigned_long_int_Array_0[1]) ? (unsigned_short_int_Array_0[6] == ((unsigned short int) (unsigned_short_int_Array_0[5] + ((unsigned_short_int_Array_0[4] + unsigned_short_int_Array_0[3]) + (unsigned_short_int_Array_0[2] - unsigned_short_int_Array_0[1]))))) : (unsigned_short_int_Array_0[6] == ((unsigned short int) (unsigned_short_int_Array_0[0] - unsigned_short_int_Array_0[2])))) && (((unsigned_short_int_Array_0[5] > unsigned_short_int_Array_0[6]) || BOOL_unsigned_char_Array_0[0]) ? ((unsigned_short_int_Array_0[3] != unsigned_short_int_Array_0[5]) ? (unsigned_char_Array_0[0][1] == ((unsigned char) unsigned_char_Array_0[0][0])) : (unsigned_char_Array_0[0][1] == ((unsigned char) (max ((unsigned_char_Array_0[1][0] + unsigned_char_Array_0[1][1]) , (max (unsigned_char_Array_0[0][0] , unsigned_char_Array_0[0][2]))))))) : 1)) && ((unsigned_short_int_Array_0[0] < unsigned_short_int_Array_0[5]) ? (signed_long_int_Array_0[0] == ((signed long int) (unsigned_short_int_Array_0[2] + 16))) : ((BOOL_unsigned_char_Array_0[0] || (signed_long_int_Array_0[1] <= unsigned_long_int_Array_0[1])) ? (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[5])) : (signed_long_int_Array_0[0] == ((signed long int) unsigned_short_int_Array_0[6]))))) && (unsigned_char_Array_0[1][2] == ((unsigned char) unsigned_char_Array_0[0][2]))) && (unsigned_long_int_Array_0[0] == ((unsigned long int) unsigned_char_Array_0[0][0]))
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
