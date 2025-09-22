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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	double var_1_6;
	double var_1_7;
	double var_1_8;
	double var_1_9;
	double var_1_10;
	double var_1_11;
	signed long int var_1_12;
	float var_1_13;
	float var_1_14;
	signed long int var_1_15;
	signed long int var_1_16;
	signed long int var_1_17;
	unsigned long int var_1_18;
	unsigned long int var_1_19;
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
	1,
	64,
	1,
	0,
	0.04,
	24.625,
	199.2,
	31.5,
	4.8,
	99999999999.2,
	1000,
	4.78,
	31.95,
	50,
	25,
	128,
	10,
	5
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
double* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
double* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
double* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed long int* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed long int* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned long int* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned long int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);

// Calibration values

// Last'ed variables
double last_1_WrapperStruct00_var_1_6 = 0.04;
signed long int last_1_WrapperStruct00_var_1_12 = 1000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch195Wrapper_SP
	if (((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) > last_1_WrapperStruct00_var_1_6) {
		(*(WrapperStruct00_var_1_12_Pointer)) = (min (((*(WrapperStruct00_var_1_3_Pointer)) - last_1_WrapperStruct00_var_1_12) , (min ((*(WrapperStruct00_var_1_15_Pointer)) , (*(WrapperStruct00_var_1_16_Pointer))))));
	} else {
		(*(WrapperStruct00_var_1_12_Pointer)) = (last_1_WrapperStruct00_var_1_12 - (max ((*(WrapperStruct00_var_1_17_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))));
	}


	// From: Req4Batch195Wrapper_SP
	if ((*(WrapperStruct00_var_1_12_Pointer)) <= ((*(WrapperStruct00_var_1_17_Pointer)) * (- (*(WrapperStruct00_var_1_12_Pointer))))) {
		(*(WrapperStruct00_var_1_18_Pointer)) = (max ((*(WrapperStruct00_var_1_12_Pointer)) , (*(WrapperStruct00_var_1_19_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_18_Pointer)) = (*(WrapperStruct00_var_1_12_Pointer));
	}


	// From: Req2Batch195Wrapper_SP
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_12_Pointer));
	if (stepLocal_0 <= (*(WrapperStruct00_var_1_18_Pointer))) {
		(*(WrapperStruct00_var_1_6_Pointer)) = (max ((min (((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) , (*(WrapperStruct00_var_1_9_Pointer)))) , (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer))))));
	} else {
		(*(WrapperStruct00_var_1_6_Pointer)) = 16.2;
	}


	// From: Req1Batch195Wrapper_SP
	if ((*(WrapperStruct00_var_1_12_Pointer)) < (*(WrapperStruct00_var_1_18_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_4_Pointer));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) && (*(WrapperStruct00_var_1_5_Pointer)));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 1);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 0);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_11 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_11 <= -1.0e-20F) || (WrapperStruct00.var_1_11 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_11 >= 1.0e-20F ));
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_13 >= 0.0F && WrapperStruct00.var_1_13 <= -1.0e-20F) || (WrapperStruct00.var_1_13 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_13 >= 1.0e-20F ));
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= 0.0F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 2147483646);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= -2147483647);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 2147483646);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 2147483646);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_6 = WrapperStruct00.var_1_6;
	last_1_WrapperStruct00_var_1_12 = WrapperStruct00.var_1_12;
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_12_Pointer)) < (*(WrapperStruct00_var_1_18_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_4_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_4_Pointer)) && (*(WrapperStruct00_var_1_5_Pointer)))))) && (((*(WrapperStruct00_var_1_12_Pointer)) <= (*(WrapperStruct00_var_1_18_Pointer))) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) (max ((min (((*(WrapperStruct00_var_1_7_Pointer)) + (*(WrapperStruct00_var_1_8_Pointer))) , (*(WrapperStruct00_var_1_9_Pointer)))) , (min ((*(WrapperStruct00_var_1_10_Pointer)) , (*(WrapperStruct00_var_1_11_Pointer)))))))) : ((*(WrapperStruct00_var_1_6_Pointer)) == ((double) 16.2)))) && ((((*(WrapperStruct00_var_1_13_Pointer)) - (*(WrapperStruct00_var_1_14_Pointer))) > last_1_WrapperStruct00_var_1_6) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) (min (((*(WrapperStruct00_var_1_3_Pointer)) - last_1_WrapperStruct00_var_1_12) , (min ((*(WrapperStruct00_var_1_15_Pointer)) , (*(WrapperStruct00_var_1_16_Pointer)))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) (last_1_WrapperStruct00_var_1_12 - (max ((*(WrapperStruct00_var_1_17_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer))))))))) && (((*(WrapperStruct00_var_1_12_Pointer)) <= ((*(WrapperStruct00_var_1_17_Pointer)) * (- (*(WrapperStruct00_var_1_12_Pointer))))) ? ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned long int) (max ((*(WrapperStruct00_var_1_12_Pointer)) , (*(WrapperStruct00_var_1_19_Pointer)))))) : ((*(WrapperStruct00_var_1_18_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_12_Pointer)))))
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
