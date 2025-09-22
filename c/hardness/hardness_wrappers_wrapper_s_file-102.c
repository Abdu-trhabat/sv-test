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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned long int var_1_1;
	double var_1_2;
	double var_1_3;
	unsigned long int var_1_6;
	signed long int var_1_7;
	unsigned long int var_1_9;
	unsigned long int var_1_10;
	signed long int var_1_11;
	signed long int var_1_12;
	double var_1_13;
	unsigned short int var_1_14;
	double var_1_15;
	signed long int var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	signed long int var_1_19;
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
	256,
	9999999.6,
	9999999999999.6,
	4,
	5,
	2796236537,
	64,
	1656367899,
	10000,
	100000000000.825,
	64,
	31.8,
	100,
	1,
	0,
	1
};

// Calibration values

// Last'ed variables
double last_1_WrapperStruct00_var_1_13 = 100000000000.825;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch102Wrapper_S
	if (((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) * last_1_WrapperStruct00_var_1_13) <= last_1_WrapperStruct00_var_1_13) {
		WrapperStruct00.var_1_1 = (abs (WrapperStruct00.var_1_6));
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_6;
	}


	// From: Req3Batch102Wrapper_S
	unsigned long int stepLocal_1 = (60423 - WrapperStruct00.var_1_14) | WrapperStruct00.var_1_1;
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_6;
	if (stepLocal_1 <= (abs (WrapperStruct00.var_1_10))) {
		if (WrapperStruct00.var_1_9 != stepLocal_0) {
			WrapperStruct00.var_1_13 = ((31.5 - WrapperStruct00.var_1_15) + 63.3);
		} else {
			WrapperStruct00.var_1_13 = WrapperStruct00.var_1_15;
		}
	}


	// From: Req2Batch102Wrapper_S
	if (WrapperStruct00.var_1_1 < (WrapperStruct00.var_1_1 & (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) {
		WrapperStruct00.var_1_7 = (min (((WrapperStruct00.var_1_11 - 128) - 2) , WrapperStruct00.var_1_12));
	} else {
		WrapperStruct00.var_1_7 = WrapperStruct00.var_1_12;
	}


	// From: Req4Batch102Wrapper_S
	WrapperStruct00.var_1_16 = WrapperStruct00.var_1_12;


	// From: Req5Batch102Wrapper_S
	WrapperStruct00.var_1_17 = WrapperStruct00.var_1_18;


	// From: Req6Batch102Wrapper_S
	WrapperStruct00.var_1_19 = WrapperStruct00.var_1_11;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= 0.0F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967294);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 4294967295);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1073741822);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 2147483646);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483646);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 32767);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= 0.0F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 0);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_13 = WrapperStruct00.var_1_13;
}

int property(void) {
	return ((((((((WrapperStruct00.var_1_2 - WrapperStruct00.var_1_3) * last_1_WrapperStruct00_var_1_13) <= last_1_WrapperStruct00_var_1_13) ? (WrapperStruct00.var_1_1 == ((unsigned long int) (abs (WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_1 == ((unsigned long int) WrapperStruct00.var_1_6))) && ((WrapperStruct00.var_1_1 < (WrapperStruct00.var_1_1 & (WrapperStruct00.var_1_9 - WrapperStruct00.var_1_10))) ? (WrapperStruct00.var_1_7 == ((signed long int) (min (((WrapperStruct00.var_1_11 - 128) - 2) , WrapperStruct00.var_1_12)))) : (WrapperStruct00.var_1_7 == ((signed long int) WrapperStruct00.var_1_12)))) && ((((60423 - WrapperStruct00.var_1_14) | WrapperStruct00.var_1_1) <= (abs (WrapperStruct00.var_1_10))) ? ((WrapperStruct00.var_1_9 != WrapperStruct00.var_1_6) ? (WrapperStruct00.var_1_13 == ((double) ((31.5 - WrapperStruct00.var_1_15) + 63.3))) : (WrapperStruct00.var_1_13 == ((double) WrapperStruct00.var_1_15))) : 1)) && (WrapperStruct00.var_1_16 == ((signed long int) WrapperStruct00.var_1_12))) && (WrapperStruct00.var_1_17 == ((unsigned char) WrapperStruct00.var_1_18))) && (WrapperStruct00.var_1_19 == ((signed long int) WrapperStruct00.var_1_11))
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
