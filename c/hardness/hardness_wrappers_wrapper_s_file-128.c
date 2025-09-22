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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch128Wrapper_S.c", 13, "reach_error"); }
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
	unsigned long int var_1_6;
	unsigned long int var_1_7;
	double var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned short int var_1_12;
	float var_1_13;
	float var_1_14;
	float var_1_15;
	double var_1_16;
	signed char var_1_17;
	signed char var_1_18;
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
	500.5,
	1,
	2,
	8,
	4,
	4136859421,
	8,
	64.5,
	1,
	0,
	0,
	10,
	99.8,
	0.0,
	256.9,
	5.74,
	0,
	32
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch128Wrapper_S
	unsigned long int stepLocal_1 = WrapperStruct00.var_1_4;
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_3 + (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5);
	if (WrapperStruct00.var_1_2 > stepLocal_0) {
		if (stepLocal_1 >= (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
		}
	}


	// From: Req2Batch128Wrapper_S
	unsigned long int stepLocal_3 = WrapperStruct00.var_1_5;
	unsigned char stepLocal_2 = WrapperStruct00.var_1_10;
	if ((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_3) || stepLocal_2) {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_11;
	} else {
		if ((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_12) < stepLocal_3) {
			WrapperStruct00.var_1_9 = WrapperStruct00.var_1_11;
		} else {
			WrapperStruct00.var_1_9 = 0;
		}
	}


	// From: Req3Batch128Wrapper_S
	if ((~ WrapperStruct00.var_1_6) < (WrapperStruct00.var_1_3 ^ WrapperStruct00.var_1_4)) {
		WrapperStruct00.var_1_13 = (abs ((WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15) - (abs (WrapperStruct00.var_1_8))));
	}


	// From: Req4Batch128Wrapper_S
	unsigned long int stepLocal_4 = WrapperStruct00.var_1_7 << WrapperStruct00.var_1_5;
	if ((WrapperStruct00.var_1_17 - WrapperStruct00.var_1_18) <= stepLocal_4) {
		WrapperStruct00.var_1_16 = WrapperStruct00.var_1_8;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 4294967295);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 4294967295);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967295);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 0);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 65535);
	assume_abort_if_not(WrapperStruct00.var_1_12 != 0);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 127);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 > (WrapperStruct00.var_1_3 + (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5))) ? ((WrapperStruct00.var_1_4 >= (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_8)) : 1) : 1) && (((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_3) || WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_9 == ((unsigned char) WrapperStruct00.var_1_11)) : (((WrapperStruct00.var_1_2 / WrapperStruct00.var_1_12) < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_9 == ((unsigned char) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_9 == ((unsigned char) 0))))) && (((~ WrapperStruct00.var_1_6) < (WrapperStruct00.var_1_3 ^ WrapperStruct00.var_1_4)) ? (WrapperStruct00.var_1_13 == ((float) (abs ((WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15) - (abs (WrapperStruct00.var_1_8)))))) : 1)) && (((WrapperStruct00.var_1_17 - WrapperStruct00.var_1_18) <= (WrapperStruct00.var_1_7 << WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_16 == ((double) WrapperStruct00.var_1_8)) : 1)
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
