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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch146Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	signed long int var_1_2;
	signed long int var_1_3;
	signed long int var_1_4;
	unsigned long int var_1_5;
	signed long int var_1_6;
	unsigned long int var_1_7;
	unsigned long int var_1_8;
	unsigned long int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_15;
	float var_1_16;
	float var_1_17;
	unsigned char var_1_18;
};

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
struct WrapperStruct00 WrapperStruct00 = {
	-128,
	-10,
	4,
	0,
	2,
	-64,
	1,
	50,
	0,
	4,
	0,
	128,
	128,
	100,
	15.75,
	1000000.1,
	4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch146Wrapper_S
	WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 + (min ((16 + WrapperStruct00.var_1_3) , (max (WrapperStruct00.var_1_4 , -32)))));


	// From: Req2Batch146Wrapper_S
	if (WrapperStruct00.var_1_1 >= ((max (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_4)) % WrapperStruct00.var_1_6)) {
		WrapperStruct00.var_1_5 = ((2066465504u - (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8)) + WrapperStruct00.var_1_9);
	} else {
		if (WrapperStruct00.var_1_9 >= WrapperStruct00.var_1_7) {
			WrapperStruct00.var_1_5 = WrapperStruct00.var_1_7;
		}
	}


	// From: Req3Batch146Wrapper_S
	if (WrapperStruct00.var_1_11) {
		if (WrapperStruct00.var_1_3 > WrapperStruct00.var_1_5) {
			WrapperStruct00.var_1_10 = (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13));
		}
	} else {
		if (((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_8) * WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_12 + WrapperStruct00.var_1_5)) {
			WrapperStruct00.var_1_10 = (128 - WrapperStruct00.var_1_15);
		}
	}


	// From: Req4Batch146Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_17;


	// From: Req5Batch146Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_13;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1073741823);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -536870911);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 536870911);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741823);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 536870912);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 536870911);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 254);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_17 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_1 == ((signed long int) (WrapperStruct00.var_1_2 + (min ((16 + WrapperStruct00.var_1_3) , (max (WrapperStruct00.var_1_4 , -32))))))) && ((WrapperStruct00.var_1_1 >= ((max (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_4)) % WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_5 == ((unsigned long int) ((2066465504u - (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_8)) + WrapperStruct00.var_1_9))) : ((WrapperStruct00.var_1_9 >= WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_5 == ((unsigned long int) WrapperStruct00.var_1_7)) : 1))) && (WrapperStruct00.var_1_11 ? ((WrapperStruct00.var_1_3 > WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_10 == ((unsigned char) (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13)))) : 1) : ((((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_8) * WrapperStruct00.var_1_13) < (WrapperStruct00.var_1_12 + WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_10 == ((unsigned char) (128 - WrapperStruct00.var_1_15))) : 1))) && (WrapperStruct00.var_1_16 == ((float) WrapperStruct00.var_1_17))) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_13))
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
