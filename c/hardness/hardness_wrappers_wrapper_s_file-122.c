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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch122Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_2;
	unsigned long int var_1_3;
	double var_1_4;
	double var_1_5;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	signed long int var_1_9;
	unsigned char var_1_10;
	unsigned char var_1_11;
	signed long int var_1_12;
	signed long int var_1_13;
	signed long int var_1_14;
	signed long int var_1_15;
	float var_1_16;
	unsigned long int var_1_17;
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
	8,
	0,
	1,
	1.3,
	5.75,
	16.6,
	255.75,
	999999999.2,
	100,
	0,
	0,
	1999204289,
	32,
	1433281976,
	64,
	16.5,
	2427043635
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch122Wrapper_S
	WrapperStruct00.var_1_1 = (abs (min (1 , WrapperStruct00.var_1_2)));


	// From: Req2Batch122Wrapper_S
	if (WrapperStruct00.var_1_4 < WrapperStruct00.var_1_5) {
		WrapperStruct00.var_1_3 = ((abs (WrapperStruct00.var_1_1)) + WrapperStruct00.var_1_2);
	} else {
		WrapperStruct00.var_1_3 = WrapperStruct00.var_1_2;
	}


	// From: Req3Batch122Wrapper_S
	if (WrapperStruct00.var_1_4 >= WrapperStruct00.var_1_5) {
		WrapperStruct00.var_1_6 = (min (7.8 , (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_8)));
	}


	// From: Req4Batch122Wrapper_S
	unsigned long int stepLocal_1 = WrapperStruct00.var_1_3;
	unsigned char stepLocal_0 = WrapperStruct00.var_1_11;
	if (WrapperStruct00.var_1_10 || stepLocal_0) {
		WrapperStruct00.var_1_9 = 128;
	} else {
		if (WrapperStruct00.var_1_2 < stepLocal_1) {
			WrapperStruct00.var_1_9 = (min ((WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_3)) , (WrapperStruct00.var_1_13 - (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15))));
		}
	}


	// From: Req5Batch122Wrapper_S
	unsigned long int stepLocal_2 = WrapperStruct00.var_1_3;
	if (stepLocal_2 > (WrapperStruct00.var_1_14 % (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_12))) {
		WrapperStruct00.var_1_16 = WrapperStruct00.var_1_7;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 254);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483646);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 2147483646);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1073741823);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 4294967295);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_1 == ((unsigned char) (abs (min (1 , WrapperStruct00.var_1_2))))) && ((WrapperStruct00.var_1_4 < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_3 == ((unsigned long int) ((abs (WrapperStruct00.var_1_1)) + WrapperStruct00.var_1_2))) : (WrapperStruct00.var_1_3 == ((unsigned long int) WrapperStruct00.var_1_2)))) && ((WrapperStruct00.var_1_4 >= WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_6 == ((double) (min (7.8 , (WrapperStruct00.var_1_7 - WrapperStruct00.var_1_8))))) : 1)) && ((WrapperStruct00.var_1_10 || WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_9 == ((signed long int) 128)) : ((WrapperStruct00.var_1_2 < WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_9 == ((signed long int) (min ((WrapperStruct00.var_1_2 - (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_3)) , (WrapperStruct00.var_1_13 - (WrapperStruct00.var_1_14 - WrapperStruct00.var_1_15)))))) : 1))) && ((WrapperStruct00.var_1_3 > (WrapperStruct00.var_1_14 % (WrapperStruct00.var_1_17 - WrapperStruct00.var_1_12))) ? (WrapperStruct00.var_1_16 == ((float) WrapperStruct00.var_1_7)) : 1)
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
