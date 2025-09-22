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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch82Wrapper_P.c", 13, "reach_error"); }
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
float var_1_1 = 128.75;
float* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 63.5;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 255.5;
float* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 32;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed short int var_1_6 = -256;
signed short int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 10;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 10;
signed long int* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 25;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 128;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 16;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 2;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_14 = 5;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 10;
unsigned char* var_1_15_Pointer = &(var_1_15);
double var_1_16 = 3.75;
double* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 0;
unsigned char* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 255.5;
double* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch82Wrapper_P
	if (! (*(var_1_2_Pointer))) {
		if ((*(var_1_2_Pointer))) {
			(*(var_1_1_Pointer)) = (max ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer))));
		}
	}


	// From: Req2Batch82Wrapper_P
	signed long int stepLocal_0 = (*(var_1_6_Pointer)) / -2;
	if (stepLocal_0 >= ((*(var_1_7_Pointer)) | (*(var_1_8_Pointer)))) {
		(*(var_1_5_Pointer)) = (abs ((*(var_1_9_Pointer))));
	} else {
		(*(var_1_5_Pointer)) = ((*(var_1_10_Pointer)) - (abs ((*(var_1_11_Pointer)))));
	}


	// From: Req4Batch82Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_4_Pointer));


	// From: Req5Batch82Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_9_Pointer));


	// From: Req6Batch82Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_3_Pointer));


	// From: Req3Batch82Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_9_Pointer));
	if (((*(var_1_7_Pointer)) + (*(var_1_11_Pointer))) >= stepLocal_1) {
		if ((max ((*(var_1_4_Pointer)) , ((*(var_1_1_Pointer)) * (*(var_1_3_Pointer))))) <= (*(var_1_18_Pointer))) {
			(*(var_1_12_Pointer)) = (max ((*(var_1_11_Pointer)) , (*(var_1_14_Pointer))));
		} else {
			if ((*(var_1_2_Pointer))) {
				(*(var_1_12_Pointer)) = ((*(var_1_11_Pointer)) + (*(var_1_15_Pointer)));
			}
		}
	} else {
		(*(var_1_12_Pointer)) = (*(var_1_9_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -32768);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 254);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 254);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((! (*(var_1_2_Pointer))) ? ((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((float) (max ((*(var_1_3_Pointer)) , (*(var_1_4_Pointer)))))) : 1) : 1) && ((((*(var_1_6_Pointer)) / -2) >= ((*(var_1_7_Pointer)) | (*(var_1_8_Pointer)))) ? ((*(var_1_5_Pointer)) == ((unsigned char) (abs ((*(var_1_9_Pointer)))))) : ((*(var_1_5_Pointer)) == ((unsigned char) ((*(var_1_10_Pointer)) - (abs ((*(var_1_11_Pointer))))))))) && ((((*(var_1_7_Pointer)) + (*(var_1_11_Pointer))) >= (*(var_1_9_Pointer))) ? (((max ((*(var_1_4_Pointer)) , ((*(var_1_1_Pointer)) * (*(var_1_3_Pointer))))) <= (*(var_1_18_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) (max ((*(var_1_11_Pointer)) , (*(var_1_14_Pointer)))))) : ((*(var_1_2_Pointer)) ? ((*(var_1_12_Pointer)) == ((unsigned char) ((*(var_1_11_Pointer)) + (*(var_1_15_Pointer))))) : 1)) : ((*(var_1_12_Pointer)) == ((unsigned char) (*(var_1_9_Pointer)))))) && ((*(var_1_16_Pointer)) == ((double) (*(var_1_4_Pointer))))) && ((*(var_1_17_Pointer)) == ((unsigned char) (*(var_1_9_Pointer))))) && ((*(var_1_18_Pointer)) == ((double) (*(var_1_3_Pointer))))
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
