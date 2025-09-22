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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch118Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = 10;
signed short int* var_1_1_Pointer = &(var_1_1);
signed short int var_1_3 = -32;
signed short int* var_1_3_Pointer = &(var_1_3);
signed short int var_1_4 = -4;
signed short int* var_1_4_Pointer = &(var_1_4);
signed short int var_1_5 = 2;
signed short int* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 100;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 2;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 10;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 4;
unsigned char* var_1_9_Pointer = &(var_1_9);
signed short int var_1_10 = 4;
signed short int* var_1_10_Pointer = &(var_1_10);
float var_1_11 = 10.8;
float* var_1_11_Pointer = &(var_1_11);
float var_1_12 = 15.2;
float* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);
signed long int var_1_15 = 8;
signed long int* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 0.4;
double* var_1_17_Pointer = &(var_1_17);
double var_1_18 = 100000000.2;
double* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch118Wrapper_P
	if ((*(var_1_14_Pointer)) && (*(var_1_16_Pointer))) {
		(*(var_1_15_Pointer)) = (*(var_1_8_Pointer));
	}


	// From: Req5Batch118Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_18_Pointer));


	// From: Req1Batch118Wrapper_P
	signed long int stepLocal_0 = 4;
	if ((*(var_1_15_Pointer)) < stepLocal_0) {
		(*(var_1_1_Pointer)) = ((*(var_1_3_Pointer)) + (*(var_1_4_Pointer)));
	} else {
		(*(var_1_1_Pointer)) = ((*(var_1_5_Pointer)) - 5);
	}


	// From: Req2Batch118Wrapper_P
	signed long int stepLocal_1 = (*(var_1_15_Pointer));
	if ((*(var_1_4_Pointer)) == stepLocal_1) {
		(*(var_1_6_Pointer)) = ((min ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer)))) + (max ((64 + 8) , (*(var_1_9_Pointer)))));
	} else {
		(*(var_1_6_Pointer)) = ((*(var_1_7_Pointer)) + 4);
	}


	// From: Req3Batch118Wrapper_P
	if (((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) < (*(var_1_17_Pointer))) {
		if ((*(var_1_14_Pointer)) || ((*(var_1_15_Pointer)) >= (max ((*(var_1_4_Pointer)) , (*(var_1_3_Pointer)))))) {
			if ((*(var_1_12_Pointer)) >= 127.25f) {
				(*(var_1_10_Pointer)) = (*(var_1_3_Pointer));
			}
		}
	} else {
		(*(var_1_10_Pointer)) = 16;
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= -16383);
	assume_abort_if_not(var_1_3 <= 16383);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= -16383);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_5 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_5 >= -1);
	assume_abort_if_not(var_1_5 <= 32766);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 127);
	var_1_11 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_18 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_15_Pointer)) < 4) ? ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_3_Pointer)) + (*(var_1_4_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed short int) ((*(var_1_5_Pointer)) - 5)))) && (((*(var_1_4_Pointer)) == (*(var_1_15_Pointer))) ? ((*(var_1_6_Pointer)) == ((unsigned char) ((min ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer)))) + (max ((64 + 8) , (*(var_1_9_Pointer))))))) : ((*(var_1_6_Pointer)) == ((unsigned char) ((*(var_1_7_Pointer)) + 4))))) && ((((*(var_1_11_Pointer)) - (*(var_1_12_Pointer))) < (*(var_1_17_Pointer))) ? (((*(var_1_14_Pointer)) || ((*(var_1_15_Pointer)) >= (max ((*(var_1_4_Pointer)) , (*(var_1_3_Pointer)))))) ? (((*(var_1_12_Pointer)) >= 127.25f) ? ((*(var_1_10_Pointer)) == ((signed short int) (*(var_1_3_Pointer)))) : 1) : 1) : ((*(var_1_10_Pointer)) == ((signed short int) 16)))) && (((*(var_1_14_Pointer)) && (*(var_1_16_Pointer))) ? ((*(var_1_15_Pointer)) == ((signed long int) (*(var_1_8_Pointer)))) : 1)) && ((*(var_1_17_Pointer)) == ((double) (*(var_1_18_Pointer))))
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
