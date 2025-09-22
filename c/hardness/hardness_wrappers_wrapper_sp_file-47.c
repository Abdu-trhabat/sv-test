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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch47Wrapper_SP.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))



struct WrapperStruct00;

struct WrapperStruct00 {
	double var_1_1;
	double var_1_2;
	double var_1_3;
	unsigned char var_1_4;
	unsigned char var_1_5;
	signed long int var_1_6;
	signed long int var_1_7;
	double var_1_8;
	signed char var_1_9;
	signed char var_1_10;
	signed char var_1_11;
	signed long int var_1_12;
	unsigned char var_1_13;
	unsigned char var_1_14;
	double var_1_15;
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
	24.575,
	-0.5,
	128.5,
	2,
	32,
	-128,
	256,
	3.5,
	16,
	16,
	4,
	8,
	1,
	1,
	3.8
};
double* WrapperStruct00_var_1_1_Pointer = &(WrapperStruct00.var_1_1);
double* WrapperStruct00_var_1_2_Pointer = &(WrapperStruct00.var_1_2);
double* WrapperStruct00_var_1_3_Pointer = &(WrapperStruct00.var_1_3);
unsigned char* WrapperStruct00_var_1_4_Pointer = &(WrapperStruct00.var_1_4);
unsigned char* WrapperStruct00_var_1_5_Pointer = &(WrapperStruct00.var_1_5);
signed long int* WrapperStruct00_var_1_6_Pointer = &(WrapperStruct00.var_1_6);
signed long int* WrapperStruct00_var_1_7_Pointer = &(WrapperStruct00.var_1_7);
double* WrapperStruct00_var_1_8_Pointer = &(WrapperStruct00.var_1_8);
signed char* WrapperStruct00_var_1_9_Pointer = &(WrapperStruct00.var_1_9);
signed char* WrapperStruct00_var_1_10_Pointer = &(WrapperStruct00.var_1_10);
signed char* WrapperStruct00_var_1_11_Pointer = &(WrapperStruct00.var_1_11);
signed long int* WrapperStruct00_var_1_12_Pointer = &(WrapperStruct00.var_1_12);
unsigned char* WrapperStruct00_var_1_13_Pointer = &(WrapperStruct00.var_1_13);
unsigned char* WrapperStruct00_var_1_14_Pointer = &(WrapperStruct00.var_1_14);
double* WrapperStruct00_var_1_15_Pointer = &(WrapperStruct00.var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch47Wrapper_SP
	if ((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) {
		if (((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))) >= ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (abs ((*(WrapperStruct00_var_1_8_Pointer))));
		}
	} else {
		if ((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) {
			(*(WrapperStruct00_var_1_1_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));
		}
	}


	// From: Req3Batch47Wrapper_SP
	unsigned char stepLocal_0 = ! (*(WrapperStruct00_var_1_13_Pointer));
	if (stepLocal_0 || (*(WrapperStruct00_var_1_14_Pointer))) {
		if (! (*(WrapperStruct00_var_1_14_Pointer))) {
			(*(WrapperStruct00_var_1_12_Pointer)) = (abs (min ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer)))));
		} else {
			(*(WrapperStruct00_var_1_12_Pointer)) = (*(WrapperStruct00_var_1_5_Pointer));
		}
	}


	// From: Req4Batch47Wrapper_SP
	(*(WrapperStruct00_var_1_15_Pointer)) = (*(WrapperStruct00_var_1_8_Pointer));


	// From: Req2Batch47Wrapper_SP
	if (-4 > (*(WrapperStruct00_var_1_12_Pointer))) {
		if ((~ (*(WrapperStruct00_var_1_12_Pointer))) <= (*(WrapperStruct00_var_1_12_Pointer))) {
			(*(WrapperStruct00_var_1_9_Pointer)) = (abs ((*(WrapperStruct00_var_1_10_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer))));
		}
	} else {
		(*(WrapperStruct00_var_1_9_Pointer)) = (*(WrapperStruct00_var_1_10_Pointer));
	}
}



void updateVariables(void) {
	WrapperStruct00.var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_2 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_2 <= -1.0e-20F) || (WrapperStruct00.var_1_2 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_2 >= 1.0e-20F ));
	WrapperStruct00.var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_3 >= -922337.2036854776000e+13F && WrapperStruct00.var_1_3 <= -1.0e-20F) || (WrapperStruct00.var_1_3 <= 9223372.036854776000e+12F && WrapperStruct00.var_1_3 >= 1.0e-20F ));
	WrapperStruct00.var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_4 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_4 <= 255);
	WrapperStruct00.var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_5 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_5 <= 255);
	WrapperStruct00.var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_6 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_6 <= 2147483647);
	WrapperStruct00.var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(WrapperStruct00.var_1_7 >= -2147483648);
	assume_abort_if_not(WrapperStruct00.var_1_7 <= 2147483647);
	WrapperStruct00.var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((WrapperStruct00.var_1_8 >= -922337.2036854766000e+13F && WrapperStruct00.var_1_8 <= -1.0e-20F) || (WrapperStruct00.var_1_8 <= 9223372.036854766000e+12F && WrapperStruct00.var_1_8 >= 1.0e-20F ));
	WrapperStruct00.var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_10 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_10 <= 63);
	WrapperStruct00.var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(WrapperStruct00.var_1_11 >= -63);
	assume_abort_if_not(WrapperStruct00.var_1_11 <= 63);
	WrapperStruct00.var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_13 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_13 <= 1);
	WrapperStruct00.var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(WrapperStruct00.var_1_14 >= 0);
	assume_abort_if_not(WrapperStruct00.var_1_14 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(WrapperStruct00_var_1_2_Pointer)) <= (*(WrapperStruct00_var_1_3_Pointer))) ? ((((*(WrapperStruct00_var_1_4_Pointer)) + (*(WrapperStruct00_var_1_5_Pointer))) >= ((*(WrapperStruct00_var_1_6_Pointer)) + (*(WrapperStruct00_var_1_7_Pointer)))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (abs ((*(WrapperStruct00_var_1_8_Pointer)))))) : 1) : (((*(WrapperStruct00_var_1_6_Pointer)) > (*(WrapperStruct00_var_1_7_Pointer))) ? ((*(WrapperStruct00_var_1_1_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer)))) : 1)) && ((-4 > (*(WrapperStruct00_var_1_12_Pointer))) ? (((~ (*(WrapperStruct00_var_1_12_Pointer))) <= (*(WrapperStruct00_var_1_12_Pointer))) ? ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (abs ((*(WrapperStruct00_var_1_10_Pointer)) + (*(WrapperStruct00_var_1_11_Pointer)))))) : 1) : ((*(WrapperStruct00_var_1_9_Pointer)) == ((signed char) (*(WrapperStruct00_var_1_10_Pointer)))))) && (((! (*(WrapperStruct00_var_1_13_Pointer))) || (*(WrapperStruct00_var_1_14_Pointer))) ? ((! (*(WrapperStruct00_var_1_14_Pointer))) ? ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) (abs (min ((*(WrapperStruct00_var_1_4_Pointer)) , (*(WrapperStruct00_var_1_5_Pointer))))))) : ((*(WrapperStruct00_var_1_12_Pointer)) == ((signed long int) (*(WrapperStruct00_var_1_5_Pointer))))) : 1)) && ((*(WrapperStruct00_var_1_15_Pointer)) == ((double) (*(WrapperStruct00_var_1_8_Pointer))))
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
