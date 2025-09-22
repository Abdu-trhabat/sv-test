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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch189Wrapper_SP.c", 13, "reach_error"); }
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
	unsigned char var_1_4;
	float var_1_5;
	signed long int var_1_8;
	float var_1_9;
	float var_1_10;
	float var_1_11;
	unsigned short int var_1_12;
	unsigned short int var_1_13;
	unsigned char var_1_14;
	unsigned char var_1_15;
	unsigned long int var_1_16;
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
	0,
	1,
	0,
	0,
	0.9,
	5,
	4.5,
	24.5,
	5.25,
	60381,
	0,
	64,
	8,
	4
};
unsigned char* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
unsigned char* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
unsigned char* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
float* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
unsigned char* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
unsigned long int* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables
unsigned char last_1_WrapperStruct00_var_1_1 = 0;
unsigned long int last_1_WrapperStruct00_var_1_16 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch189Wrapper_SP
	signed long int stepLocal_1 = (*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer));
	if (last_1_WrapperStruct00_var_1_1) {
		if (stepLocal_1 < last_1_WrapperStruct00_var_1_16) {
			(*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
	}


	// From: Req4Batch189Wrapper_SP
	if (64.8f <= (*(WrapperStruct00_var_1_11_Pointer))) {
		(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
	}


	// From: Req5Batch189Wrapper_SP
	signed long int stepLocal_2 = (*(WrapperStruct00_var_1_8_Pointer));
	if ((*(WrapperStruct00_var_1_14_Pointer)) <= stepLocal_2) {
		if (! ((*(WrapperStruct00_var_1_13_Pointer)) <= (*(WrapperStruct00_var_1_12_Pointer)))) {
			(*(WrapperStruct00_var_1_16_Pointer)) = (max ((max (((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))) , (*(WrapperStruct00_var_1_12_Pointer)))) , (*(WrapperStruct00_var_1_13_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_16_Pointer)) = (*(WrapperStruct00_var_1_13_Pointer));
	}


	// From: Req1Batch189Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_3_Pointer));
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (! (*(WrapperStruct00_var_1_4_Pointer)));
	}


	// From: Req2Batch189Wrapper_SP
	unsigned long int stepLocal_0 = min ((*(WrapperStruct00_var_1_16_Pointer)) , (*(WrapperStruct00_var_1_14_Pointer)));
	if (stepLocal_0 >= (*(WrapperStruct00_var_1_16_Pointer))) {
		(*(WrapperStruct00_var_1_5_Pointer)) = (abs ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_5_Pointer)) = (abs ((*(WrapperStruct00_var_1_10_Pointer))));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 1);
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_3 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_3 <= 1);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 0);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 2147483647);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= 0.0F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= 0.0F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 32767);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 65535);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 32767);
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_15 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_15 <= 254);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_1 = WrapperStruct00.var_1_1;
	last_1_WrapperStruct00_var_1_16 = WrapperStruct00.var_1_16;
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_3_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned char) (! (*(WrapperStruct00_var_1_4_Pointer)))))) && (((min ((*(WrapperStruct00_var_1_16_Pointer)) , (*(WrapperStruct00_var_1_14_Pointer)))) >= (*(WrapperStruct00_var_1_16_Pointer))) ? ((*(WrapperStruct00_var_1_5_Pointer)) == ((float) (abs ((*(WrapperStruct00_var_1_9_Pointer)) - (*(WrapperStruct00_var_1_10_Pointer)))))) : ((*(WrapperStruct00_var_1_5_Pointer)) == ((float) (abs ((*(WrapperStruct00_var_1_10_Pointer)))))))) && (last_1_WrapperStruct00_var_1_1 ? ((((*(WrapperStruct00_var_1_12_Pointer)) - (*(WrapperStruct00_var_1_13_Pointer))) < last_1_WrapperStruct00_var_1_16) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((float) (*(WrapperStruct00_var_1_9_Pointer)))) : 1) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((float) (*(WrapperStruct00_var_1_9_Pointer)))))) && ((64.8f <= (*(WrapperStruct00_var_1_11_Pointer))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_15_Pointer)))) : 1)) && (((*(WrapperStruct00_var_1_14_Pointer)) <= (*(WrapperStruct00_var_1_8_Pointer))) ? ((! ((*(WrapperStruct00_var_1_13_Pointer)) <= (*(WrapperStruct00_var_1_12_Pointer)))) ? ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned long int) (max ((max (((*(WrapperStruct00_var_1_14_Pointer)) + (*(WrapperStruct00_var_1_15_Pointer))) , (*(WrapperStruct00_var_1_12_Pointer)))) , (*(WrapperStruct00_var_1_13_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_16_Pointer)) == ((unsigned long int) (*(WrapperStruct00_var_1_13_Pointer)))))
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
