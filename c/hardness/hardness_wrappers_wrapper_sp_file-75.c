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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch75Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned char var_1_1;
	unsigned char var_1_2;
	unsigned char var_1_3;
	signed long int var_1_5;
	signed long int var_1_6;
	unsigned char var_1_7;
	signed short int var_1_8;
	double var_1_9;
	double var_1_10;
	unsigned char var_1_11;
	signed char var_1_12;
	signed char var_1_13;
	signed char var_1_14;
	signed char var_1_15;
	signed char var_1_16;
	float var_1_17;
	float var_1_18;
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
	32,
	0,
	5,
	1,
	100,
	32,
	1,
	9.3,
	31.2,
	0,
	1,
	-32,
	-32,
	-50,
	-16,
	99999999999999.2,
	4.9
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed long int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
double* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
double* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
float* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
float* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_1 = 32;
signed short int last_1_WrapperStruct00_var_1_8 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch75Wrapper_SP
	signed long int stepLocal_0 = max ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer)));
	if (((last_1_WrapperStruct00_var_1_1 * last_1_WrapperStruct00_var_1_8) * last_1_WrapperStruct00_var_1_8) < stepLocal_0) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = 10;
	}


	// From: Req2Batch75Wrapper_SP
	if ((- (*(WrapperStruct00_var_1_9_Pointer))) >= (*(WrapperStruct00_var_1_10_Pointer))) {
		if ((*(WrapperStruct00_var_1_11_Pointer))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (abs ((min ((*(WrapperStruct00_var_1_2_Pointer)) , last_1_WrapperStruct00_var_1_8)) + (max ((*(WrapperStruct00_var_1_1_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer))))));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer)));
		}
	}


	// From: Req3Batch75Wrapper_SP
	if (2.8f == (*(WrapperStruct00_var_1_10_Pointer))) {
		(*(WrapperStruct00_var_1_12_Pointer)) = ((max ((max ((*(WrapperStruct00_var_1_13_Pointer)) , 16)) , (*(WrapperStruct00_var_1_14_Pointer)))) + (*(WrapperStruct00_var_1_15_Pointer)));
	}


	// From: Req4Batch75Wrapper_SP
	(*(WrapperStruct00_var_1_16_Pointer)) = (min (-4 , (*(WrapperStruct00_var_1_14_Pointer))));


	// From: Req5Batch75Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))) {
		(*(WrapperStruct00_var_1_17_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 255);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 255);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 2147483647);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 254);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 63);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 63);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 63);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_18 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_18 <= -1.0e-20F) || (WrapperStruct00.var_1_18 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_18 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_8 = WrapperStruct00.var_1_8;
}

int property(void) {
	return (((((((last_1_WrapperStruct00_var_1_1 * last_1_WrapperStruct00_var_1_8) * last_1_WrapperStruct00_var_1_8) < (max ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer))))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_7_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) 10))) && (((- (*(WrapperStruct00_var_1_9_Pointer))) >= (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_11_Pointer)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed short int) (abs ((min ((*(WrapperStruct00_var_1_2_Pointer)) , last_1_WrapperStruct00_var_1_8)) + (max ((*(WrapperStruct00_var_1_1_Pointer)) , (*(WrapperStruct00_var_1_3_Pointer)))))))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed short int) ((*(WrapperStruct00_var_1_3_Pointer)) + (*(WrapperStruct00_var_1_1_Pointer)))))) : 1)) && ((2.8f == (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed char) ((max ((max ((*(WrapperStruct00_var_1_13_Pointer)) , 16)) , (*(WrapperStruct00_var_1_14_Pointer)))) + (*(WrapperStruct00_var_1_15_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) (min (-4 , (*(WrapperStruct00_var_1_14_Pointer))))))) && (((*(WrapperStruct00_var_1_1_Pointer)) > ((*(WrapperStruct00_var_1_8_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_17_Pointer)) == ((float) (*(WrapperStruct00_var_1_18_Pointer)))) : 1)
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
