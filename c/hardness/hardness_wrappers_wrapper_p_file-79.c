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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_1 = -16;
signed char* var_1_1_Pointer = &(var_1_1);
signed char var_1_3 = 0;
signed char* var_1_3_Pointer = &(var_1_3);
signed char var_1_4 = 64;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 64;
signed char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -64;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_8 = 4;
signed long int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 8;
signed short int* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 32.5;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 1.6;
double* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 32;
unsigned short int* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 15.5;
float* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);

// Calibration values

// Last'ed variables
signed long int last_1_var_1_6 = -64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch79Wrapper_P
	signed long int stepLocal_1 = (*(var_1_8_Pointer)) + (*(var_1_5_Pointer));
	if ((*(var_1_13_Pointer)) < (*(var_1_10_Pointer))) {
		if (stepLocal_1 <= (~ ((*(var_1_3_Pointer)) % (*(var_1_9_Pointer))))) {
			(*(var_1_12_Pointer)) = (*(var_1_9_Pointer));
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_5_Pointer));
		}
	}


	// From: Req4Batch79Wrapper_P
	(*(var_1_14_Pointer)) = (*(var_1_15_Pointer));


	// From: Req1Batch79Wrapper_P
	if (! (*(var_1_14_Pointer))) {
		if (! (*(var_1_14_Pointer))) {
			(*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) + -32);
		} else {
			(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - (min ((*(var_1_5_Pointer)) , 16)));
		}
	}


	// From: Req2Batch79Wrapper_P
	signed long int stepLocal_0 = max ((*(var_1_5_Pointer)) , (*(var_1_12_Pointer)));
	if (stepLocal_0 <= ((*(var_1_4_Pointer)) * ((*(var_1_8_Pointer)) >> (*(var_1_9_Pointer))))) {
		if ((- (*(var_1_10_Pointer))) >= (*(var_1_11_Pointer))) {
			(*(var_1_6_Pointer)) = (*(var_1_9_Pointer));
		} else {
			(*(var_1_6_Pointer)) = last_1_var_1_6;
		}
	} else {
		(*(var_1_6_Pointer)) = (*(var_1_12_Pointer));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 30);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_6 = var_1_6;
}

int property(void) {
	return ((((! (*(var_1_14_Pointer))) ? ((! (*(var_1_14_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_3_Pointer)) + -32))) : ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_4_Pointer)) - (min ((*(var_1_5_Pointer)) , 16)))))) : 1) && (((max ((*(var_1_5_Pointer)) , (*(var_1_12_Pointer)))) <= ((*(var_1_4_Pointer)) * ((*(var_1_8_Pointer)) >> (*(var_1_9_Pointer))))) ? (((- (*(var_1_10_Pointer))) >= (*(var_1_11_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_9_Pointer)))) : ((*(var_1_6_Pointer)) == ((signed long int) last_1_var_1_6))) : ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_12_Pointer)))))) && (((*(var_1_13_Pointer)) < (*(var_1_10_Pointer))) ? ((((*(var_1_8_Pointer)) + (*(var_1_5_Pointer))) <= (~ ((*(var_1_3_Pointer)) % (*(var_1_9_Pointer))))) ? ((*(var_1_12_Pointer)) == ((unsigned short int) (*(var_1_9_Pointer)))) : ((*(var_1_12_Pointer)) == ((unsigned short int) (*(var_1_5_Pointer))))) : 1)) && ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_15_Pointer))))
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
