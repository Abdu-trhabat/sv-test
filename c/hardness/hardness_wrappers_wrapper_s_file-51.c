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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch51Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned char var_1_2;
	signed short int var_1_4;
	signed short int var_1_5;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	unsigned long int var_1_10;
	unsigned long int var_1_11;
	unsigned long int var_1_12;
	unsigned long int var_1_13;
	unsigned long int var_1_15;
	unsigned long int var_1_16;
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
	10.8,
	0,
	-32,
	-16,
	100.01,
	999999999.4,
	10.6,
	127.5,
	1,
	2467894503,
	2565572511,
	500,
	2277019112,
	2745650083,
	8
};

// Calibration values

// Last'ed variables
unsigned long int last_1_WrapperStruct00_var_1_17 = 8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch51Wrapper_S
	if (WrapperStruct00.var_1_4 <= last_1_WrapperStruct00_var_1_17) {
		if (WrapperStruct00.var_1_2 && (last_1_WrapperStruct00_var_1_17 == (max (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_12)))) {
			if (last_1_WrapperStruct00_var_1_17 < WrapperStruct00.var_1_11) {
				WrapperStruct00.var_1_17 = WrapperStruct00.var_1_15;
			}
		}
	} else {
		WrapperStruct00.var_1_17 = WrapperStruct00.var_1_16;
	}


	// From: Req2Batch51Wrapper_S
	unsigned long int stepLocal_1 = (max (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)) - WrapperStruct00.var_1_13;
	if (stepLocal_1 != (- WrapperStruct00.var_1_17)) {
		WrapperStruct00.var_1_10 = ((min (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_16)) - WrapperStruct00.var_1_13);
	} else {
		WrapperStruct00.var_1_10 = WrapperStruct00.var_1_15;
	}


	// From: Req1Batch51Wrapper_S
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_10 / WrapperStruct00.var_1_5;
	if (WrapperStruct00.var_1_2) {
		if (WrapperStruct00.var_1_10 >= stepLocal_0) {
			WrapperStruct00.var_1_1 = (abs (WrapperStruct00.var_1_6));
		} else {
			WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_7 + (max (WrapperStruct00.var_1_8 , (WrapperStruct00.var_1_9 + 63.25))));
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_8;
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_5 != 0);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967295);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 4294967295);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 2147483647);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 4294967294);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_17 = WrapperStruct00.var_1_17;
}

int property(void) {
	return ((WrapperStruct00.var_1_2 ? ((WrapperStruct00.var_1_10 >= (WrapperStruct00.var_1_10 / WrapperStruct00.var_1_5)) ? (WrapperStruct00.var_1_1 == ((double) (abs (WrapperStruct00.var_1_6)))) : (WrapperStruct00.var_1_1 == ((double) (WrapperStruct00.var_1_7 + (max (WrapperStruct00.var_1_8 , (WrapperStruct00.var_1_9 + 63.25))))))) : (WrapperStruct00.var_1_1 == ((double) WrapperStruct00.var_1_8))) && ((((max (WrapperStruct00.var_1_11 , WrapperStruct00.var_1_12)) - WrapperStruct00.var_1_13) != (- WrapperStruct00.var_1_17)) ? (WrapperStruct00.var_1_10 == ((unsigned long int) ((min (WrapperStruct00.var_1_15 , WrapperStruct00.var_1_16)) - WrapperStruct00.var_1_13))) : (WrapperStruct00.var_1_10 == ((unsigned long int) WrapperStruct00.var_1_15)))) && ((WrapperStruct00.var_1_4 <= last_1_WrapperStruct00_var_1_17) ? ((WrapperStruct00.var_1_2 && (last_1_WrapperStruct00_var_1_17 == (max (WrapperStruct00.var_1_16 , WrapperStruct00.var_1_12)))) ? ((last_1_WrapperStruct00_var_1_17 < WrapperStruct00.var_1_11) ? (WrapperStruct00.var_1_17 == ((unsigned long int) WrapperStruct00.var_1_15)) : 1) : 1) : (WrapperStruct00.var_1_17 == ((unsigned long int) WrapperStruct00.var_1_16)))
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
