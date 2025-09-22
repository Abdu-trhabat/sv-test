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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned long int var_1_4;
	unsigned long int var_1_5;
	float var_1_6;
	float var_1_7;
	float var_1_8;
	double var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	signed short int var_1_13;
	signed short int var_1_14;
	signed short int var_1_15;
	unsigned char var_1_16;
	unsigned short int var_1_17;
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
	0.9,
	128,
	2941876006,
	200,
	256,
	63.5,
	-0.151,
	0.8,
	9.5,
	0,
	0,
	0,
	-2,
	50,
	8,
	10,
	8,
	16
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch64Wrapper_S
	unsigned long int stepLocal_1 = WrapperStruct00.var_1_2;
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_3;
	if (stepLocal_1 <= (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4)) {
		if (stepLocal_0 < (max ((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_5) , WrapperStruct00.var_1_4))) {
			if ((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) > WrapperStruct00.var_1_8) {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
			}
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_9;
		}
	}


	// From: Req2Batch64Wrapper_S
	if (WrapperStruct00.var_1_6 < WrapperStruct00.var_1_1) {
		WrapperStruct00.var_1_10 = (! (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_12));
	}


	// From: Req3Batch64Wrapper_S
	if (WrapperStruct00.var_1_10) {
		if (WrapperStruct00.var_1_12 || (WrapperStruct00.var_1_8 < (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_7))) {
			WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15);
		}
	}


	// From: Req4Batch64Wrapper_S
	unsigned long int stepLocal_2 = WrapperStruct00.var_1_2 & (WrapperStruct00.var_1_5 / WrapperStruct00.var_1_17);
	if (stepLocal_2 > WrapperStruct00.var_1_3) {
		if (! WrapperStruct00.var_1_10) {
			WrapperStruct00.var_1_16 = WrapperStruct00.var_1_18;
		} else {
			WrapperStruct00.var_1_16 = 2;
		}
	} else {
		WrapperStruct00.var_1_16 = WrapperStruct00.var_1_18;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
	assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 16383);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 16383);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_17 != 0);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 <= (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4)) ? ((WrapperStruct00.var_1_3 < (max ((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_5) , WrapperStruct00.var_1_4))) ? (((WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7) > WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_9)) : 1) : (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_9))) : 1) && ((WrapperStruct00.var_1_6 < WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_10 == ((unsigned char) (! (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_12)))) : 1)) && (WrapperStruct00.var_1_10 ? ((WrapperStruct00.var_1_12 || (WrapperStruct00.var_1_8 < (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_7))) ? (WrapperStruct00.var_1_13 == ((signed short int) (WrapperStruct00.var_1_14 + WrapperStruct00.var_1_15))) : 1) : 1)) && (((WrapperStruct00.var_1_2 & (WrapperStruct00.var_1_5 / WrapperStruct00.var_1_17)) > WrapperStruct00.var_1_3) ? ((! WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_16 == ((unsigned char) WrapperStruct00.var_1_18)) : (WrapperStruct00.var_1_16 == ((unsigned char) 2))) : (WrapperStruct00.var_1_16 == ((unsigned char) WrapperStruct00.var_1_18)))
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
