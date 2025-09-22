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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch33Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = -10;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 100;
signed long int* var_1_2_Pointer = &(var_1_2);
signed short int var_1_5 = 4;
signed short int* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = 0;
signed short int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 200;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 32;
unsigned char* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 256.5;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = -0.25;
float* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 0.30000000000000004;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 49.5;
float* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = -8;
signed long int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
float var_1_15 = 0.4;
float* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = -256;
signed long int* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables
signed long int last_1_var_1_13 = -8;
signed long int last_1_var_1_16 = -256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch33Wrapper_P
	signed long int stepLocal_0 = (last_1_var_1_16 ^ last_1_var_1_13) + last_1_var_1_13;
	if (stepLocal_0 < -1) {
		(*(var_1_1_Pointer)) = 8;
	} else {
		(*(var_1_1_Pointer)) = (128 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))));
	}


	// From: Req5Batch33Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_11_Pointer));


	// From: Req6Batch33Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_6_Pointer));


	// From: Req2Batch33Wrapper_P
	if ((*(var_1_5_Pointer)) < (*(var_1_16_Pointer))) {
		(*(var_1_7_Pointer)) = ((*(var_1_8_Pointer)) + 1);
	}


	// From: Req3Batch33Wrapper_P
	if ((*(var_1_6_Pointer)) < ((*(var_1_16_Pointer)) & ((*(var_1_5_Pointer)) | (*(var_1_16_Pointer))))) {
		(*(var_1_9_Pointer)) = (abs ((*(var_1_10_Pointer)) + ((*(var_1_11_Pointer)) - (*(var_1_12_Pointer)))));
	}


	// From: Req4Batch33Wrapper_P
	signed short int stepLocal_1 = (*(var_1_6_Pointer));
	if (! (*(var_1_14_Pointer))) {
		(*(var_1_13_Pointer)) = (*(var_1_8_Pointer));
	} else {
		if (stepLocal_1 > ((*(var_1_2_Pointer)) + (*(var_1_7_Pointer)))) {
			(*(var_1_13_Pointer)) = (*(var_1_7_Pointer));
		} else {
			(*(var_1_13_Pointer)) = (*(var_1_1_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 16383);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
}



void updateLastVariables(void) {
	last_1_var_1_13 = var_1_13;
	last_1_var_1_16 = var_1_16;
}

int property(void) {
	return ((((((((last_1_var_1_16 ^ last_1_var_1_13) + last_1_var_1_13) < -1) ? ((*(var_1_1_Pointer)) == ((signed short int) 8)) : ((*(var_1_1_Pointer)) == ((signed short int) (128 - ((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))))))) && (((*(var_1_5_Pointer)) < (*(var_1_16_Pointer))) ? ((*(var_1_7_Pointer)) == ((unsigned char) ((*(var_1_8_Pointer)) + 1))) : 1)) && (((*(var_1_6_Pointer)) < ((*(var_1_16_Pointer)) & ((*(var_1_5_Pointer)) | (*(var_1_16_Pointer))))) ? ((*(var_1_9_Pointer)) == ((float) (abs ((*(var_1_10_Pointer)) + ((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))))))) : 1)) && ((! (*(var_1_14_Pointer))) ? ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_8_Pointer)))) : (((*(var_1_6_Pointer)) > ((*(var_1_2_Pointer)) + (*(var_1_7_Pointer)))) ? ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_7_Pointer)))) : ((*(var_1_13_Pointer)) == ((signed long int) (*(var_1_1_Pointer))))))) && ((*(var_1_15_Pointer)) == ((float) (*(var_1_11_Pointer))))) && ((*(var_1_16_Pointer)) == ((signed long int) (*(var_1_6_Pointer))))
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
