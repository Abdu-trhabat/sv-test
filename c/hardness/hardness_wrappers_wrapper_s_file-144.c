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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch144Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	double var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	double var_1_12;
	signed char var_1_13;
	signed char var_1_14;
	signed char var_1_15;
	signed char var_1_16;
	signed long int var_1_17;
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
	1,
	0,
	0,
	0,
	0,
	9999999.4,
	2.125,
	0.29,
	-0.5,
	1000.7,
	-10,
	2,
	10,
	-5,
	1
};

// Calibration values

// Last'ed variables
signed char last_1_WrapperStruct00_var_1_16 = -5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch144Wrapper_S
	if ((abs (last_1_WrapperStruct00_var_1_16)) <= (WrapperStruct00.var_1_14 / (max (WrapperStruct00.var_1_17 , -1)))) {
		if (WrapperStruct00.var_1_5) {
			WrapperStruct00.var_1_16 = WrapperStruct00.var_1_15;
		} else {
			WrapperStruct00.var_1_16 = WrapperStruct00.var_1_14;
		}
	} else {
		WrapperStruct00.var_1_16 = -8;
	}


	// From: Req2Batch144Wrapper_S
	signed long int stepLocal_1 = -256;
	if ((WrapperStruct00.var_1_16 / 200) <= stepLocal_1) {
		if ((min ((WrapperStruct00.var_1_9 * WrapperStruct00.var_1_10) , WrapperStruct00.var_1_11)) != 16.5f) {
			WrapperStruct00.var_1_8 = 4.4;
		}
	} else {
		WrapperStruct00.var_1_8 = WrapperStruct00.var_1_12;
	}


	// From: Req3Batch144Wrapper_S
	if (WrapperStruct00.var_1_9 <= WrapperStruct00.var_1_8) {
		WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_14 + -50);
	} else {
		if (WrapperStruct00.var_1_4) {
			WrapperStruct00.var_1_13 = (25 - WrapperStruct00.var_1_15);
		}
	}


	// From: Req1Batch144Wrapper_S
	signed char stepLocal_0 = WrapperStruct00.var_1_13;
	if (stepLocal_0 < WrapperStruct00.var_1_16) {
		WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_4 || WrapperStruct00.var_1_5) || (WrapperStruct00.var_1_6 || WrapperStruct00.var_1_7));
	} else {
		WrapperStruct00.var_1_1 = (! WrapperStruct00.var_1_7);
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 126);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_17 != 0);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property(void) {
	return ((((WrapperStruct00.var_1_13 < WrapperStruct00.var_1_16) ? (WrapperStruct00.var_1_1 == ((unsigned char) ((WrapperStruct00.var_1_4 || WrapperStruct00.var_1_5) || (WrapperStruct00.var_1_6 || WrapperStruct00.var_1_7)))) : (WrapperStruct00.var_1_1 == ((unsigned char) (! WrapperStruct00.var_1_7)))) && (((WrapperStruct00.var_1_16 / 200) <= -256) ? (((min ((WrapperStruct00.var_1_9 * WrapperStruct00.var_1_10) , WrapperStruct00.var_1_11)) != 16.5f) ? (WrapperStruct00.var_1_8 == ((double) 4.4)) : 1) : (WrapperStruct00.var_1_8 == ((double) WrapperStruct00.var_1_12)))) && ((WrapperStruct00.var_1_9 <= WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_13 == ((signed char) (WrapperStruct00.var_1_14 + -50))) : (WrapperStruct00.var_1_4 ? (WrapperStruct00.var_1_13 == ((signed char) (25 - WrapperStruct00.var_1_15))) : 1))) && (((abs (last_1_WrapperStruct00_var_1_16)) <= (WrapperStruct00.var_1_14 / (max (WrapperStruct00.var_1_17 , -1)))) ? (WrapperStruct00.var_1_5 ? (WrapperStruct00.var_1_16 == ((signed char) WrapperStruct00.var_1_15)) : (WrapperStruct00.var_1_16 == ((signed char) WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_16 == ((signed char) -8)))
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
