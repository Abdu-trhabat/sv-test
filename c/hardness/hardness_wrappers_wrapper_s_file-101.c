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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch101Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	double var_1_9;
	double var_1_10;
	double var_1_11;
	double var_1_12;
	double var_1_13;
	unsigned short int var_1_14;
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
	1,
	128,
	2,
	0,
	1,
	1,
	200,
	64.2,
	127.5,
	4.4,
	9999999999.25,
	16.25,
	5
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch101Wrapper_S
	signed long int stepLocal_1 = WrapperStruct00.var_1_5 + 128;
	unsigned char stepLocal_0 = WrapperStruct00.var_1_3;
	if (WrapperStruct00.var_1_2) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_3 - (WrapperStruct00.var_1_4 + (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6)));
	} else {
		if (WrapperStruct00.var_1_7) {
			if (stepLocal_0 > WrapperStruct00.var_1_6) {
				if (stepLocal_1 >= WrapperStruct00.var_1_4) {
					WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
				} else {
					WrapperStruct00.var_1_1 = 4;
				}
			} else {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
			}
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
		}
	}


	// From: Req2Batch101Wrapper_S
	if (WrapperStruct00.var_1_5 > WrapperStruct00.var_1_4) {
		WrapperStruct00.var_1_9 = (min (WrapperStruct00.var_1_10 , (max ((min (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)) , WrapperStruct00.var_1_13))));
	} else {
		if (WrapperStruct00.var_1_2) {
			WrapperStruct00.var_1_9 = 2.5;
		} else {
			WrapperStruct00.var_1_9 = WrapperStruct00.var_1_13;
		}
	}


	// From: Req3Batch101Wrapper_S
	if ((WrapperStruct00.var_1_1 / WrapperStruct00.var_1_3) > (-1000 % (abs (16)))) {
		WrapperStruct00.var_1_14 = WrapperStruct00.var_1_1;
	} else {
		WrapperStruct00.var_1_14 = 32;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 254);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 64);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 31);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 254);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_1 == ((unsigned char) (WrapperStruct00.var_1_3 - (WrapperStruct00.var_1_4 + (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_6))))) : (WrapperStruct00.var_1_7 ? ((WrapperStruct00.var_1_3 > WrapperStruct00.var_1_6) ? (((WrapperStruct00.var_1_5 + 128) >= WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_4)) : (WrapperStruct00.var_1_1 == ((unsigned char) 4))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_3))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_8)))) && ((WrapperStruct00.var_1_5 > WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_9 == ((double) (min (WrapperStruct00.var_1_10 , (max ((min (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)) , WrapperStruct00.var_1_13)))))) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_9 == ((double) 2.5)) : (WrapperStruct00.var_1_9 == ((double) WrapperStruct00.var_1_13))))) && (((WrapperStruct00.var_1_1 / WrapperStruct00.var_1_3) > (-1000 % (abs (16)))) ? (WrapperStruct00.var_1_14 == ((unsigned short int) WrapperStruct00.var_1_1)) : (WrapperStruct00.var_1_14 == ((unsigned short int) 32)))
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
