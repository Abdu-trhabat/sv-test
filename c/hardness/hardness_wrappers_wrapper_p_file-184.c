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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch184Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 1;
unsigned char* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 64;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 25;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 128;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 128;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 8;
unsigned short int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 200;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = 256;
signed long int* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 5.25;
float* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 7.75;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 10.5;
float* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 31.4;
float* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = -16;
signed long int* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 25;
unsigned short int* var_1_15_Pointer = &(var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch184Wrapper_P
	unsigned long int stepLocal_0 = (*(var_1_3_Pointer));
	if ((*(var_1_2_Pointer)) <= stepLocal_0) {
		(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - 32);
	} else {
		(*(var_1_1_Pointer)) = (max ((max ((*(var_1_4_Pointer)) , 100)) , (*(var_1_5_Pointer))));
	}


	// From: Req3Batch184Wrapper_P
	unsigned char stepLocal_2 = (*(var_1_5_Pointer));
	if ((((*(var_1_1_Pointer)) + (*(var_1_8_Pointer))) + (*(var_1_2_Pointer))) < stepLocal_2) {
		if ((*(var_1_10_Pointer))) {
			(*(var_1_9_Pointer)) = (abs ((*(var_1_11_Pointer)) - 4.25f));
		} else {
			(*(var_1_9_Pointer)) = ((*(var_1_11_Pointer)) - (8.966829933912052E18f - (*(var_1_12_Pointer))));
		}
	} else {
		(*(var_1_9_Pointer)) = (*(var_1_12_Pointer));
	}


	// From: Req4Batch184Wrapper_P
	(*(var_1_13_Pointer)) = (*(var_1_11_Pointer));


	// From: Req6Batch184Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_4_Pointer));


	// From: Req2Batch184Wrapper_P
	unsigned long int stepLocal_1 = (max ((*(var_1_15_Pointer)) , (*(var_1_2_Pointer)))) / (max ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer))));
	if (((*(var_1_5_Pointer)) + (*(var_1_4_Pointer))) > stepLocal_1) {
		(*(var_1_6_Pointer)) = (max ((*(var_1_4_Pointer)) , (*(var_1_15_Pointer))));
	}


	// From: Req5Batch184Wrapper_P
	(*(var_1_14_Pointer)) = (*(var_1_15_Pointer));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 127);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483648);
	assume_abort_if_not(var_1_7 <= 2147483647);
	assume_abort_if_not(var_1_7 != 0);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483648);
	assume_abort_if_not(var_1_8 <= 2147483647);
	assume_abort_if_not(var_1_8 != 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_4_Pointer)) - 32))) : ((*(var_1_1_Pointer)) == ((unsigned char) (max ((max ((*(var_1_4_Pointer)) , 100)) , (*(var_1_5_Pointer))))))) && ((((*(var_1_5_Pointer)) + (*(var_1_4_Pointer))) > ((max ((*(var_1_15_Pointer)) , (*(var_1_2_Pointer)))) / (max ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer)))))) ? ((*(var_1_6_Pointer)) == ((unsigned short int) (max ((*(var_1_4_Pointer)) , (*(var_1_15_Pointer)))))) : 1)) && (((((*(var_1_1_Pointer)) + (*(var_1_8_Pointer))) + (*(var_1_2_Pointer))) < (*(var_1_5_Pointer))) ? ((*(var_1_10_Pointer)) ? ((*(var_1_9_Pointer)) == ((float) (abs ((*(var_1_11_Pointer)) - 4.25f)))) : ((*(var_1_9_Pointer)) == ((float) ((*(var_1_11_Pointer)) - (8.966829933912052E18f - (*(var_1_12_Pointer))))))) : ((*(var_1_9_Pointer)) == ((float) (*(var_1_12_Pointer)))))) && ((*(var_1_13_Pointer)) == ((float) (*(var_1_11_Pointer))))) && ((*(var_1_14_Pointer)) == ((signed long int) (*(var_1_15_Pointer))))) && ((*(var_1_15_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer))))
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
