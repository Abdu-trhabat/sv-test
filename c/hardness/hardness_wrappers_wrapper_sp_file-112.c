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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Wrapper_SP.c", 13, "reach_error"); }
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
	float var_1_7;
	unsigned char var_1_8;
	float var_1_9;
	float var_1_10;
	unsigned short int var_1_11;
	unsigned short int var_1_12;
	unsigned short int var_1_13;
	unsigned char var_1_14;
	signed char var_1_16;
	unsigned char var_1_17;
	unsigned char var_1_18;
	unsigned char var_1_19;
	unsigned char var_1_20;
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
	8.4,
	9999999999.14,
	16.2,
	15.125,
	256.4,
	256.75,
	8.8,
	1,
	25.75,
	8.6,
	128,
	0,
	10,
	1,
	5,
	128,
	32,
	0,
	128
};
float* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
float* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
unsigned char* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
float* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
float* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned short int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned short int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned short int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
signed char* WrapperStruct00_var_1_16_Pointer = &(WrapperStruct00.var_1_16);
unsigned char* WrapperStruct00_var_1_17_Pointer = &(WrapperStruct00.var_1_17);
unsigned char* WrapperStruct00_var_1_18_Pointer = &(WrapperStruct00.var_1_18);
unsigned char* WrapperStruct00_var_1_19_Pointer = &(WrapperStruct00.var_1_19);
unsigned char* WrapperStruct00_var_1_20_Pointer = &(WrapperStruct00.var_1_20);

// Calibration values

// Last'ed variables
float last_1_WrapperStruct00_var_1_7 = 8.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch112Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (min ((*(WrapperStruct00_var_1_4_Pointer)) , (max ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer))))));
	}


	// From: Req2Batch112Wrapper_SP
	if ((*(WrapperStruct00_var_1_8_Pointer))) {
		if (last_1_WrapperStruct00_var_1_7 < (*(WrapperStruct00_var_1_1_Pointer))) {
			(*(WrapperStruct00_var_1_7_Pointer)) = ((max ((*(WrapperStruct00_var_1_9_Pointer)) , 32.75f)) + (*(WrapperStruct00_var_1_10_Pointer)));
		}
	} else {
		(*(WrapperStruct00_var_1_7_Pointer)) = (*(WrapperStruct00_var_1_9_Pointer));
	}


	// From: Req3Batch112Wrapper_SP
	(*(WrapperStruct00_var_1_11_Pointer)) = (max ((*(WrapperStruct00_var_1_12_Pointer)) , (*(WrapperStruct00_var_1_13_Pointer))));


	// From: Req4Batch112Wrapper_SP
	signed long int stepLocal_0 = 0;
	if (stepLocal_0 <= ((*(WrapperStruct00_var_1_12_Pointer)) >> (*(WrapperStruct00_var_1_16_Pointer)))) {
		if (! ((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_2_Pointer)))) {
			if ((*(WrapperStruct00_var_1_8_Pointer))) {
				(*(WrapperStruct00_var_1_14_Pointer)) = ((max (128 , (*(WrapperStruct00_var_1_17_Pointer)))) - (*(WrapperStruct00_var_1_16_Pointer)));
			} else {
				if ((*(WrapperStruct00_var_1_7_Pointer)) >= (*(WrapperStruct00_var_1_10_Pointer))) {
					(*(WrapperStruct00_var_1_14_Pointer)) = ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_18_Pointer)));
				} else {
					if ((*(WrapperStruct00_var_1_19_Pointer))) {
						(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
					} else {
						(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_20_Pointer));
					}
				}
			}
		}
	} else {
		(*(WrapperStruct00_var_1_14_Pointer)) = (*(WrapperStruct00_var_1_18_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_8 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_8 <= 1);
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_9 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_9 <= -1.0e-20F) || (WrapperStruct00.var_1_9 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_9 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_10 >= -461168.6018427383000e+13F && WrapperStruct00.var_1_10 <= -1.0e-20F) || (WrapperStruct00.var_1_10 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_10 >= 1.0e-20F ));
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 65534);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 65534);
	WrapperStruct00.var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_16 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_16 <= 15);
	WrapperStruct00.var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_17 >= 127);
	assume_abort_if_not(WrapperStruct00.var_1_17 <= 254);
	WrapperStruct00.var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_18 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_18 <= 127);
	WrapperStruct00.var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_19 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_19 <= 1);
	WrapperStruct00.var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_20 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_20 <= 254);
}



void updateLastVariables(void) {
	last_1_WrapperStruct00_var_1_7 = WrapperStruct00.var_1_7;
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((float) (min ((*(WrapperStruct00_var_1_4_Pointer)) , (max ((*(WrapperStruct00_var_1_5_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer)))))))) : 1) && ((*(WrapperStruct00_var_1_8_Pointer)) ? ((last_1_WrapperStruct00_var_1_7 < (*(WrapperStruct00_var_1_1_Pointer))) ? ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) ((max ((*(WrapperStruct00_var_1_9_Pointer)) , 32.75f)) + (*(WrapperStruct00_var_1_10_Pointer))))) : 1) : ((*(WrapperStruct00_var_1_7_Pointer)) == ((float) (*(WrapperStruct00_var_1_9_Pointer)))))) && ((*(WrapperStruct00_var_1_11_Pointer)) == ((unsigned short int) (max ((*(WrapperStruct00_var_1_12_Pointer)) , (*(WrapperStruct00_var_1_13_Pointer))))))) && ((0 <= ((*(WrapperStruct00_var_1_12_Pointer)) >> (*(WrapperStruct00_var_1_16_Pointer)))) ? ((! ((*(WrapperStruct00_var_1_1_Pointer)) != (*(WrapperStruct00_var_1_2_Pointer)))) ? ((*(WrapperStruct00_var_1_8_Pointer)) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) ((max (128 , (*(WrapperStruct00_var_1_17_Pointer)))) - (*(WrapperStruct00_var_1_16_Pointer))))) : (((*(WrapperStruct00_var_1_7_Pointer)) >= (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_16_Pointer)) + (*(WrapperStruct00_var_1_18_Pointer))))) : ((*(WrapperStruct00_var_1_19_Pointer)) ? ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer)))) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_20_Pointer))))))) : 1) : ((*(WrapperStruct00_var_1_14_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_18_Pointer)))))
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
