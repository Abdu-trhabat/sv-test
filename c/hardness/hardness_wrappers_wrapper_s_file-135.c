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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch135Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	unsigned char var_1_2;
	signed long int var_1_3;
	unsigned char var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	unsigned char var_1_8;
	unsigned char var_1_9;
	unsigned short int var_1_10;
	double var_1_13;
	unsigned long int var_1_14;
	unsigned long int var_1_15;
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
	31.6,
	1,
	-4,
	1,
	500.25,
	9999.75,
	99999999999.2,
	5,
	128,
	128,
	1.75,
	256,
	16
};

// Calibration values

// Last'ed variables
unsigned short int last_1_WrapperStruct00_var_1_10 = 128;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch135Wrapper_S
	if (WrapperStruct00.var_1_2) {
		if (! WrapperStruct00.var_1_4) {
			WrapperStruct00.var_1_1 = ((WrapperStruct00.var_1_5 + 256.4f) - WrapperStruct00.var_1_6);
		} else {
			WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_7);
		}
	}


	// From: Req2Batch135Wrapper_S
	if ((WrapperStruct00.var_1_4 && WrapperStruct00.var_1_2) || (WrapperStruct00.var_1_7 >= 127.5f)) {
		WrapperStruct00.var_1_8 = WrapperStruct00.var_1_9;
	} else {
		if (WrapperStruct00.var_1_2) {
			WrapperStruct00.var_1_8 = 100;
		}
	}


	// From: Req3Batch135Wrapper_S
	unsigned char stepLocal_0 = WrapperStruct00.var_1_8;
	if (stepLocal_0 < ((WrapperStruct00.var_1_3 * WrapperStruct00.var_1_9) * (WrapperStruct00.var_1_8 * last_1_WrapperStruct00_var_1_10))) {
		WrapperStruct00.var_1_10 = (max ((min (last_1_WrapperStruct00_var_1_10 , WrapperStruct00.var_1_8)) , WrapperStruct00.var_1_9));
	} else {
		WrapperStruct00.var_1_10 = ((max (WrapperStruct00.var_1_8 , last_1_WrapperStruct00_var_1_10)) + WrapperStruct00.var_1_8);
	}


	// From: Req4Batch135Wrapper_S
	if ((WrapperStruct00.var_1_10 / (min (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))) > WrapperStruct00.var_1_8) {
		WrapperStruct00.var_1_13 = WrapperStruct00.var_1_5;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 254);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 4294967295);
	assume_abort_if_not(WrapperStruct00.var_1_14 != 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 4294967295);
	assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_10 = WrapperStruct00.var_1_10;
}

int property(void) {
	return (((WrapperStruct00.var_1_2 ? ((! WrapperStruct00.var_1_4) ? (WrapperStruct00.var_1_1 == ((float) ((WrapperStruct00.var_1_5 + 256.4f) - WrapperStruct00.var_1_6))) : (WrapperStruct00.var_1_1 == ((float) (WrapperStruct00.var_1_5 + WrapperStruct00.var_1_7)))) : 1) && (((WrapperStruct00.var_1_4 && WrapperStruct00.var_1_2) || (WrapperStruct00.var_1_7 >= 127.5f)) ? (WrapperStruct00.var_1_8 == ((unsigned char) WrapperStruct00.var_1_9)) : (WrapperStruct00.var_1_2 ? (WrapperStruct00.var_1_8 == ((unsigned char) 100)) : 1))) && ((WrapperStruct00.var_1_8 < ((WrapperStruct00.var_1_3 * WrapperStruct00.var_1_9) * (WrapperStruct00.var_1_8 * last_1_WrapperStruct00_var_1_10))) ? (WrapperStruct00.var_1_10 == ((unsigned short int) (max ((min (last_1_WrapperStruct00_var_1_10 , WrapperStruct00.var_1_8)) , WrapperStruct00.var_1_9)))) : (WrapperStruct00.var_1_10 == ((unsigned short int) ((max (WrapperStruct00.var_1_8 , last_1_WrapperStruct00_var_1_10)) + WrapperStruct00.var_1_8))))) && (((WrapperStruct00.var_1_10 / (min (WrapperStruct00.var_1_14 , WrapperStruct00.var_1_15))) > WrapperStruct00.var_1_8) ? (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_5)) : 1)
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
