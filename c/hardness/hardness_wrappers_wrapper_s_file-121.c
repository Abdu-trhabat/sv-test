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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	unsigned long int var_1_4;
	unsigned long int var_1_5;
	unsigned long int var_1_6;
	unsigned char var_1_7;
	unsigned long int var_1_8;
	unsigned char var_1_9;
	signed short int var_1_10;
	signed short int var_1_11;
	signed short int var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned char var_1_16;
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
	-100000000,
	2032620576,
	1443780595,
	1,
	4,
	8,
	0,
	32,
	0,
	-32,
	-100,
	-4,
	10,
	4,
	1,
	0
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch121Wrapper_S
	unsigned long int stepLocal_1 = (WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3) - (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5);
	unsigned long int stepLocal_0 = WrapperStruct00.var_1_2;
	if (stepLocal_1 == (- (- WrapperStruct00.var_1_6))) {
		if (WrapperStruct00.var_1_3 != stepLocal_0) {
			WrapperStruct00.var_1_1 = WrapperStruct00.var_1_4;
		}
	} else {
		WrapperStruct00.var_1_1 = WrapperStruct00.var_1_5;
	}


	// From: Req2Batch121Wrapper_S
	unsigned long int stepLocal_2 = max ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_8) , WrapperStruct00.var_1_6);
	if (WrapperStruct00.var_1_3 <= stepLocal_2) {
		WrapperStruct00.var_1_7 = (! WrapperStruct00.var_1_9);
	} else {
		WrapperStruct00.var_1_7 = 0;
	}


	// From: Req4Batch121Wrapper_S
	WrapperStruct00.var_1_13 = WrapperStruct00.var_1_14;


	// From: Req5Batch121Wrapper_S
	WrapperStruct00.var_1_15 = WrapperStruct00.var_1_16;


	// From: Req3Batch121Wrapper_S
	if (WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_5) {
		if (! WrapperStruct00.var_1_15) {
			WrapperStruct00.var_1_10 = (min (WrapperStruct00.var_1_11 , (WrapperStruct00.var_1_12 + 2)));
		} else {
			WrapperStruct00.var_1_10 = (min ((abs (WrapperStruct00.var_1_12)) , WrapperStruct00.var_1_11));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 2147483648);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 1073741824);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 2147483647);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1073741824);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 1073741823);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 4294967295);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 4294967295);
	assume_abort_if_not(WrapperStruct00.var_1_8 != 0);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32766);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 16383);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 254);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 0);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((WrapperStruct00.var_1_2 + WrapperStruct00.var_1_3) - (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5)) == (- (- WrapperStruct00.var_1_6))) ? ((WrapperStruct00.var_1_3 != WrapperStruct00.var_1_2) ? (WrapperStruct00.var_1_1 == ((signed long int) WrapperStruct00.var_1_4)) : 1) : (WrapperStruct00.var_1_1 == ((signed long int) WrapperStruct00.var_1_5))) && ((WrapperStruct00.var_1_3 <= (max ((WrapperStruct00.var_1_4 / WrapperStruct00.var_1_8) , WrapperStruct00.var_1_6))) ? (WrapperStruct00.var_1_7 == ((unsigned char) (! WrapperStruct00.var_1_9))) : (WrapperStruct00.var_1_7 == ((unsigned char) 0)))) && ((WrapperStruct00.var_1_2 <= WrapperStruct00.var_1_5) ? ((! WrapperStruct00.var_1_15) ? (WrapperStruct00.var_1_10 == ((signed short int) (min (WrapperStruct00.var_1_11 , (WrapperStruct00.var_1_12 + 2))))) : (WrapperStruct00.var_1_10 == ((signed short int) (min ((abs (WrapperStruct00.var_1_12)) , WrapperStruct00.var_1_11))))) : 1)) && (WrapperStruct00.var_1_13 == ((unsigned char) WrapperStruct00.var_1_14))) && (WrapperStruct00.var_1_15 == ((unsigned char) WrapperStruct00.var_1_16))
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
