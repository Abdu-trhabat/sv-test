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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	signed long int var_1_2;
	unsigned char var_1_3;
	double var_1_4;
	signed short int var_1_5;
	signed short int var_1_6;
	signed short int var_1_7;
	signed short int var_1_8;
	double var_1_10;
	double var_1_11;
	double var_1_12;
	double var_1_13;
	double var_1_14;
	double var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	double var_1_20;
	double var_1_21;
	signed char var_1_22;
	signed char var_1_23;
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
	256.5,
	64,
	1,
	99999999999.6,
	-4,
	-2,
	-8,
	-4,
	255.6,
	128.25,
	32.5,
	8.8,
	16.75,
	3.4,
	1,
	1,
	100,
	128,
	100000000000.2,
	128.6,
	32,
	25
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_16 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch120Wrapper_S
	signed long int stepLocal_1 = WrapperStruct00.var_1_2;
	if (last_1_WrapperStruct00_var_1_16) {
		WrapperStruct00.var_1_5 = (max ((abs (WrapperStruct00.var_1_6 + -5)) , WrapperStruct00.var_1_7));
	} else {
		if ((WrapperStruct00.var_1_7 * WrapperStruct00.var_1_8) > stepLocal_1) {
			if (last_1_WrapperStruct00_var_1_16) {
				WrapperStruct00.var_1_5 = WrapperStruct00.var_1_6;
			}
		} else {
			WrapperStruct00.var_1_5 = -32;
		}
	}


	// From: Req4Batch120Wrapper_S
	signed short int stepLocal_2 = WrapperStruct00.var_1_5;
	if (stepLocal_2 != WrapperStruct00.var_1_8) {
		WrapperStruct00.var_1_16 = (WrapperStruct00.var_1_3 || WrapperStruct00.var_1_17);
	}


	// From: Req1Batch120Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_2;
	if (10 > stepLocal_0) {
		if (WrapperStruct00.var_1_16) {
			WrapperStruct00.var_1_1 = (abs (WrapperStruct00.var_1_4));
		}
	}


	// From: Req3Batch120Wrapper_S
	if (WrapperStruct00.var_1_2 > WrapperStruct00.var_1_6) {
		WrapperStruct00.var_1_10 = (min ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) , (WrapperStruct00.var_1_13 + (max (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15)))));
	}


	// From: Req5Batch120Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_19;


	// From: Req6Batch120Wrapper_S
	WrapperStruct00.var_1_20 = WrapperStruct00.var_1_21;


	// From: Req7Batch120Wrapper_S
	WrapperStruct00.var_1_22 = WrapperStruct00.var_1_23;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32766);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 32767);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 1);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 254);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_21 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_21 <= -1.0e-20F) || (WrapperStruct00.var_1_21 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_21 >= 1.0e-20F ));
	WrapperStruct00.var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_23 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_23 <= 126);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property(void) {
	return (((((((10 > WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_16 ? (WrapperStruct00.var_1_1 == ((double) (abs (WrapperStruct00.var_1_4)))) : 1) : 1) && (last_1_WrapperStruct00_var_1_16 ? (WrapperStruct00.var_1_5 == ((signed short int) (max ((abs (WrapperStruct00.var_1_6 + -5)) , WrapperStruct00.var_1_7)))) : (((WrapperStruct00.var_1_7 * WrapperStruct00.var_1_8) > WrapperStruct00.var_1_2) ? (last_1_WrapperStruct00_var_1_16 ? (WrapperStruct00.var_1_5 == ((signed short int) WrapperStruct00.var_1_6)) : 1) : (WrapperStruct00.var_1_5 == ((signed short int) -32))))) && ((WrapperStruct00.var_1_2 > WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_10 == ((double) (min ((WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12) , (WrapperStruct00.var_1_13 + (max (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))))))) : 1)) && ((WrapperStruct00.var_1_5 != WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_16 == ((unsigned char) (WrapperStruct00.var_1_3 || WrapperStruct00.var_1_17))) : 1)) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_19))) && (WrapperStruct00.var_1_20 == ((double) WrapperStruct00.var_1_21))) && (WrapperStruct00.var_1_22 == ((signed char) WrapperStruct00.var_1_23))
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
