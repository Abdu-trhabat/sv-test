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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch48Wrapper_SP.c", 13, "reach_error"); }
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
	float var_1_5;
	float var_1_6;
	unsigned short int var_1_7;
	unsigned char var_1_8;
	unsigned short int var_1_9;
	signed long int var_1_10;
	unsigned short int var_1_11;
	unsigned short int var_1_12;
	float var_1_13;
	float var_1_14;
	float var_1_15;
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
	32.8,
	255.675,
	5.5,
	128.75,
	4.5,
	9.25,
	4,
	0,
	0,
	-128,
	0,
	256,
	2.35,
	63.8,
	128.5,
	15.6
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned short int* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
float* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
float* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
float* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);
float* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch48Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) {
		if ((*(WrapperStruct00_var_1_3_Pointer)) < (((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))) + 1.395f)) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
		} else {
			(*(WrapperStruct00_var_1_1_Pointer)) = 3.25f;
		}
	} else {
		(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
	}


	// From: Req2Batch48Wrapper_SP
	if ((*(WrapperStruct00_var_1_8_Pointer))) {
		if (((abs (16)) + (*(WrapperStruct00_var_1_9_Pointer))) <= (*(WrapperStruct00_var_1_10_Pointer))) {
			(*(WrapperStruct00_var_1_7_Pointer)) = (max (0 , (*(WrapperStruct00_var_1_11_Pointer))));
		} else {
			(*(WrapperStruct00_var_1_7_Pointer)) = ((*(WrapperStruct00_var_1_12_Pointer)) + (abs (5)));
		}
	}


	// From: Req3Batch48Wrapper_SP
	if (((*(WrapperStruct00_var_1_12_Pointer)) * (*(WrapperStruct00_var_1_10_Pointer))) < (*(WrapperStruct00_var_1_7_Pointer))) {
		(*(WrapperStruct00_var_1_13_Pointer)) = (max ((*(WrapperStruct00_var_1_6_Pointer)) , ((*(WrapperStruct00_var_1_14_Pointer)) + ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer))))));
	} else {
		if ((max ((*(WrapperStruct00_var_1_7_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))) <= 50) {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_16_Pointer));
		} else {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_15_Pointer));
		}
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 65535);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483647);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 65534);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 32767);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_14 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_14 <= -1.0e-20F) || (WrapperStruct00.var_1_14 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_14 >= 1.0e-20F ));
	WrapperStruct00.var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_15 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_15 <= -1.0e-20F) || (WrapperStruct00.var_1_15 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_15 >= 1.0e-20F ));
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_16 >= -230584.3009213691400e+13F && WrapperStruct00.var_1_16 <= -1.0e-20F) || (WrapperStruct00.var_1_16 <= 2305843.009213691400e+12F && WrapperStruct00.var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? (((*(WrapperStruct00_var_1_3_Pointer)) < (((*(WrapperStruct00_var_1_4_Pointer)) - (*(WrapperStruct00_var_1_5_Pointer))) + 1.395f)) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) 3.25f))) : ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (*(WrapperStruct00_var_1_6_Pointer))))) && ((*(WrapperStruct00_var_1_8_Pointer)) ? ((((abs (16)) + (*(WrapperStruct00_var_1_9_Pointer))) <= (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) (max (0 , (*(WrapperStruct00_var_1_11_Pointer)))))) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((unsigned short int) ((*(WrapperStruct00_var_1_12_Pointer)) + (abs (5)))))) : 1)) && ((((*(WrapperStruct00_var_1_12_Pointer)) * (*(WrapperStruct00_var_1_10_Pointer))) < (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) (max ((*(WrapperStruct00_var_1_6_Pointer)) , ((*(WrapperStruct00_var_1_14_Pointer)) + ((*(WrapperStruct00_var_1_15_Pointer)) + (*(WrapperStruct00_var_1_16_Pointer)))))))) : (((max ((*(WrapperStruct00_var_1_7_Pointer)) , (*(WrapperStruct00_var_1_10_Pointer)))) <= 50) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) (*(WrapperStruct00_var_1_16_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((float) (*(WrapperStruct00_var_1_15_Pointer))))))
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
