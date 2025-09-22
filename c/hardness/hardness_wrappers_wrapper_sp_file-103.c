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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch103Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	signed short int var_1_1;
	signed short int var_1_2;
	float var_1_3;
	float var_1_4;
	float var_1_5;
	float var_1_6;
	float var_1_7;
	signed long int var_1_8;
	unsigned char var_1_9;
	signed long int var_1_10;
	signed long int var_1_11;
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
	-1,
	16,
	0.050000000000000044,
	16.75,
	64.25,
	0.0,
	999999999.2,
	4,
	1,
	0,
	32
};
signed short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
signed short int* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
float* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
float* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
float* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
float* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
float* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed long int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed long int* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed long int* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch103Wrapper_SP
	(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));


	// From: Req3Batch103Wrapper_SP
	if (! (*(WrapperStruct00_var_1_9_Pointer))) {
		if (! ((10.25f - (*(WrapperStruct00_var_1_4_Pointer))) <= (*(WrapperStruct00_var_1_5_Pointer)))) {
			if (((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer))) <= (- 99999.25f)) {
				(*(WrapperStruct00_var_1_8_Pointer)) = ((*(WrapperStruct00_var_1_10_Pointer)) - 64);
			} else {
				(*(WrapperStruct00_var_1_8_Pointer)) = (max ((min ((max ((*(WrapperStruct00_var_1_2_Pointer)) , 16)) , (*(WrapperStruct00_var_1_1_Pointer)))) , 2));
			}
		}
	}


	// From: Req4Batch103Wrapper_SP
	if (! (*(WrapperStruct00_var_1_9_Pointer))) {
		if ((*(WrapperStruct00_var_1_9_Pointer))) {
			(*(WrapperStruct00_var_1_11_Pointer)) = ((min (-256 , (*(WrapperStruct00_var_1_8_Pointer)))) + (*(WrapperStruct00_var_1_2_Pointer)));
		} else {
			(*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_11_Pointer)) = (*(WrapperStruct00_var_1_2_Pointer));
	}


	// From: Req2Batch103Wrapper_SP
	signed short int stepLocal_0 = (*(WrapperStruct00_var_1_2_Pointer));
	if ((*(WrapperStruct00_var_1_8_Pointer)) > stepLocal_0) {
		(*(WrapperStruct00_var_1_3_Pointer)) = (((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))) - ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer))));
	} else {
		(*(WrapperStruct00_var_1_3_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(WrapperStruct00.var_1_2 >= -32767);
	assume_abort_if_not(WrapperStruct00.var_1_2 <= 32766);
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_4 >= 0.0F && WrapperStruct00.var_1_4 <= -1.0e-20F) || (WrapperStruct00.var_1_4 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_4 >= 1.0e-20F ));
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_5 >= 0.0F && WrapperStruct00.var_1_5 <= -1.0e-20F) || (WrapperStruct00.var_1_5 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_5 >= 1.0e-20F ));
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_6 >= 4611686.018427383000e+12F && WrapperStruct00.var_1_6 <= -1.0e-20F) || (WrapperStruct00.var_1_6 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_6 >= 1.0e-20F ));
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((WrapperStruct00.var_1_7 >= 0.0F && WrapperStruct00.var_1_7 <= -1.0e-20F) || (WrapperStruct00.var_1_7 <= 4611686.018427383000e+12F && WrapperStruct00.var_1_7 >= 1.0e-20F ));
	WrapperStruct00.var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_9 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_9 <= 1);
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -1);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 2147483646);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(WrapperStruct00_var_1_1_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_2_Pointer)))) && (((*(WrapperStruct00_var_1_8_Pointer)) > (*(WrapperStruct00_var_1_2_Pointer))) ? ((*(WrapperStruct00_var_1_3_Pointer)) == ((float) (((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))) - ((*(WrapperStruct00_var_1_6_Pointer)) - (*(WrapperStruct00_var_1_7_Pointer)))))) : ((*(WrapperStruct00_var_1_3_Pointer)) == ((float) (*(WrapperStruct00_var_1_7_Pointer)))))) && ((! (*(WrapperStruct00_var_1_9_Pointer))) ? ((! ((10.25f - (*(WrapperStruct00_var_1_4_Pointer))) <= (*(WrapperStruct00_var_1_5_Pointer)))) ? ((((*(WrapperStruct00_var_1_7_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer))) <= (- 99999.25f)) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) ((*(WrapperStruct00_var_1_10_Pointer)) - 64))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed long int) (max ((min ((max ((*(WrapperStruct00_var_1_2_Pointer)) , 16)) , (*(WrapperStruct00_var_1_1_Pointer)))) , 2))))) : 1) : 1)) && ((! (*(WrapperStruct00_var_1_9_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) ? ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) ((min (-256 , (*(WrapperStruct00_var_1_8_Pointer)))) + (*(WrapperStruct00_var_1_2_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_2_Pointer))))) : ((*(WrapperStruct00_var_1_11_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_2_Pointer)))))
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
