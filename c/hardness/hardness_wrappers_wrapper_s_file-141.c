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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed char var_1_1;
	float var_1_2;
	float var_1_3;
	signed char var_1_4;
	signed char var_1_5;
	signed char var_1_6;
	signed char var_1_7;
	signed short int var_1_8;
	unsigned char var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	double var_1_13;
	signed long int var_1_14;
	double var_1_15;
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
	0.8,
	99.25,
	50,
	4,
	4,
	10,
	64,
	0,
	8,
	2,
	128,
	5.2,
	10,
	9.7
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch141Wrapper_S
	if (WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_1 = (max ((-32 + WrapperStruct00.var_1_4) , (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6))));
	} else {
		WrapperStruct00.var_1_1 = ((1 - WrapperStruct00.var_1_7) + WrapperStruct00.var_1_4);
	}


	// From: Req2Batch141Wrapper_S
	if (WrapperStruct00.var_1_9 || ((WrapperStruct00.var_1_7 / WrapperStruct00.var_1_10) <= (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_4))) {
		WrapperStruct00.var_1_8 = WrapperStruct00.var_1_7;
	}


	// From: Req3Batch141Wrapper_S
	WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_7);


	// From: Req4Batch141Wrapper_S
	signed long int stepLocal_1 = -100;
	signed long int stepLocal_0 = 4;
	if (stepLocal_1 >= WrapperStruct00.var_1_4) {
		if (WrapperStruct00.var_1_2 > 63.5f) {
			if (! ((64 >> WrapperStruct00.var_1_14) >= WrapperStruct00.var_1_5)) {
				if (stepLocal_0 >= WrapperStruct00.var_1_8) {
					WrapperStruct00.var_1_13 = (max (WrapperStruct00.var_1_15 , 10.2));
				}
			} else {
				WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
			}
		} else {
			WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 63);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 126);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 126);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 63);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 255);
	assume_abort_if_not(WrapperStruct00.var_1_10 != 0);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 30);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((signed char) (max ((-32 + WrapperStruct00.var_1_4) , (max (WrapperStruct00.var_1_5 , WrapperStruct00.var_1_6)))))) : (WrapperStruct00.var_1_1 == ((signed char) ((1 - WrapperStruct00.var_1_7) + WrapperStruct00.var_1_4)))) && ((WrapperStruct00.var_1_9 || ((WrapperStruct00.var_1_7 / WrapperStruct00.var_1_10) <= (WrapperStruct00.var_1_6 * WrapperStruct00.var_1_4))) ? (WrapperStruct00.var_1_8 == ((signed short int) WrapperStruct00.var_1_7)) : 1)) && (WrapperStruct00.var_1_11 == ((unsigned char) (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_7)))) && ((-100 >= WrapperStruct00.var_1_4) ? ((WrapperStruct00.var_1_2 > 63.5f) ? ((! ((64 >> WrapperStruct00.var_1_14) >= WrapperStruct00.var_1_5)) ? ((4 >= WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_13 == ((double) (max (WrapperStruct00.var_1_15 , 10.2)))) : 1) : (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_15))) : (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_15))) : 1)
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
