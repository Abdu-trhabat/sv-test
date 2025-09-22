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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	unsigned short int var_1_1;
	double var_1_2;
	double var_1_3;
	double var_1_4;
	unsigned short int var_1_5;
	unsigned short int var_1_6;
	unsigned short int var_1_7;
	signed short int var_1_8;
	unsigned char var_1_10;
	unsigned char var_1_11;
	unsigned char var_1_12;
	signed long int var_1_13;
	signed char var_1_14;
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
	128,
	7.5,
	255.75,
	99.25,
	55604,
	128,
	16,
	-4,
	1,
	1,
	0,
	-1,
	50
};
unsigned short int* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
double* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned short int* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
unsigned short int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
unsigned short int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
signed short int* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
unsigned char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
unsigned char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
unsigned char* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
signed long int* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
signed char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch183Wrapper_SP
	if (((*(WrapperStruct00_var_1_2_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_4_Pointer))) {
		(*(WrapperStruct00_var_1_1_Pointer)) = (((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer))) - (*(WrapperStruct00_var_1_7_Pointer)));
	}


	// From: Req3Batch183Wrapper_SP
	if ((*(WrapperStruct00_var_1_1_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) {
		if ((*(WrapperStruct00_var_1_4_Pointer)) > ((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer)))) {
			(*(WrapperStruct00_var_1_10_Pointer)) = (*(WrapperStruct00_var_1_11_Pointer));
		} else {
			(*(WrapperStruct00_var_1_10_Pointer)) = 0;
		}
	} else {
		(*(WrapperStruct00_var_1_10_Pointer)) = ((*(WrapperStruct00_var_1_11_Pointer)) && (! (*(WrapperStruct00_var_1_12_Pointer))));
	}


	// From: Req4Batch183Wrapper_SP
	unsigned short int stepLocal_2 = (*(WrapperStruct00_var_1_5_Pointer));
	unsigned short int stepLocal_1 = (*(WrapperStruct00_var_1_7_Pointer));
	if (stepLocal_1 <= (*(WrapperStruct00_var_1_1_Pointer))) {
		if ((abs ((*(WrapperStruct00_var_1_14_Pointer)))) < stepLocal_2) {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_14_Pointer));
		} else {
			(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_7_Pointer));
		}
	} else {
		(*(WrapperStruct00_var_1_13_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
	}


	// From: Req2Batch183Wrapper_SP
	signed long int stepLocal_0 = max ((*(WrapperStruct00_var_1_13_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer)));
	if ((*(WrapperStruct00_var_1_5_Pointer)) >= stepLocal_0) {
		if (! (*(WrapperStruct00_var_1_10_Pointer))) {
			(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_6_Pointer));
		} else {
			(*(WrapperStruct00_var_1_8_Pointer)) = -4;
		}
	} else {
		(*(WrapperStruct00_var_1_8_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
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
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 49150);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 65534);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 16383);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 32767);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= 1);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 1);
	WrapperStruct00.var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_12 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_12 <= 0);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= -127);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(WrapperStruct00_var_1_2_Pointer)) / (*(WrapperStruct00_var_1_3_Pointer))) >= (*(WrapperStruct00_var_1_4_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((unsigned short int) (((*(WrapperStruct00_var_1_5_Pointer)) - (*(WrapperStruct00_var_1_6_Pointer))) - (*(WrapperStruct00_var_1_7_Pointer))))) : 1) && (((*(WrapperStruct00_var_1_5_Pointer)) >= (max ((*(WrapperStruct00_var_1_13_Pointer)) , (*(WrapperStruct00_var_1_6_Pointer))))) ? ((! (*(WrapperStruct00_var_1_10_Pointer))) ? ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_6_Pointer)))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed short int) -4))) : ((*(WrapperStruct00_var_1_8_Pointer)) == ((signed short int) (*(WrapperStruct00_var_1_5_Pointer)))))) && (((*(WrapperStruct00_var_1_1_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) ? (((*(WrapperStruct00_var_1_4_Pointer)) > ((*(WrapperStruct00_var_1_2_Pointer)) + (*(WrapperStruct00_var_1_3_Pointer)))) ? ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) (*(WrapperStruct00_var_1_11_Pointer)))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) 0))) : ((*(WrapperStruct00_var_1_10_Pointer)) == ((unsigned char) ((*(WrapperStruct00_var_1_11_Pointer)) && (! (*(WrapperStruct00_var_1_12_Pointer)))))))) && (((*(WrapperStruct00_var_1_7_Pointer)) <= (*(WrapperStruct00_var_1_1_Pointer))) ? (((abs ((*(WrapperStruct00_var_1_14_Pointer)))) < (*(WrapperStruct00_var_1_5_Pointer))) ? ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_14_Pointer)))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_7_Pointer))))) : ((*(WrapperStruct00_var_1_13_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer)))))
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
