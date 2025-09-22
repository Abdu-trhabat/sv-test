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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch114Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = 500;
signed short int* var_1_1_Pointer = &(var_1_1);
signed short int var_1_2 = -256;
signed short int* var_1_2_Pointer = &(var_1_2);
signed short int var_1_3 = -10;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = 4;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 5;
signed short int* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 8.25;
float* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 1.6;
float* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 64;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 1;
unsigned long int* var_1_10_Pointer = &(var_1_10);
unsigned long int var_1_11 = 128;
unsigned long int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 128;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 25;
unsigned char* var_1_13_Pointer = &(var_1_13);
float var_1_14 = 127.6;
float* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = -5;
signed char* var_1_15_Pointer = &(var_1_15);
float var_1_16 = 7.3;
float* var_1_16_Pointer = &(var_1_16);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch114Wrapper_P
	signed short int stepLocal_0 = (*(var_1_2_Pointer));
	if (stepLocal_0 > (*(var_1_3_Pointer))) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer))));
	} else {
		(*(var_1_1_Pointer)) = 32;
	}


	// From: Req2Batch114Wrapper_P
	if ((((*(var_1_2_Pointer)) * (*(var_1_1_Pointer))) < (*(var_1_5_Pointer))) || (*(var_1_7_Pointer))) {
		if ((*(var_1_7_Pointer))) {
			(*(var_1_6_Pointer)) = (*(var_1_8_Pointer));
		}
	}


	// From: Req3Batch114Wrapper_P
	if (((*(var_1_10_Pointer)) / 1u) != ((*(var_1_11_Pointer)) + 10u)) {
		(*(var_1_9_Pointer)) = ((min ((*(var_1_12_Pointer)) , 128)) - (*(var_1_13_Pointer)));
	}


	// From: Req4Batch114Wrapper_P
	if (((*(var_1_4_Pointer)) / (max ((*(var_1_15_Pointer)) , -8))) >= (((*(var_1_5_Pointer)) | (*(var_1_1_Pointer))) + (*(var_1_13_Pointer)))) {
		(*(var_1_14_Pointer)) = (*(var_1_8_Pointer));
	} else {
		if ((*(var_1_6_Pointer)) != ((abs ((*(var_1_8_Pointer)))) - (*(var_1_16_Pointer)))) {
			(*(var_1_14_Pointer)) = (*(var_1_8_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -32768);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -32768);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -32767);
	assume_abort_if_not(var_1_4 <= 32766);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -32767);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 127);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -128);
	assume_abort_if_not(var_1_15 <= 127);
	assume_abort_if_not(var_1_15 != 0);
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed short int) (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer)))))) : ((*(var_1_1_Pointer)) == ((signed short int) 32))) && (((((*(var_1_2_Pointer)) * (*(var_1_1_Pointer))) < (*(var_1_5_Pointer))) || (*(var_1_7_Pointer))) ? ((*(var_1_7_Pointer)) ? ((*(var_1_6_Pointer)) == ((float) (*(var_1_8_Pointer)))) : 1) : 1)) && ((((*(var_1_10_Pointer)) / 1u) != ((*(var_1_11_Pointer)) + 10u)) ? ((*(var_1_9_Pointer)) == ((unsigned char) ((min ((*(var_1_12_Pointer)) , 128)) - (*(var_1_13_Pointer))))) : 1)) && ((((*(var_1_4_Pointer)) / (max ((*(var_1_15_Pointer)) , -8))) >= (((*(var_1_5_Pointer)) | (*(var_1_1_Pointer))) + (*(var_1_13_Pointer)))) ? ((*(var_1_14_Pointer)) == ((float) (*(var_1_8_Pointer)))) : (((*(var_1_6_Pointer)) != ((abs ((*(var_1_8_Pointer)))) - (*(var_1_16_Pointer)))) ? ((*(var_1_14_Pointer)) == ((float) (*(var_1_8_Pointer)))) : 1))
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
