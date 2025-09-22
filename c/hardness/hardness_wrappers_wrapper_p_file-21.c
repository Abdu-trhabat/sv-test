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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch21Wrapper_P.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 32;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 8;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned char var_1_3 = 4;
unsigned char* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 32;
unsigned char* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = -128;
signed long int* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -1000000000;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 15.6;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 15.4;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 32.2;
double* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
signed short int var_1_13 = 256;
signed short int* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 5.75;
float* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 8.6;
float* var_1_15_Pointer = &(var_1_15);

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_7 = 0;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch21Wrapper_P
	if (((*(var_1_2_Pointer)) + (max ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))))) < ((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) {
		if ((*(var_1_5_Pointer)) < ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))) {
			if ((*(var_1_5_Pointer)) != (abs (min ((*(var_1_4_Pointer)) , (*(var_1_2_Pointer)))))) {
				(*(var_1_1_Pointer)) = (*(var_1_2_Pointer));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
	}


	// From: Req2Batch21Wrapper_P
	if ((min ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer)))) <= (*(var_1_10_Pointer))) {
		if (last_1_var_1_7 && ((*(var_1_5_Pointer)) >= (*(var_1_1_Pointer)))) {
			(*(var_1_7_Pointer)) = 0;
		}
	} else {
		(*(var_1_7_Pointer)) = (*(var_1_12_Pointer));
	}


	// From: Req3Batch21Wrapper_P
	if ((*(var_1_12_Pointer))) {
		if (((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))) >= (((*(var_1_8_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_9_Pointer)))) {
			(*(var_1_13_Pointer)) = (max ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer))));
		} else {
			(*(var_1_13_Pointer)) = (*(var_1_4_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 255);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
}

int property(void) {
	return (((((*(var_1_2_Pointer)) + (max ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))))) < ((*(var_1_5_Pointer)) * (*(var_1_6_Pointer)))) ? (((*(var_1_5_Pointer)) < ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)))) ? (((*(var_1_5_Pointer)) != (abs (min ((*(var_1_4_Pointer)) , (*(var_1_2_Pointer)))))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_2_Pointer)))) : 1) : 1) : ((*(var_1_1_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer))))) && (((min ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer)))) <= (*(var_1_10_Pointer))) ? ((last_1_var_1_7 && ((*(var_1_5_Pointer)) >= (*(var_1_1_Pointer)))) ? ((*(var_1_7_Pointer)) == ((unsigned char) 0)) : 1) : ((*(var_1_7_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))))) && ((*(var_1_12_Pointer)) ? ((((*(var_1_14_Pointer)) - (*(var_1_15_Pointer))) >= (((*(var_1_8_Pointer)) + (*(var_1_10_Pointer))) + (*(var_1_9_Pointer)))) ? ((*(var_1_13_Pointer)) == ((signed short int) (max ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))))) : ((*(var_1_13_Pointer)) == ((signed short int) (*(var_1_4_Pointer))))) : 1)
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
