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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed long int var_1_2;
	signed short int var_1_5;
	signed short int var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	float var_1_12;
	signed long int var_1_13;
	unsigned char var_1_14;
	float var_1_15;
	signed long int var_1_16;
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
	-10,
	100,
	4,
	0,
	200,
	32,
	256.5,
	-0.25,
	0.30000000000000004,
	49.5,
	-8,
	0,
	0.4,
	-256
};

// Calibration values

// Last'ed variables
signed long int last_1_WrapperStruct00_var_1_13 = -8;
signed long int last_1_WrapperStruct00_var_1_16 = -256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch33Wrapper_S
	signed long int stepLocal_0 = (last_1_WrapperStruct00_var_1_16 ^ last_1_WrapperStruct00_var_1_13) + last_1_WrapperStruct00_var_1_13;
	if (stepLocal_0 < -1) {
		WrapperStruct00.var_1_1 = 8;
	} else {
		WrapperStruct00.var_1_1 = (128 - (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6));
	}


	// From: Req5Batch33Wrapper_S
	WrapperStruct00.var_1_15 = WrapperStruct00.var_1_11;


	// From: Req6Batch33Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_6;


	// From: Req2Batch33Wrapper_S
	if (WrapperStruct00.var_1_5 < WrapperStruct00.var_1_16) {
		WrapperStruct00.var_1_7 = (WrapperStruct00.var_1_8 + 1);
	}


	// From: Req3Batch33Wrapper_S
	if (WrapperStruct00.var_1_6 < (WrapperStruct00.var_1_16 & (WrapperStruct00.var_1_5 | WrapperStruct00.var_1_16))) {
		WrapperStruct00.var_1_9 = (abs (WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12)));
	}


	// From: Req4Batch33Wrapper_S
	signed short int stepLocal_1 = WrapperStruct00.var_1_6;
	if (! WrapperStruct00.var_1_14) {
		WrapperStruct00.var_1_13 = WrapperStruct00.var_1_8;
	} else {
		if (stepLocal_1 > (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_7)) {
			WrapperStruct00.var_1_13 = WrapperStruct00.var_1_7;
		} else {
			WrapperStruct00.var_1_13 = WrapperStruct00.var_1_1;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 16383);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 127);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= 0.0F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= 0.0F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property(void) {
	return ((((((((last_1_WrapperStruct00_var_1_16 ^ last_1_WrapperStruct00_var_1_13) + last_1_WrapperStruct00_var_1_13) < -1) ? (WrapperStruct00.var_1_1 == ((signed short int) 8)) : (WrapperStruct00.var_1_1 == ((signed short int) (128 - (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6))))) && ((WrapperStruct00.var_1_5 < WrapperStruct00.var_1_16) ? (WrapperStruct00.var_1_7 == ((unsigned char) (WrapperStruct00.var_1_8 + 1))) : 1)) && ((WrapperStruct00.var_1_6 < (WrapperStruct00.var_1_16 & (WrapperStruct00.var_1_5 | WrapperStruct00.var_1_16))) ? (WrapperStruct00.var_1_9 == ((float) (abs (WrapperStruct00.var_1_10 + (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))))) : 1)) && ((! WrapperStruct00.var_1_14) ? (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_8)) : ((WrapperStruct00.var_1_6 > (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_7)) ? (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_7)) : (WrapperStruct00.var_1_13 == ((signed long int) WrapperStruct00.var_1_1))))) && (WrapperStruct00.var_1_15 == ((float) WrapperStruct00.var_1_11))) && (WrapperStruct00.var_1_16 == ((signed long int) WrapperStruct00.var_1_6))
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
