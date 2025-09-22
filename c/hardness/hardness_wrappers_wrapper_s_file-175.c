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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	float var_1_8;
	float var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	signed char var_1_12;
	unsigned short int var_1_13;
	signed char var_1_14;
	signed char var_1_15;
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
	32,
	32,
	64,
	128,
	8,
	32,
	31.625,
	99999.9,
	0,
	1,
	-1,
	1,
	-5,
	-16
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_1 = 32;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch175Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_3;
	if (last_1_WrapperStruct00_var_1_1 > stepLocal_0) {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
	} else {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 - (abs (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)));
	}


	// From: Req2Batch175Wrapper_S
	WrapperStruct00.var_1_8 = WrapperStruct00.var_1_9;


	// From: Req3Batch175Wrapper_S
	if (((min (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_7)) + WrapperStruct00.var_1_1) > WrapperStruct00.var_1_6) {
		WrapperStruct00.var_1_10 = (! WrapperStruct00.var_1_11);
	} else {
		WrapperStruct00.var_1_10 = 0;
	}


	// From: Req4Batch175Wrapper_S
	if (((~ WrapperStruct00.var_1_6) >= WrapperStruct00.var_1_7) && WrapperStruct00.var_1_10) {
		if (WrapperStruct00.var_1_13 <= (max (200 , 8))) {
			if (WrapperStruct00.var_1_10) {
				WrapperStruct00.var_1_12 = WrapperStruct00.var_1_6;
			}
		} else {
			WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_14);
		}
	} else {
		WrapperStruct00.var_1_12 = (max ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_6) , WrapperStruct00.var_1_14));
	}


	// From: Req5Batch175Wrapper_S
	WrapperStruct00.var_1_15 = WrapperStruct00.var_1_14;
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 254);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 254);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 64);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 65535);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
}

int property(void) {
	return (((((last_1_WrapperStruct00_var_1_1 > WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_4)) : (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_5 - (abs (WrapperStruct00.var_1_6 + WrapperStruct00.var_1_7)))))) && (WrapperStruct00.var_1_8 == ((float) WrapperStruct00.var_1_9))) && ((((min (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_7)) + WrapperStruct00.var_1_1) > WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_10 == ((unsigned char) (! WrapperStruct00.var_1_11))) : (WrapperStruct00.var_1_10 == ((unsigned char) 0)))) && ((((~ WrapperStruct00.var_1_6) >= WrapperStruct00.var_1_7) && WrapperStruct00.var_1_10) ? ((WrapperStruct00.var_1_13 <= (max (200 , 8))) ? (WrapperStruct00.var_1_10 ? (WrapperStruct00.var_1_12 == ((signed char) WrapperStruct00.var_1_6)) : 1) : (WrapperStruct00.var_1_12 == ((signed char) (WrapperStruct00.var_1_7 + WrapperStruct00.var_1_14)))) : (WrapperStruct00.var_1_12 == ((signed char) (max ((WrapperStruct00.var_1_7 - WrapperStruct00.var_1_6) , WrapperStruct00.var_1_14)))))) && (WrapperStruct00.var_1_15 == ((signed char) WrapperStruct00.var_1_14))
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
