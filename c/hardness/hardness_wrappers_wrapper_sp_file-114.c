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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_2;
	signed short int var_1_3;
	signed short int var_1_4;
	signed short int var_1_5;
	float var_1_6;
	unsigned char var_1_7;
	float var_1_8;
	unsigned char var_1_9;
	unsigned long int var_1_10;
	unsigned long int var_1_11;
	unsigned char var_1_12;
	unsigned char var_1_13;
	float var_1_14;
	signed char var_1_15;
	float var_1_16;
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
	500,
	-256,
	-10,
	4,
	5,
	8.25,
	0,
	1.6,
	64,
	1,
	128,
	128,
	25,
	127.6,
	-5,
	7.3
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
signed short int* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
signed short int* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
signed short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned char* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
float* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
unsigned long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch114Wrapper_SP
	signed short int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
	if (stepLocal_0 > (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = 32;
	}


	// From: Req2Batch114Wrapper_SP
	if ((((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_1_Pointer))) < (*(WrapperStruct00_var_1_5_Pointer))) || (*(WrapperStruct00_var_1_7_Pointer))) {
		if ((*(WrapperStruct00_var_1_7_Pointer))) {
			(*(WrapperStruct00_var_1_6_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
		}
	}


	// From: Req3Batch114Wrapper_SP
	if (((*(WrapperStruct00_var_1_10_Pointer)) / 1u) != ((*(WrapperStruct00_var_1_11_Pointer)) + 10u)) {
		(*(WrapperStruct00_var_1_9_Pointer)) = ((min ((*(WrapperStruct00_var_1_12_Pointer)) , 128)) - (*(WrapperStruct00_var_1_13_Pointer)));
	}


	// From: Req4Batch114Wrapper_SP
	if (((*(WrapperStruct00_var_1_4_Pointer)) / (max ((*(WrapperStruct00_var_1_15_Pointer)) , -8))) >= (((*(WrapperStruct00_var_1_5_Pointer)) | (*(WrapperStruct00_var_1_1_Pointer))) + (*(WrapperStruct00_var_1_13_Pointer)))) {
		(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
	} else {
		if ((*(WrapperStruct00_var_1_6_Pointer)) != ((abs ((*(WrapperStruct00_var_1_8_Pointer)))) - (*(WrapperStruct00_var_1_16_Pointer)))) {
			(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 32767);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= -32768);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 32767);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 32766);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 32766);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 1);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 4294967295);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 4294967295);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 254);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 127);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= -128);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 127);
	assume_abort_if_not(WrapperStruct00.var_1_15 != 0);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= 0.0F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) > (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (min ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer)))))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) 32))) && (((((*(WrapperStruct00_var_1_2_Pointer)) * (*(WrapperStruct00_var_1_1_Pointer))) < (*(WrapperStruct00_var_1_5_Pointer))) || (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) ? ((*(WrapperStruct00_var_1_6_Pointer)) == ((float) (*(WrapperStruct00_var_1_8_Pointer)))) : 1) : 1)) && ((((*(WrapperStruct00_var_1_10_Pointer)) / 1u) != ((*(WrapperStruct00_var_1_11_Pointer)) + 10u)) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((unsigned char) ((min ((*(WrapperStruct00_var_1_12_Pointer)) , 128)) - (*(WrapperStruct00_var_1_13_Pointer))))) : 1)) && ((((*(WrapperStruct00_var_1_4_Pointer)) / (max ((*(WrapperStruct00_var_1_15_Pointer)) , -8))) >= (((*(WrapperStruct00_var_1_5_Pointer)) | (*(WrapperStruct00_var_1_1_Pointer))) + (*(WrapperStruct00_var_1_13_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((float) (*(WrapperStruct00_var_1_8_Pointer)))) : (((*(WrapperStruct00_var_1_6_Pointer)) != ((abs ((*(WrapperStruct00_var_1_8_Pointer)))) - (*(WrapperStruct00_var_1_16_Pointer)))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((float) (*(WrapperStruct00_var_1_8_Pointer)))) : 1))
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
