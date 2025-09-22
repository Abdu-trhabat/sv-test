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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Wrapper_S.c", 13, "reach_error"); }
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
	float var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	signed long int var_1_8;
	signed long int var_1_9;
	signed long int var_1_10;
	float var_1_11;
	float var_1_12;
	float var_1_13;
	float var_1_14;
	double var_1_15;
	unsigned short int var_1_16;
	unsigned short int var_1_17;
	signed long int var_1_18;
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
	31.9,
	9.25,
	128.25,
	10.65,
	100.7,
	100.8,
	2.6,
	32,
	8,
	-1,
	64.5,
	0.25,
	100.25,
	100.5,
	32.125,
	0,
	1000,
	1000
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch199Wrapper_S
	if (WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) {
		if (WrapperStruct00.var_1_3 == WrapperStruct00.var_1_2) {
			if (WrapperStruct00.var_1_2 != 4.15f) {
				if ((min (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_3)) >= (min ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) , 3.9f))) {
					WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
				} else {
					WrapperStruct00.var_1_1 = 63.42f;
				}
			} else {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
			}
		}
	}


	// From: Req2Batch199Wrapper_S
	if ((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) < WrapperStruct00.var_1_10) {
		WrapperStruct00.var_1_7 = ((WrapperStruct00.var_1_11 - (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13))) + WrapperStruct00.var_1_14);
	} else {
		if (WrapperStruct00.var_1_10 < WrapperStruct00.var_1_9) {
			WrapperStruct00.var_1_7 = WrapperStruct00.var_1_13;
		} else {
			WrapperStruct00.var_1_7 = WrapperStruct00.var_1_12;
		}
	}


	// From: Req3Batch199Wrapper_S
	WrapperStruct00.var_1_15 = (abs (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_13));


	// From: Req4Batch199Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_17;


	// From: Req5Batch199Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_17;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_3) ? ((WrapperStruct00.var_1_3 == WrapperStruct00.var_1_2) ? ((WrapperStruct00.var_1_2 != 4.15f) ? (((min (WrapperStruct00.var_1_2 , WrapperStruct00.var_1_3)) >= (min ((WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5) , 3.9f))) ? (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((float) 63.42f))) : (WrapperStruct00.var_1_1 == ((float) WrapperStruct00.var_1_6))) : 1) : 1) && (((WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9) < WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_7 == ((float) ((WrapperStruct00.var_1_11 - (min (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_13))) + WrapperStruct00.var_1_14))) : ((WrapperStruct00.var_1_10 < WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_7 == ((float) WrapperStruct00.var_1_13)) : (WrapperStruct00.var_1_7 == ((float) WrapperStruct00.var_1_12))))) && (WrapperStruct00.var_1_15 == ((double) (abs (WrapperStruct00.var_1_11 + WrapperStruct00.var_1_13))))) && (WrapperStruct00.var_1_16 == ((unsigned short int) WrapperStruct00.var_1_17))) && (WrapperStruct00.var_1_18 == ((signed long int) WrapperStruct00.var_1_17))
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
