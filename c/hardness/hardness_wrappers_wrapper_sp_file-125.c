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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch125Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	float var_1_1;
	float var_1_2;
	float var_1_3;
	float var_1_4;
	unsigned char var_1_5;
	unsigned char var_1_6;
	unsigned char var_1_7;
	double var_1_8;
	unsigned char var_1_9;
	unsigned short int var_1_10;
	unsigned short int var_1_11;
	signed long int var_1_12;
	unsigned char var_1_13;
	float var_1_14;
	float var_1_15;
	signed char var_1_16;
	signed char var_1_17;
	signed char var_1_18;
	unsigned short int var_1_19;
	signed char var_1_20;
	unsigned short int var_1_21;
	unsigned short int var_1_22;
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
	7.25,
	1.8199999999999998,
	0.0,
	99999999999.35,
	0,
	1,
	0,
	100.5,
	1,
	56793,
	8,
	-50,
	0,
	9.25,
	49.6,
	32,
	8,
	32,
	64,
	100,
	58395,
	32
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned char* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned short int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
signed char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
signed char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned short int* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
signed char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);
unsigned short int* WrapperStruct00_var_1_21_Pointer = &(WrapperStruct00.var_1_21);
unsigned short int* WrapperStruct00_var_1_22_Pointer = &(WrapperStruct00.var_1_22);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch125Wrapper_SP
	(*(WrapperStruct00_var_1_1_Pointer)) = ((*(WrapperStruct00_var_1_2_Pointer)) - ((*(WrapperStruct00_var_1_4_Pointer)) + 32.4f));


	// From: Req2Batch125Wrapper_SP
	(*(WrapperStruct00_var_1_5_Pointer)) = ((*(WrapperStruct00_var_1_6_Pointer)) && (! (*(WrapperStruct00_var_1_7_Pointer))));


	// From: Req3Batch125Wrapper_SP
	(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));


	// From: Req4Batch125Wrapper_SP
	signed long int stepLocal_0 = (*(WrapperStruct00_var_1_12_Pointer));
	if (((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) < stepLocal_0) {
		(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
	}


	// From: Req5Batch125Wrapper_SP
	(*(WrapperStruct00_var_1_14_Pointer)) = ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)));


	// From: Req6Batch125Wrapper_SP
	if (((*(WrapperStruct00_var_1_14_Pointer)) * (*(WrapperStruct00_var_1_2_Pointer))) >= (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_16_Pointer)) = (((*(WrapperStruct00_var_1_17_Pointer)) + (*(WrapperStruct00_var_1_18_Pointer))) - 32);
	}


	// From: Req7Batch125Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) {
		if (! ((*(WrapperStruct00_var_1_16_Pointer)) < (*(WrapperStruct00_var_1_20_Pointer)))) {
			(*(WrapperStruct00_var_1_19_Pointer)) = (max ((min (8 , ((*(WrapperStruct00_var_1_21_Pointer)) - 8))) , (*(WrapperStruct00_var_1_17_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_19_Pointer)) = 50;
	}


	// From: Req8Batch125Wrapper_SP
	(*(WrapperStruct00_var_1_22_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= 0.0F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= 6917529.027641074000e+12F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 1);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 0);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 65535);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 32767);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 2147483647);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 0);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 63);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 63);
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 127);
	WrapperStruct00.var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_21 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_21 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((((*(WrapperStruct00_var_1_1_Pointer)) == ((float) ((*(WrapperStruct00_var_1_2_Pointer)) - ((*(WrapperStruct00_var_1_4_Pointer)) + 32.4f)))) && ((*(WrapperStruct00_var_1_5_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_6_Pointer)) && (! (*(WrapperStruct00_var_1_7_Pointer))))))) && ((*(WrapperStruct00_var_1_8_Pointer)) == ((double) (*(WrapperStruct00_var_1_3_Pointer))))) && ((((*(WrapperStruct00_var_1_10_Pointer)) - (*(WrapperStruct00_var_1_11_Pointer))) < (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_13_Pointer)))) : 1)) && ((*(WrapperStruct00_var_1_14_Pointer)) == ((float) ((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer)))))) && ((((*(WrapperStruct00_var_1_14_Pointer)) * (*(WrapperStruct00_var_1_2_Pointer))) >= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((signed char) (((*(WrapperStruct00_var_1_17_Pointer)) + (*(WrapperStruct00_var_1_18_Pointer))) - 32))) : 1)) && (((*(WrapperStruct00_var_1_2_Pointer)) > (*(WrapperStruct00_var_1_8_Pointer))) ? ((! ((*(WrapperStruct00_var_1_16_Pointer)) < (*(WrapperStruct00_var_1_20_Pointer)))) ? ((*(WrapperStruct00_var_1_19_Pointer)) == ((unsigned short int) (max ((min (8 , ((*(WrapperStruct00_var_1_21_Pointer)) - 8))) , (*(WrapperStruct00_var_1_17_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_19_Pointer)) == ((unsigned short int) 50)))) && ((*(WrapperStruct00_var_1_22_Pointer)) == ((unsigned short int) (*(WrapperStruct00_var_1_11_Pointer))))
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
