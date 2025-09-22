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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch35Wrapper_S.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	unsigned long int var_1_2;
	unsigned long int var_1_3;
	float var_1_4;
	float var_1_5;
	signed short int var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	signed short int var_1_9;
	signed short int var_1_10;
	signed char var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	unsigned short int var_1_14;
	signed char var_1_15;
	signed char var_1_16;
	signed char var_1_17;
	double var_1_18;
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
	4.8,
	2,
	5,
	255.1,
	-0.6,
	-10,
	0,
	1,
	-4,
	-100,
	0,
	128,
	10,
	8,
	-4,
	-2,
	8,
	999999.2
};

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch35Wrapper_S
	unsigned long int stepLocal_0 = ~ WrapperStruct00.var_1_3;
	if (WrapperStruct00.var_1_2 >= stepLocal_0) {
		WrapperStruct00.var_1_1 = (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5);
	}


	// From: Req2Batch35Wrapper_S
	if (WrapperStruct00.var_1_7) {
		if (WrapperStruct00.var_1_8) {
			WrapperStruct00.var_1_6 = (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10);
		} else {
			WrapperStruct00.var_1_6 = WrapperStruct00.var_1_9;
		}
	} else {
		WrapperStruct00.var_1_6 = WrapperStruct00.var_1_9;
	}


	// From: Req3Batch35Wrapper_S
	unsigned long int stepLocal_3 = WrapperStruct00.var_1_3 * WrapperStruct00.var_1_2;
	signed long int stepLocal_2 = WrapperStruct00.var_1_14 % WrapperStruct00.var_1_12;
	unsigned long int stepLocal_1 = WrapperStruct00.var_1_2;
	if ((WrapperStruct00.var_1_12 - (64 - WrapperStruct00.var_1_13)) != stepLocal_1) {
		if (stepLocal_2 >= WrapperStruct00.var_1_3) {
			if (! WrapperStruct00.var_1_7) {
				WrapperStruct00.var_1_11 = ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16) + (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_17));
			}
		} else {
			if (32u >= stepLocal_3) {
				WrapperStruct00.var_1_11 = 1;
			} else {
				WrapperStruct00.var_1_11 = WrapperStruct00.var_1_15;
			}
		}
	}


	// From: Req4Batch35Wrapper_S
	WrapperStruct00.var_1_18 = WrapperStruct00.var_1_4;
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 4294967295);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 4294967295);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 16383);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -16383);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 16383);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 255);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 65535);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -31);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= -31);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 31);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((WrapperStruct00.var_1_2 >= (~ WrapperStruct00.var_1_3)) ? (WrapperStruct00.var_1_1 == ((float) (WrapperStruct00.var_1_4 + WrapperStruct00.var_1_5))) : 1) && (WrapperStruct00.var_1_7 ? (WrapperStruct00.var_1_8 ? (WrapperStruct00.var_1_6 == ((signed short int) (WrapperStruct00.var_1_9 + WrapperStruct00.var_1_10))) : (WrapperStruct00.var_1_6 == ((signed short int) WrapperStruct00.var_1_9))) : (WrapperStruct00.var_1_6 == ((signed short int) WrapperStruct00.var_1_9)))) && (((WrapperStruct00.var_1_12 - (64 - WrapperStruct00.var_1_13)) != WrapperStruct00.var_1_2) ? (((WrapperStruct00.var_1_14 % WrapperStruct00.var_1_12) >= WrapperStruct00.var_1_3) ? ((! WrapperStruct00.var_1_7) ? (WrapperStruct00.var_1_11 == ((signed char) ((WrapperStruct00.var_1_15 + WrapperStruct00.var_1_16) + (WrapperStruct00.var_1_13 - WrapperStruct00.var_1_17)))) : 1) : ((32u >= (WrapperStruct00.var_1_3 * WrapperStruct00.var_1_2)) ? (WrapperStruct00.var_1_11 == ((signed char) 1)) : (WrapperStruct00.var_1_11 == ((signed char) WrapperStruct00.var_1_15)))) : 1)) && (WrapperStruct00.var_1_18 == ((double) WrapperStruct00.var_1_4))
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
