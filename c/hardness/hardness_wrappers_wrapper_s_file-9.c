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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch9Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_3;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	unsigned char var_1_7;
	unsigned short int var_1_8;
	signed long int var_1_9;
	signed long int var_1_10;
	float var_1_11;
	float var_1_12;
	float var_1_13;
	float var_1_14;
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
	10,
	4,
	3.25,
	2.625,
	32.4,
	0,
	200,
	10,
	1653905226,
	15.6,
	31.2,
	7.3,
	4.75
};

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_1 = 10;
unsigned short int last_1_WrapperStruct00_var_1_8 = 200;
signed long int last_1_WrapperStruct00_var_1_9 = 10;
float last_1_WrapperStruct00_var_1_11 = 15.6;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch9Wrapper_S
	if (last_1_WrapperStruct00_var_1_11 > 9999999.5f) {
		WrapperStruct00.var_1_9 = ((WrapperStruct00.var_1_10 - last_1_WrapperStruct00_var_1_9) - WrapperStruct00.var_1_3);
	} else {
		WrapperStruct00.var_1_9 = (max (((last_1_WrapperStruct00_var_1_1 - WrapperStruct00.var_1_3) + (last_1_WrapperStruct00_var_1_8 - last_1_WrapperStruct00_var_1_9)) , WrapperStruct00.var_1_10));
	}


	// From: Req1Batch9Wrapper_S
	if (last_1_WrapperStruct00_var_1_9 <= 16) {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
	} else {
		if ((max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) < WrapperStruct00.var_1_6) {
			if (WrapperStruct00.var_1_7) {
				WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
			} else {
				WrapperStruct00.var_1_1 = 64;
			}
		} else {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_3;
		}
	}


	// From: Req4Batch9Wrapper_S
	signed long int stepLocal_0 = WrapperStruct00.var_1_9;
	if (WrapperStruct00.var_1_7) {
		if ((- WrapperStruct00.var_1_9) >= stepLocal_0) {
			WrapperStruct00.var_1_11 = (WrapperStruct00.var_1_12 + WrapperStruct00.var_1_13);
		}
	} else {
		WrapperStruct00.var_1_11 = (min (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14));
	}


	// From: Req2Batch9Wrapper_S
	WrapperStruct00.var_1_8 = (max (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_3));
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 254);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 1073741822);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483646);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_12 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_12 <= -1.0e-20F) || (WrapperStruct00.var_1_12 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_12 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
	last_1_WrapperStruct00_var_1_9 = WrapperStruct00.var_1_9;
	last_1_WrapperStruct00_var_1_11 = WrapperStruct00.var_1_11;
}

int property(void) {
	return ((((last_1_WrapperStruct00_var_1_9 <= 16) ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_3)) : (((max (WrapperStruct00.var_1_4 , WrapperStruct00.var_1_5)) < WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_3)) : (WrapperStruct00.var_1_1 == ((unsigned char) 64))) : (WrapperStruct00.var_1_1 == ((unsigned char) WrapperStruct00.var_1_3)))) && (WrapperStruct00.var_1_8 == ((unsigned short int) (max (WrapperStruct00.var_1_1 , WrapperStruct00.var_1_3))))) && ((last_1_WrapperStruct00_var_1_11 > 9999999.5f) ? (WrapperStruct00.var_1_9 == ((signed long int) ((WrapperStruct00.var_1_10 - last_1_WrapperStruct00_var_1_9) - WrapperStruct00.var_1_3))) : (WrapperStruct00.var_1_9 == ((signed long int) (max (((last_1_WrapperStruct00_var_1_1 - WrapperStruct00.var_1_3) + (last_1_WrapperStruct00_var_1_8 - last_1_WrapperStruct00_var_1_9)) , WrapperStruct00.var_1_10)))))) && (WrapperStruct00.var_1_7 ? (((- WrapperStruct00.var_1_9) >= WrapperStruct00.var_1_9) ? (WrapperStruct00.var_1_11 == ((float) (WrapperStruct00.var_1_12 + WrapperStruct00.var_1_13))) : 1) : (WrapperStruct00.var_1_11 == ((float) (min (WrapperStruct00.var_1_13 , WrapperStruct00.var_1_14)))))
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
