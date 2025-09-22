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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch93Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	double var_1_2;
	double var_1_3;
	double var_1_4;
	double var_1_5;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	float var_1_9;
	unsigned short int var_1_10;
	signed short int var_1_11;
	signed short int var_1_12;
	unsigned char var_1_13;
	unsigned short int var_1_14;
	signed long int var_1_15;
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
	255.3,
	-0.375,
	-0.9,
	2.6,
	128.5,
	9.186,
	31.75,
	9.6,
	499.2,
	50,
	0,
	-32,
	1,
	2,
	128
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
double* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned short int* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch93Wrapper_SP
	if (((- (*(WrapperStruct00_var_1_2_Pointer))) / (*(WrapperStruct00_var_1_3_Pointer))) != ((*(WrapperStruct00_var_1_4_Pointer)) / (*(WrapperStruct00_var_1_5_Pointer)))) {
		if ((*(WrapperStruct00_var_1_2_Pointer)) != ((max ((*(WrapperStruct00_var_1_6_Pointer)) , (*(WrapperStruct00_var_1_7_Pointer)))) - (*(WrapperStruct00_var_1_8_Pointer)))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = 64.51f;
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
	}


	// From: Req2Batch93Wrapper_SP
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_11_Pointer)) * (*(WrapperStruct00_var_1_12_Pointer));
	if (stepLocal_0 < (100 + 128)) {
		if ((*(WrapperStruct00_var_1_13_Pointer))) {
			(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
		} else {
			(*(WrapperStruct00_var_1_10_Pointer)) = 4;
		}
	} else {
		(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
	}


	// From: Req3Batch93Wrapper_SP
	unsigned short int stepLocal_1 = (*(WrapperStruct00_var_1_14_Pointer));
	if ((((*(WrapperStruct00_var_1_10_Pointer)) + 100u) << (*(WrapperStruct00_var_1_11_Pointer))) <= stepLocal_1) {
		if ((*(WrapperStruct00_var_1_4_Pointer)) <= ((- (*(WrapperStruct00_var_1_2_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		} else {
			(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_3 != 0.0F);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	assume_abort_if_not(WrapperStruct00.var_1_5 != 0.0F);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 0.0F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= 0.0F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((- (*(WrapperStruct00_var_1_2_Pointer))) / (*(WrapperStruct00_var_1_3_Pointer))) != ((*(WrapperStruct00_var_1_4_Pointer)) / (*(WrapperStruct00_var_1_5_Pointer)))) ? (((*(WrapperStruct00_var_1_2_Pointer)) != ((max ((*(WrapperStruct00_var_1_6_Pointer)) , (*(WrapperStruct00_var_1_7_Pointer)))) - (*(WrapperStruct00_var_1_8_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_9_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) 64.51f))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_9_Pointer))))) && ((((*(WrapperStruct00_var_1_11_Pointer)) * (*(WrapperStruct00_var_1_12_Pointer))) < (100 + 128)) ? ((*(WrapperStruct00_var_1_13_Pointer)) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) 4))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_14_Pointer)))))) && (((((*(WrapperStruct00_var_1_10_Pointer)) + 100u) << (*(WrapperStruct00_var_1_11_Pointer))) <= (*(WrapperStruct00_var_1_14_Pointer))) ? (((*(WrapperStruct00_var_1_4_Pointer)) <= ((- (*(WrapperStruct00_var_1_2_Pointer))) + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_12_Pointer))))) : ((*(WrapperStruct00_var_1_15_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_12_Pointer)))))
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
