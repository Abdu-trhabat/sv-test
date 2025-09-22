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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch110Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	signed long int var_1_3;
	signed long int var_1_4;
	signed long int var_1_5;
	signed long int var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	double var_1_10;
	unsigned long int var_1_11;
	unsigned long int var_1_12;
	double var_1_13;
	signed short int var_1_14;
	signed short int var_1_15;
	signed short int var_1_16;
	signed short int var_1_17;
	signed short int var_1_18;
	signed short int var_1_19;
	signed char var_1_20;
	unsigned char var_1_21;
	unsigned char var_1_22;
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
	0,
	1,
	-10,
	-1000,
	-16,
	0,
	1,
	0,
	15.15,
	2518712764,
	100,
	0.125,
	8,
	-32,
	2,
	16,
	10,
	64,
	-1,
	0,
	1
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch110Wrapper_S
	signed long int stepLocal_0 = (min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) / WrapperStruct00.var_1_6;
	if (WrapperStruct00.var_1_3 != stepLocal_0) {
		WrapperStruct00.var_1_1 = (! WrapperStruct00.var_1_7);
	} else {
		WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_7 && WrapperStruct00.var_1_8) && WrapperStruct00.var_1_9);
	}


	// From: Req2Batch110Wrapper_S
	if (WrapperStruct00.var_1_3 <= (WrapperStruct00.var_1_6 * (max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)))) {
		if ((min ((WrapperStruct00.var_1_6 * WrapperStruct00.var_1_4) , (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))) > (min (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_5))) {
			WrapperStruct00.var_1_10 = WrapperStruct00.var_1_13;
		}
	}


	// From: Req3Batch110Wrapper_S
	if (WrapperStruct00.var_1_1) {
		WrapperStruct00.var_1_14 = ((min (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_16)) + WrapperStruct00.var_1_17);
	} else {
		WrapperStruct00.var_1_14 = (WrapperStruct00.var_1_18 - WrapperStruct00.var_1_19);
	}


	// From: Req4Batch110Wrapper_S
	signed long int stepLocal_1 = WrapperStruct00.var_1_5;
	if (stepLocal_1 <= (WrapperStruct00.var_1_12 << (max (WrapperStruct00.var_1_21 , WrapperStruct00.var_1_22)))) {
		WrapperStruct00.var_1_20 = -64;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 2147483647);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_6 != 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967295);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 16383);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 16383);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 16383);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 32766);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 32766);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 1);
	WrapperStruct00.var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_22 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_22 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_3 != ((min (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) / WrapperStruct00.var_1_6)) ? (WrapperStruct00.var_1_1 == ((unsigned char) (! WrapperStruct00.var_1_7))) : (WrapperStruct00.var_1_1 == ((unsigned char) ((WrapperStruct00.var_1_7 && WrapperStruct00.var_1_8) && WrapperStruct00.var_1_9)))) && ((WrapperStruct00.var_1_3 <= (WrapperStruct00.var_1_6 * (max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)))) ? (((min ((WrapperStruct00.var_1_6 * WrapperStruct00.var_1_4) , (WrapperStruct00.var_1_11 - WrapperStruct00.var_1_12))) > (min (WrapperStruct00.var_1_3 , WrapperStruct00.var_1_5))) ? (WrapperStruct00.var_1_10 == ((double) WrapperStruct00.var_1_13)) : 1) : 1)) && (WrapperStruct00.var_1_1 ? (WrapperStruct00.var_1_14 == ((signed short int) ((min (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_16)) + WrapperStruct00.var_1_17))) : (WrapperStruct00.var_1_14 == ((signed short int) (WrapperStruct00.var_1_18 - WrapperStruct00.var_1_19))))) && ((WrapperStruct00.var_1_5 <= (WrapperStruct00.var_1_12 << (max (WrapperStruct00.var_1_21 , WrapperStruct00.var_1_22)))) ? (WrapperStruct00.var_1_20 == ((signed char) -64)) : 1)
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
