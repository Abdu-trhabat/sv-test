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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch120Wrapper_P.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }



#define max(a,b) (((a) > (b)) ? (a) : (b))
#define min(a,b) (((a) < (b)) ? (a) : (b))
#define abs(a) (((a) < 0 ) ? -(a) : (a))





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
double var_1_1 = 256.5;
double* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 64;
signed long int* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 1;
unsigned char* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 99999999999.6;
double* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = -4;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -2;
signed short int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = -8;
signed short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = -4;
signed short int* var_1_8_Pointer = &(var_1_8);
double var_1_10 = 255.6;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 128.25;
double* var_1_11_Pointer = &(var_1_11);
double var_1_12 = 32.5;
double* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 8.8;
double* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 16.75;
double* var_1_14_Pointer = &(var_1_14);
double var_1_15 = 3.4;
double* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 1;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 100;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 128;
unsigned char* var_1_19_Pointer = &(var_1_19);
double var_1_20 = 100000000000.2;
double* var_1_20_Pointer = &(var_1_20);
double var_1_21 = 128.6;
double* var_1_21_Pointer = &(var_1_21);
signed char var_1_22 = 32;
signed char* var_1_22_Pointer = &(var_1_22);
signed char var_1_23 = 25;
signed char* var_1_23_Pointer = &(var_1_23);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_16 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch120Wrapper_P
	signed long int stepLocal_1 = (*(var_1_2_Pointer));
	if (last_1_var_1_16) {
		(*(var_1_5_Pointer)) = (max ((abs ((*(var_1_6_Pointer)) + -5)) , (*(var_1_7_Pointer))));
	} else {
		if (((*(var_1_7_Pointer)) * (*(var_1_8_Pointer))) > stepLocal_1) {
			if (last_1_var_1_16) {
				(*(var_1_5_Pointer)) = (*(var_1_6_Pointer));
			}
		} else {
			(*(var_1_5_Pointer)) = -32;
		}
	}


	// From: Req4Batch120Wrapper_P
	signed short int stepLocal_2 = (*(var_1_5_Pointer));
	if (stepLocal_2 != (*(var_1_8_Pointer))) {
		(*(var_1_16_Pointer)) = ((*(var_1_3_Pointer)) || (*(var_1_17_Pointer)));
	}


	// From: Req1Batch120Wrapper_P
	signed long int stepLocal_0 = (*(var_1_2_Pointer));
	if (10 > stepLocal_0) {
		if ((*(var_1_16_Pointer))) {
			(*(var_1_1_Pointer)) = (abs ((*(var_1_4_Pointer))));
		}
	}


	// From: Req3Batch120Wrapper_P
	if ((*(var_1_2_Pointer)) > (*(var_1_6_Pointer))) {
		(*(var_1_10_Pointer)) = (min (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) , ((*(var_1_13_Pointer)) + (max ((*(var_1_14_Pointer)) , (*(var_1_15_Pointer)))))));
	}


	// From: Req5Batch120Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_19_Pointer));


	// From: Req6Batch120Wrapper_P
	(*(var_1_20_Pointer)) = (*(var_1_21_Pointer));


	// From: Req7Batch120Wrapper_P
	(*(var_1_22_Pointer)) = (*(var_1_23_Pointer));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -16383);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= -32767);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32768);
	assume_abort_if_not(var_1_8 <= 32767);
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -461168.6018427383000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= -127);
	assume_abort_if_not(var_1_23 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return (((((((10 > (*(var_1_2_Pointer))) ? ((*(var_1_16_Pointer)) ? ((*(var_1_1_Pointer)) == ((double) (abs ((*(var_1_4_Pointer)))))) : 1) : 1) && (last_1_var_1_16 ? ((*(var_1_5_Pointer)) == ((signed short int) (max ((abs ((*(var_1_6_Pointer)) + -5)) , (*(var_1_7_Pointer)))))) : ((((*(var_1_7_Pointer)) * (*(var_1_8_Pointer))) > (*(var_1_2_Pointer))) ? (last_1_var_1_16 ? ((*(var_1_5_Pointer)) == ((signed short int) (*(var_1_6_Pointer)))) : 1) : ((*(var_1_5_Pointer)) == ((signed short int) -32))))) && (((*(var_1_2_Pointer)) > (*(var_1_6_Pointer))) ? ((*(var_1_10_Pointer)) == ((double) (min (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) , ((*(var_1_13_Pointer)) + (max ((*(var_1_14_Pointer)) , (*(var_1_15_Pointer))))))))) : 1)) && (((*(var_1_5_Pointer)) != (*(var_1_8_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned char) ((*(var_1_3_Pointer)) || (*(var_1_17_Pointer))))) : 1)) && ((*(var_1_18_Pointer)) == ((unsigned char) (*(var_1_19_Pointer))))) && ((*(var_1_20_Pointer)) == ((double) (*(var_1_21_Pointer))))) && ((*(var_1_22_Pointer)) == ((signed char) (*(var_1_23_Pointer))))
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
