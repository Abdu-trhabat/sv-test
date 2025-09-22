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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	unsigned long int var_1_2;
	double var_1_3;
	signed char var_1_4;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	double var_1_16;
	double var_1_17;
	double var_1_18;
	double var_1_19;
	double var_1_21;
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
	5,
	8,
	9.15,
	2,
	1000000.875,
	49.25,
	-0.8,
	100000000000.6,
	0,
	0,
	0,
	0,
	0,
	1,
	24.125,
	0.7,
	0.0,
	25.7,
	-0.375
};

// Calibration values

// Last'ed variables
double last_1_WrapperStruct00_var_1_3 = 9.15;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch10Wrapper_S
	WrapperStruct00.var_1_1 = WrapperStruct00.var_1_2;


	// From: Req2Batch10Wrapper_S
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_1;
	if (WrapperStruct00.var_1_4 < stepLocal_0) {
		WrapperStruct00.var_1_3 = -0.5;
	} else {
		if ((- last_1_WrapperStruct00_var_1_3) == (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)) {
			WrapperStruct00.var_1_3 = WrapperStruct00.var_1_8;
		} else {
			WrapperStruct00.var_1_3 = WrapperStruct00.var_1_9;
		}
	}


	// From: Req3Batch10Wrapper_S
	if (WrapperStruct00.var_1_11) {
		if (WrapperStruct00.var_1_2 <= 1u) {
			WrapperStruct00.var_1_10 = (! (WrapperStruct00.var_1_12 && (WrapperStruct00.var_1_13 || WrapperStruct00.var_1_14)));
		} else {
			WrapperStruct00.var_1_10 = (! (WrapperStruct00.var_1_14 && WrapperStruct00.var_1_13));
		}
	} else {
		WrapperStruct00.var_1_10 = (! WrapperStruct00.var_1_15);
	}


	// From: Req4Batch10Wrapper_S
	if (WrapperStruct00.var_1_10) {
		WrapperStruct00.var_1_16 = (WrapperStruct00.var_1_17 - (WrapperStruct00.var_1_18 - WrapperStruct00.var_1_19));
	} else {
		if ((WrapperStruct00.var_1_10 || WrapperStruct00.var_1_15) && (WrapperStruct00.var_1_6 <= WrapperStruct00.var_1_8)) {
			WrapperStruct00.var_1_16 = WrapperStruct00.var_1_21;
		} else {
			WrapperStruct00.var_1_16 = 64.5;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967294);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_17 >= 0.0F && WrapperStruct00.var_1_17 <= -1.0e-20F) || (WrapperStruct00.var_1_17 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_17 >= 1.0e-20F ));
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_18 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_19 >= 0.0F && WrapperStruct00.var_1_19 <= -1.0e-20F) || (WrapperStruct00.var_1_19 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_19 >= 1.0e-20F ));
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_21 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_3 = WrapperStruct00.var_1_3;
}

int property(void) {
	return (((WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_2)) && ((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_3 == ((double) -0.5)) : (((- last_1_WrapperStruct00_var_1_3) == (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_3 == ((double) WrapperStruct00.var_1_8)) : (WrapperStruct00.var_1_3 == ((double) WrapperStruct00.var_1_9))))) && (WrapperStruct00.var_1_11 ? ((WrapperStruct00.var_1_2 <= 1u) ? (WrapperStruct00.var_1_10 == ((unsigned char) (! (WrapperStruct00.var_1_12 && (WrapperStruct00.var_1_13 || WrapperStruct00.var_1_14))))) : (WrapperStruct00.var_1_10 == ((unsigned char) (! (WrapperStruct00.var_1_14 && WrapperStruct00.var_1_13))))) : (WrapperStruct00.var_1_10 == ((unsigned char) (! WrapperStruct00.var_1_15))))) && (WrapperStruct00.var_1_10 ? (WrapperStruct00.var_1_16 == ((double) (WrapperStruct00.var_1_17 - (WrapperStruct00.var_1_18 - WrapperStruct00.var_1_19)))) : (((WrapperStruct00.var_1_10 || WrapperStruct00.var_1_15) && (WrapperStruct00.var_1_6 <= WrapperStruct00.var_1_8)) ? (WrapperStruct00.var_1_16 == ((double) WrapperStruct00.var_1_21)) : (WrapperStruct00.var_1_16 == ((double) 64.5))))
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
