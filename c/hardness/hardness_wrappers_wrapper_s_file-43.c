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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch43Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	float var_1_2;
	float var_1_3;
	float var_1_4;
	float var_1_5;
	unsigned char var_1_6;
	signed short int var_1_7;
	signed short int var_1_8;
	signed short int var_1_9;
	signed short int var_1_10;
	unsigned char var_1_11;
	signed short int var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
	unsigned long int var_1_21;
	unsigned short int var_1_22;
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
	64,
	4.5,
	64.8,
	64.4,
	0.2,
	0,
	10000,
	1,
	50,
	8,
	1,
	5,
	2,
	100,
	100,
	128,
	2,
	1,
	0,
	2,
	32,
	4
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch43Wrapper_S
	signed long int stepLocal_1 = -25;
	signed long int stepLocal_0 = WrapperStruct00.var_1_9 << WrapperStruct00.var_1_10;
	if (WrapperStruct00.var_1_12 > stepLocal_0) {
		if ((WrapperStruct00.var_1_9 / WrapperStruct00.var_1_7) > stepLocal_1) {
			WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;
		} else {
			WrapperStruct00.var_1_13 = 100;
		}
	}


	// From: Req3Batch43Wrapper_S
	WrapperStruct00.var_1_15 = (abs (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17));


	// From: Req4Batch43Wrapper_S
	if (WrapperStruct00.var_1_6) {
		WrapperStruct00.var_1_18 = (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_19);
	}


	// From: Req5Batch43Wrapper_S
	WrapperStruct00.var_1_20 = WrapperStruct00.var_1_16;


	// From: Req6Batch43Wrapper_S
	WrapperStruct00.var_1_21 = WrapperStruct00.var_1_9;


	// From: Req7Batch43Wrapper_S
	WrapperStruct00.var_1_22 = 10;


	// From: Req1Batch43Wrapper_S
	if (WrapperStruct00.var_1_2 != (max (WrapperStruct00.var_1_3 , (WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5)))) {
		if (WrapperStruct00.var_1_18) {
			WrapperStruct00.var_1_1 = (((WrapperStruct00.var_1_7 - 32) + (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9)) - WrapperStruct00.var_1_10);
		}
	} else {
		if (WrapperStruct00.var_1_18) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_12;
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
		}
	}
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
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 16383);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 8192);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 8191);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32766);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32766);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 254);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 127);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((WrapperStruct00.var_1_2 != (max (WrapperStruct00.var_1_3 , (WrapperStruct00.var_1_4 - WrapperStruct00.var_1_5)))) ? (WrapperStruct00.var_1_18 ? (WrapperStruct00.var_1_1 == ((signed short int) (((WrapperStruct00.var_1_7 - 32) + (WrapperStruct00.var_1_8 + WrapperStruct00.var_1_9)) - WrapperStruct00.var_1_10))) : 1) : (WrapperStruct00.var_1_18 ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_12)) : (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_8)))) && ((WrapperStruct00.var_1_12 > (WrapperStruct00.var_1_9 << WrapperStruct00.var_1_10)) ? (((WrapperStruct00.var_1_9 / WrapperStruct00.var_1_7) > -25) ? (WrapperStruct00.var_1_13 == ((unsigned char) WrapperStruct00.var_1_14)) : (WrapperStruct00.var_1_13 == ((unsigned char) 100))) : 1)) && (WrapperStruct00.var_1_15 == ((unsigned char) (abs (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_17))))) && (WrapperStruct00.var_1_6 ? (WrapperStruct00.var_1_18 == ((unsigned char) (WrapperStruct00.var_1_11 && WrapperStruct00.var_1_19))) : 1)) && (WrapperStruct00.var_1_20 == ((unsigned char) WrapperStruct00.var_1_16))) && (WrapperStruct00.var_1_21 == ((unsigned long int) WrapperStruct00.var_1_9))) && (WrapperStruct00.var_1_22 == ((unsigned short int) 10))
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
