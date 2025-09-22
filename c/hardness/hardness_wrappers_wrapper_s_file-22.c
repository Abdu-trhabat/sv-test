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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch22Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	unsigned char var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_6;
	float var_1_7;
	float var_1_8;
	float var_1_9;
	float var_1_10;
	unsigned long int var_1_11;
	unsigned long int var_1_12;
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
	-5,
	5,
	25,
	0,
	256,
	44772,
	5.9,
	7.6,
	64.2,
	128.75,
	8,
	3135928546
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch22Wrapper_S
	if (WrapperStruct00.var_1_2 == WrapperStruct00.var_1_3) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_2 + -16);
	} else {
		if (WrapperStruct00.var_1_4) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
		}
	}


	// From: Req2Batch22Wrapper_S
	signed short int stepLocal_0 = WrapperStruct00.var_1_1;
	if (WrapperStruct00.var_1_4) {
		WrapperStruct00.var_1_5 = WrapperStruct00.var_1_2;
	} else {
		if (WrapperStruct00.var_1_2 <= stepLocal_0) {
			WrapperStruct00.var_1_5 = (max (WrapperStruct00.var_1_3 , (WrapperStruct00.var_1_6 - 8)));
		}
	}


	// From: Req4Batch22Wrapper_S
	unsigned short int stepLocal_1 = WrapperStruct00.var_1_5;
	if (stepLocal_1 >= (WrapperStruct00.var_1_2 & WrapperStruct00.var_1_3)) {
		WrapperStruct00.var_1_11 = (min ((min ((min (50u , WrapperStruct00.var_1_3)) , WrapperStruct00.var_1_6)) , (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_5)));
	} else {
		if (5.7 < WrapperStruct00.var_1_9) {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_5;
		} else {
			WrapperStruct00.var_1_11 = WrapperStruct00.var_1_3;
		}
	}


	// From: Req3Batch22Wrapper_S
	if (WrapperStruct00.var_1_11 < WrapperStruct00.var_1_5) {
		WrapperStruct00.var_1_7 = (((10.25f + WrapperStruct00.var_1_8) + WrapperStruct00.var_1_9) + WrapperStruct00.var_1_10);
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 65534);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -115292.1504606845700e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 1152921.504606845700e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 == WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_1 == ((signed short int) (WrapperStruct00.var_1_2 + -16))) : (WrapperStruct00.var_1_4 ? (WrapperStruct00.var_1_1 == ((signed short int) WrapperStruct00.var_1_3)) : 1)) && (WrapperStruct00.var_1_4 ? (WrapperStruct00.var_1_5 == ((unsigned short int) WrapperStruct00.var_1_2)) : ((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_1) ? (WrapperStruct00.var_1_5 == ((unsigned short int) (max (WrapperStruct00.var_1_3 , (WrapperStruct00.var_1_6 - 8))))) : 1))) && ((WrapperStruct00.var_1_11 < WrapperStruct00.var_1_5) ? (WrapperStruct00.var_1_7 == ((float) (((10.25f + WrapperStruct00.var_1_8) + WrapperStruct00.var_1_9) + WrapperStruct00.var_1_10))) : 1)) && ((WrapperStruct00.var_1_5 >= (WrapperStruct00.var_1_2 & WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_11 == ((unsigned long int) (min ((min ((min (50u , WrapperStruct00.var_1_3)) , WrapperStruct00.var_1_6)) , (WrapperStruct00.var_1_12 - WrapperStruct00.var_1_5))))) : ((5.7 < WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((unsigned long int) WrapperStruct00.var_1_5)) : (WrapperStruct00.var_1_11 == ((unsigned long int) WrapperStruct00.var_1_3))))
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
