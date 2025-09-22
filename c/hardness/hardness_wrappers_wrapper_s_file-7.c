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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	float var_1_3;
	float var_1_4;
	unsigned char var_1_6;
	unsigned short int var_1_7;
	unsigned char var_1_8;
	signed long int var_1_9;
	float var_1_10;
	unsigned char var_1_11;
	float var_1_12;
	float var_1_13;
	float var_1_14;
	float var_1_15;
	unsigned long int var_1_16;
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
	8.2,
	100000000000.4,
	4,
	25,
	0,
	4,
	63.6,
	1,
	0.0,
	4.6,
	31.4,
	9.9,
	64
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch7Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_6;


	// From: Req2Batch7Wrapper_S
	signed long int stepLocal_0 = ~ WrapperStruct00.var_1_6;
	if (WrapperStruct00.var_1_8) {
		if (stepLocal_0 < (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_9)) {
			WrapperStruct00.var_1_7 = WrapperStruct00.var_1_6;
		}
	}


	// From: Req3Batch7Wrapper_S
	unsigned char stepLocal_1 = -256 == (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_16);
	if (WrapperStruct00.var_1_8) {
		if (stepLocal_1 || WrapperStruct00.var_1_11) {
			WrapperStruct00.var_1_10 = ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) - WrapperStruct00.var_1_14);
		} else {
			WrapperStruct00.var_1_10 = (abs (WrapperStruct00.var_1_14 - (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_15)));
		}
	} else {
		WrapperStruct00.var_1_10 = (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_15));
	}


	// From: Req1Batch7Wrapper_S
	if (! (WrapperStruct00.var_1_10 <= (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4))) {
		if (-1 < WrapperStruct00.var_1_16) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
		} else {
			WrapperStruct00.var_1_1 = 128;
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 254);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((! (WrapperStruct00.var_1_10 <= (WrapperStruct00.var_1_3 - WrapperStruct00.var_1_4))) ? ((-1 < WrapperStruct00.var_1_16) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((unsigned char) 128))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6))) && (WrapperStruct00.var_1_8 ? (((~ WrapperStruct00.var_1_6) < (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_9)) ? (WrapperStruct00.var_1_7 == ((unsigned short int) WrapperStruct00.var_1_6)) : 1) : 1)) && (WrapperStruct00.var_1_8 ? (((-256 == (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_16)) || WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_10 == ((float) ((WrapperStruct00.var_1_12 - WrapperStruct00.var_1_13) - WrapperStruct00.var_1_14))) : (WrapperStruct00.var_1_10 == ((float) (abs (WrapperStruct00.var_1_14 - (WrapperStruct00.var_1_13 + WrapperStruct00.var_1_15)))))) : (WrapperStruct00.var_1_10 == ((float) (max (WrapperStruct00.var_1_12 , WrapperStruct00.var_1_15)))))) && (WrapperStruct00.var_1_16 == ((unsigned long int) WrapperStruct00.var_1_6))
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
