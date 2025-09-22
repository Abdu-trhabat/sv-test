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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed long int var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	signed short int var_1_4;
	signed short int var_1_5;
	signed long int var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	signed short int var_1_10;
	signed short int var_1_11;
	signed short int var_1_12;
	double var_1_13;
	signed long int var_1_14;
	signed long int var_1_15;
	double var_1_16;
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
	-128,
	1,
	1,
	0,
	500,
	8,
	10000000000000.25,
	31.2,
	16.475,
	100,
	-1,
	16,
	128.25,
	1227102632,
	50,
	10.5
};
signed long int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
double* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed long int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
double* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch185Wrapper_SP
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer));
	unsigned char stepLocal_0 = (*(WrapperStruct00_var_1_3_Pointer));
	if ((*(WrapperStruct00_var_1_2_Pointer)) && stepLocal_0) {
		if (stepLocal_1 <= (*(WrapperStruct00_var_1_6_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
		}
	}


	// From: Req2Batch185Wrapper_SP
	signed short int stepLocal_2 = (*(WrapperStruct00_var_1_4_Pointer));
	if (stepLocal_2 == (min (32 , (*(WrapperStruct00_var_1_5_Pointer))))) {
		if (! (*(WrapperStruct00_var_1_2_Pointer))) {
			(*(WrapperStruct00_var_1_7_Pointer)) = ((abs ((*(WrapperStruct00_var_1_8_Pointer)))) - (*(WrapperStruct00_var_1_9_Pointer)));
		} else {
			(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	}


	// From: Req3Batch185Wrapper_SP
	signed long int stepLocal_3 = (*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer));
	if (-64 < stepLocal_3) {
		(*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer)));
	} else {
		(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
	}


	// From: Req4Batch185Wrapper_SP
	if ((abs (- (*(WrapperStruct00_var_1_10_Pointer)))) < (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))) - ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))))) {
		(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 32767);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32767);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32766);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32766);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 1073741823);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 2147483647);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 1073741823);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) && (*(WrapperStruct00_var_1_3_Pointer))) ? ((((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))) <= (*(WrapperStruct00_var_1_6_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer)))) : 1) : 1) && (((*(WrapperStruct00_var_1_4_Pointer)) == (min (32 , (*(WrapperStruct00_var_1_5_Pointer))))) ? ((! (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) ((abs ((*(WrapperStruct00_var_1_8_Pointer)))) - (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) (*(WrapperStruct00_var_1_9_Pointer))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer)))))) && ((-64 < ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_11_Pointer)) - (*(WrapperStruct00_var_1_12_Pointer))))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_11_Pointer)))))) && (((abs (- (*(WrapperStruct00_var_1_10_Pointer)))) < (((*(WrapperStruct00_var_1_12_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))) - ((*(WrapperStruct00_var_1_14_Pointer)) - (*(WrapperStruct00_var_1_15_Pointer))))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((double) (*(WrapperStruct00_var_1_16_Pointer)))) : 1)
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
