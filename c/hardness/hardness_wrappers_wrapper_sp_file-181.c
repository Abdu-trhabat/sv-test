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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	unsigned short int var_1_2;
	double var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	unsigned char var_1_8;
	signed short int var_1_9;
	unsigned short int var_1_10;
	unsigned short int var_1_11;
	signed short int var_1_12;
	signed short int var_1_13;
	signed short int var_1_14;
	signed short int var_1_15;
	unsigned char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	float var_1_20;
	double var_1_21;
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
	127.25,
	0,
	255.1,
	0,
	0,
	0,
	50,
	2,
	16,
	50,
	10000,
	10000,
	128,
	10,
	128,
	1,
	0,
	64.5,
	100000000000.25
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed short int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
float* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
double* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_18 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch181Wrapper_SP
	if (last_1_WrapperStruct00_var_1_18) {
		(*(WrapperStruct00_var_1_6_Pointer)) = ((*(WrapperStruct00_var_1_7_Pointer)) || (*(WrapperStruct00_var_1_8_Pointer)));
	}


	// From: Req5Batch181Wrapper_SP
	(*(WrapperStruct00_var_1_18_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_19_Pointer)));


	// From: Req1Batch181Wrapper_SP
	if ((((*(WrapperStruct00_var_1_2_Pointer)) > 25) && (*(WrapperStruct00_var_1_18_Pointer))) && (*(WrapperStruct00_var_1_18_Pointer))) {
		if ((*(WrapperStruct00_var_1_18_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_5_Pointer)) + 100.5);
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
	}


	// From: Req3Batch181Wrapper_SP
	if ((*(WrapperStruct00_var_1_6_Pointer))) {
		if ((*(WrapperStruct00_var_1_2_Pointer)) >= ((64753 - (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_11_Pointer)))) {
			(*(WrapperStruct00_var_1_9_Pointer)) = ((*(WrapperStruct00_var_1_12_Pointer)) - 128);
		}
	} else {
		(*(WrapperStruct00_var_1_9_Pointer)) = ((((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))) - 1) - (*(WrapperStruct00_var_1_15_Pointer)));
	}


	// From: Req4Batch181Wrapper_SP
	if (((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_18_Pointer))) || (*(WrapperStruct00_var_1_7_Pointer))) {
		(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_17_Pointer));
	}


	// From: Req6Batch181Wrapper_SP
	(*(WrapperStruct00_var_1_20_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));


	// From: Req7Batch181Wrapper_SP
	(*(WrapperStruct00_var_1_21_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 65535);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 0);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 32767);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 65535);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32766);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 16383);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 8191);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 16383);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 32766);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_18 = WrapperStruct00.var_1_18;
}

int property(void) {
	return ((((((((((*(WrapperStruct00_var_1_2_Pointer)) > 25) && (*(WrapperStruct00_var_1_18_Pointer))) && (*(WrapperStruct00_var_1_18_Pointer))) ? ((*(WrapperStruct00_var_1_18_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) ((*(WrapperStruct00_var_1_5_Pointer)) + 100.5))) : 1) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_5_Pointer))))) && (last_1_WrapperStruct00_var_1_18 ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_7_Pointer)) || (*(WrapperStruct00_var_1_8_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_6_Pointer)) ? (((*(WrapperStruct00_var_1_2_Pointer)) >= ((64753 - (*(WrapperStruct00_var_1_10_Pointer))) + (*(WrapperStruct00_var_1_11_Pointer)))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_12_Pointer)) - 128))) : 1) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed short int) ((((*(WrapperStruct00_var_1_13_Pointer)) + (*(WrapperStruct00_var_1_14_Pointer))) - 1) - (*(WrapperStruct00_var_1_15_Pointer))))))) && ((((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_18_Pointer))) || (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_17_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_6_Pointer)) || (*(WrapperStruct00_var_1_19_Pointer)))))) && ((*(WrapperStruct00_var_1_20_Pointer)) == ((float) (*(WrapperStruct00_var_1_5_Pointer))))) && ((*(WrapperStruct00_var_1_21_Pointer)) == ((double) (*(WrapperStruct00_var_1_5_Pointer))))
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
