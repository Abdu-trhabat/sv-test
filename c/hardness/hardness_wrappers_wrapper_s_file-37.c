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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch37Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned short int var_1_2;
	unsigned short int var_1_3;
	unsigned short int var_1_4;
	unsigned short int var_1_5;
	unsigned char var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	double var_1_11;
	double var_1_12;
	double var_1_13;
	double var_1_14;
	unsigned long int var_1_15;
	unsigned long int var_1_16;
	unsigned long int var_1_17;
	unsigned char var_1_18;
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
	59049,
	100,
	128,
	4,
	16,
	31.75,
	16.1,
	0.0,
	9999999999999.1,
	2.6,
	0.875,
	0.7,
	3.625,
	10000,
	3853276514,
	2189221048,
	8
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch37Wrapper_S
	if (((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) ^ (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_5)) <= -64) {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
	} else {
		WrapperStruct00.var_1_1 = 16;
	}


	// From: Req2Batch37Wrapper_S
	unsigned char stepLocal_1 = WrapperStruct00.var_1_6;
	unsigned short int stepLocal_0 = WrapperStruct00.var_1_3;
	if (stepLocal_1 >= 4) {
		if (WrapperStruct00.var_1_2 <= stepLocal_0) {
			WrapperStruct00.var_1_7 = (min ((WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) , WrapperStruct00.var_1_11));
		}
	}


	// From: Req3Batch37Wrapper_S
	WrapperStruct00.var_1_12 = (WrapperStruct00.var_1_10 + (max (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)));


	// From: Req4Batch37Wrapper_S
	signed long int stepLocal_2 = - WrapperStruct00.var_1_6;
	if (63.8 > WrapperStruct00.var_1_7) {
		if (stepLocal_2 <= WrapperStruct00.var_1_2) {
			WrapperStruct00.var_1_15 = (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_6);
		} else {
			WrapperStruct00.var_1_15 = (min (((min (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_17)) - WrapperStruct00.var_1_4) , WrapperStruct00.var_1_5));
		}
	}


	// From: Req5Batch37Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_6;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 65535);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 65535);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 254);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 4294967294);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 4294967294);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) ^ (WrapperStruct00.var_1_4 * WrapperStruct00.var_1_5)) <= -64) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_6)) : (WrapperStruct00.var_1_1 == ((unsigned char) 16))) && ((WrapperStruct00.var_1_6 >= 4) ? ((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_3) ? (WrapperStruct00.var_1_7 == ((double) (min ((WrapperStruct00.var_1_8 - (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10)) , WrapperStruct00.var_1_11)))) : 1) : 1)) && (WrapperStruct00.var_1_12 == ((double) (WrapperStruct00.var_1_10 + (max (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)))))) && ((63.8 > WrapperStruct00.var_1_7) ? (((- WrapperStruct00.var_1_6) <= WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_15 == ((unsigned long int) (WrapperStruct00.var_1_16 - WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_15 == ((unsigned long int) (min (((min (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_17)) - WrapperStruct00.var_1_4) , WrapperStruct00.var_1_5))))) : 1)) && (WrapperStruct00.var_1_18 == ((unsigned char) WrapperStruct00.var_1_6))
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
