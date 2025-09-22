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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	float var_1_2;
	float var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed long int var_1_11;
	signed long int var_1_12;
	double var_1_13;
	double var_1_14;
	double var_1_15;
	double var_1_16;
	float var_1_17;
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
	256.625,
	100000000.25,
	8.5,
	1,
	0,
	0,
	1,
	0,
	4,
	2,
	0,
	1,
	0.25,
	5.2,
	100.5,
	25.1,
	7.4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch148Wrapper_S
	WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3);


	// From: Req4Batch148Wrapper_S
	WrapperStruct00.var_1_13 = ((WrapperStruct00.var_1_14 + (max (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_16))) - WrapperStruct00.var_1_2);


	// From: Req5Batch148Wrapper_S
	WrapperStruct00.var_1_17 = 1.00000007E7f;


	// From: Req2Batch148Wrapper_S
	if (WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6) {
		WrapperStruct00.var_1_4 = (! WrapperStruct00.var_1_7);
	} else {
		WrapperStruct00.var_1_4 = (! ((WrapperStruct00.var_1_13 > WrapperStruct00.var_1_3) || WrapperStruct00.var_1_7));
	}


	// From: Req3Batch148Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10;
	if (WrapperStruct00.var_1_17 < WrapperStruct00.var_1_3) {
		if (stepLocal_0 >= (WrapperStruct00.var_1_11 / WrapperStruct00.var_1_12)) {
			if (WrapperStruct00.var_1_4) {
				WrapperStruct00.var_1_8 = WrapperStruct00.var_1_7;
			} else {
				WrapperStruct00.var_1_8 = ((WrapperStruct00.var_1_9 < (~ WrapperStruct00.var_1_11)) || WrapperStruct00.var_1_7);
			}
		}
	} else {
		if (WrapperStruct00.var_1_4) {
			WrapperStruct00.var_1_8 = WrapperStruct00.var_1_7;
		} else {
			WrapperStruct00.var_1_8 = 0;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 127);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483647);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_12 != 0);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_1 == ((float) (WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3))) && ((WrapperStruct00.var_1_5 && WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_4 == ((unsigned char) (! WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_4 == ((unsigned char) (! ((WrapperStruct00.var_1_13 > WrapperStruct00.var_1_3) || WrapperStruct00.var_1_7)))))) && ((WrapperStruct00.var_1_17 < WrapperStruct00.var_1_3) ? (((WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10) >= (WrapperStruct00.var_1_11 / WrapperStruct00.var_1_12)) ? (WrapperStruct00.var_1_4 ? (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_8 == ((unsigned char) ((WrapperStruct00.var_1_9 < (~ WrapperStruct00.var_1_11)) || WrapperStruct00.var_1_7)))) : 1) : (WrapperStruct00.var_1_4 ? (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_8 == ((unsigned char) 0))))) && (WrapperStruct00.var_1_13 == ((double) ((WrapperStruct00.var_1_14 + (max (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_16))) - WrapperStruct00.var_1_2)))) && (WrapperStruct00.var_1_17 == ((float) 1.00000007E7f))
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
