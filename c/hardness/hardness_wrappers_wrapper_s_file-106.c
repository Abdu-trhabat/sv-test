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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch106Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	signed long int var_1_2;
	float var_1_3;
	unsigned char var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	float var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed long int var_1_11;
	signed short int var_1_12;
	unsigned char var_1_13;
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
	-64,
	-4,
	4.95,
	1,
	63.5,
	127.5,
	100.875,
	15.2,
	32,
	2,
	25,
	-2,
	0
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch106Wrapper_S
	WrapperStruct00.var_1_1 = WrapperStruct00.var_1_2;


	// From: Req2Batch106Wrapper_S
	signed long int stepLocal_1 = WrapperStruct00.var_1_1;
	signed long int stepLocal_0 = WrapperStruct00.var_1_2;
	if (! WrapperStruct00.var_1_4) {
		if (stepLocal_0 >= WrapperStruct00.var_1_1) {
			WrapperStruct00.var_1_3 = (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6);
		} else {
			if (stepLocal_1 <= WrapperStruct00.var_1_2) {
				WrapperStruct00.var_1_3 = (min ((min (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_5)) , WrapperStruct00.var_1_7));
			}
		}
	} else {
		WrapperStruct00.var_1_3 = 64.6f;
	}


	// From: Req3Batch106Wrapper_S
	signed long int stepLocal_3 = (max (WrapperStruct00.var_1_9 , WrapperStruct00.var_1_10)) >> WrapperStruct00.var_1_11;
	unsigned char stepLocal_2 = WrapperStruct00.var_1_4;
	if ((WrapperStruct00.var_1_5 == WrapperStruct00.var_1_7) || stepLocal_2) {
		if (stepLocal_3 >= (WrapperStruct00.var_1_2 + -32)) {
			WrapperStruct00.var_1_8 = WrapperStruct00.var_1_5;
		} else {
			WrapperStruct00.var_1_8 = WrapperStruct00.var_1_6;
		}
	} else {
		WrapperStruct00.var_1_8 = WrapperStruct00.var_1_5;
	}


	// From: Req4Batch106Wrapper_S
	unsigned char stepLocal_4 = WrapperStruct00.var_1_13;
	if (WrapperStruct00.var_1_4) {
		if ((8 > WrapperStruct00.var_1_10) || stepLocal_4) {
			if (WrapperStruct00.var_1_13) {
				WrapperStruct00.var_1_12 = WrapperStruct00.var_1_11;
			} else {
				WrapperStruct00.var_1_12 = WrapperStruct00.var_1_9;
			}
		} else {
			WrapperStruct00.var_1_12 = WrapperStruct00.var_1_11;
		}
	} else {
		WrapperStruct00.var_1_12 = WrapperStruct00.var_1_11;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483646);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 127);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 30);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((WrapperStruct00.var_1_1 == ((signed long int) WrapperStruct00.var_1_2)) && ((! WrapperStruct00.var_1_4) ? ((WrapperStruct00.var_1_2 >= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_3 == ((float) (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6))) : ((WrapperStruct00.var_1_1 <= WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_3 == ((float) (min ((min (WrapperStruct00.var_1_6 , WrapperStruct00.var_1_5)) , WrapperStruct00.var_1_7)))) : 1)) : (WrapperStruct00.var_1_3 == ((float) 64.6f)))) && (((WrapperStruct00.var_1_5 == WrapperStruct00.var_1_7) || WrapperStruct00.var_1_4) ? ((((max (WrapperStruct00.var_1_9 , WrapperStruct00.var_1_10)) >> WrapperStruct00.var_1_11) >= (WrapperStruct00.var_1_2 + -32)) ? (WrapperStruct00.var_1_8 == ((float) WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_8 == ((float) WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_8 == ((float) WrapperStruct00.var_1_5)))) && (WrapperStruct00.var_1_4 ? (((8 > WrapperStruct00.var_1_10) || WrapperStruct00.var_1_13) ? (WrapperStruct00.var_1_13 ? (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_11)) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_9))) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_12 == ((signed short int) WrapperStruct00.var_1_11)))
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
