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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch0Wrapper_P.c", 13, "reach_error"); }
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
double var_1_1 = 25.8;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 128.2;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 15.4;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 5.25;
double* var_1_5_Pointer = &(var_1_5);
signed long int var_1_8 = -4;
signed long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 100;
unsigned char* var_1_10_Pointer = &(var_1_10);
signed long int var_1_11 = -256;
signed long int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 5;
unsigned short int* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_13 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch0Wrapper_P
	if (((*(var_1_8_Pointer)) + last_1_var_1_13) < (*(var_1_11_Pointer))) {
		if (last_1_var_1_13 > (*(var_1_11_Pointer))) {
			(*(var_1_10_Pointer)) = (*(var_1_12_Pointer));
		}
	}


	// From: Req1Batch0Wrapper_P
	if (! (*(var_1_2_Pointer))) {
		(*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer)));
	} else {
		(*(var_1_1_Pointer)) = (min (16.2 , (*(var_1_3_Pointer))));
	}


	// From: Req2Batch0Wrapper_P
	if (((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_1_Pointer)))) != (*(var_1_1_Pointer))) {
		if ((*(var_1_2_Pointer))) {
			if ((- (*(var_1_10_Pointer))) <= (*(var_1_8_Pointer))) {
				if ((*(var_1_9_Pointer))) {
					(*(var_1_5_Pointer)) = (*(var_1_4_Pointer));
				}
			} else {
				(*(var_1_5_Pointer)) = (*(var_1_3_Pointer));
			}
		} else {
			(*(var_1_5_Pointer)) = (*(var_1_3_Pointer));
		}
	} else {
		(*(var_1_5_Pointer)) = (*(var_1_3_Pointer));
	}


	// From: Req4Batch0Wrapper_P
	if ((*(var_1_9_Pointer))) {
		if (((*(var_1_4_Pointer)) * ((*(var_1_3_Pointer)) - 5.3)) <= (*(var_1_5_Pointer))) {
			(*(var_1_13_Pointer)) = (*(var_1_10_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483648);
	assume_abort_if_not(var_1_11 <= 2147483647);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
}

int property(void) {
	return ((((! (*(var_1_2_Pointer))) ? ((*(var_1_1_Pointer)) == ((double) ((*(var_1_3_Pointer)) - (*(var_1_4_Pointer))))) : ((*(var_1_1_Pointer)) == ((double) (min (16.2 , (*(var_1_3_Pointer))))))) && ((((*(var_1_3_Pointer)) + ((*(var_1_4_Pointer)) + (*(var_1_1_Pointer)))) != (*(var_1_1_Pointer))) ? ((*(var_1_2_Pointer)) ? (((- (*(var_1_10_Pointer))) <= (*(var_1_8_Pointer))) ? ((*(var_1_9_Pointer)) ? ((*(var_1_5_Pointer)) == ((double) (*(var_1_4_Pointer)))) : 1) : ((*(var_1_5_Pointer)) == ((double) (*(var_1_3_Pointer))))) : ((*(var_1_5_Pointer)) == ((double) (*(var_1_3_Pointer))))) : ((*(var_1_5_Pointer)) == ((double) (*(var_1_3_Pointer)))))) && ((((*(var_1_8_Pointer)) + last_1_var_1_13) < (*(var_1_11_Pointer))) ? ((last_1_var_1_13 > (*(var_1_11_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))) : 1) : 1)) && ((*(var_1_9_Pointer)) ? ((((*(var_1_4_Pointer)) * ((*(var_1_3_Pointer)) - 5.3)) <= (*(var_1_5_Pointer))) ? ((*(var_1_13_Pointer)) == ((unsigned short int) (*(var_1_10_Pointer)))) : 1) : 1)
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
