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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	signed char var_1_4;
	signed long int var_1_6;
	signed long int var_1_7;
	signed long int var_1_8;
	signed char var_1_9;
	float var_1_10;
	float var_1_11;
	signed char var_1_12;
	float var_1_13;
	float var_1_14;
	float var_1_15;
	float var_1_16;
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
	16,
	0,
	1,
	8,
	0,
	16,
	16,
	8,
	63.25,
	63.375,
	-4,
	3.2,
	9.13,
	31.5,
	24.625
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch140Wrapper_S
	if ((- 256.5f) > (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11)) {
		if (WrapperStruct00.var_1_11 >= WrapperStruct00.var_1_10) {
			WrapperStruct00.var_1_9 = WrapperStruct00.var_1_12;
		}
	} else {
		WrapperStruct00.var_1_9 = WrapperStruct00.var_1_12;
	}


	// From: Req3Batch140Wrapper_S
	if (WrapperStruct00.var_1_8 >= WrapperStruct00.var_1_12) {
		WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
	} else {
		WrapperStruct00.var_1_13 = (WrapperStruct00.var_1_15 + (WrapperStruct00.var_1_16 - 2.6f));
	}


	// From: Req1Batch140Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_2;
	signed long int stepLocal_0 = -5 * -8;
	if (stepLocal_1 && WrapperStruct00.var_1_3) {
		if ((max ((abs (WrapperStruct00.var_1_4)) , WrapperStruct00.var_1_9)) < stepLocal_0) {
			WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7);
		} else {
			if (WrapperStruct00.var_1_3) {
				WrapperStruct00.var_1_1 = (max ((max ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_9) , WrapperStruct00.var_1_7)) , (max (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_8))));
			} else {
				WrapperStruct00.var_1_1 = 4;
			}
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 127);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483646);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483646);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483646);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 126);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((WrapperStruct00.var_1_2 && WrapperStruct00.var_1_3) ? (((max ((abs (WrapperStruct00.var_1_4)) , WrapperStruct00.var_1_9)) < (-5 * -8)) ? (WrapperStruct00.var_1_1 == ((signed long int) (WrapperStruct00.var_1_6 - WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_3 ? (WrapperStruct00.var_1_1 == ((signed long int) (max ((max ((WrapperStruct00.var_1_4 + WrapperStruct00.var_1_9) , WrapperStruct00.var_1_7)) , (max (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_8)))))) : (WrapperStruct00.var_1_1 == ((signed long int) 4)))) : 1) && (((- 256.5f) > (WrapperStruct00.var_1_10 - WrapperStruct00.var_1_11)) ? ((WrapperStruct00.var_1_11 >= WrapperStruct00.var_1_10) ? (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_12)) : 1) : (WrapperStruct00.var_1_9 == ((signed char) WrapperStruct00.var_1_12)))) && ((WrapperStruct00.var_1_8 >= WrapperStruct00.var_1_12) ? (WrapperStruct00.var_1_13 == ((float) WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_13 == ((float) (WrapperStruct00.var_1_15 + (WrapperStruct00.var_1_16 - 2.6f)))))
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
