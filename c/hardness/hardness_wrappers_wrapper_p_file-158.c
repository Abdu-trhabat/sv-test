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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch158Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 64;
unsigned char* var_1_1_Pointer = &(var_1_1);
double var_1_2 = 15.5;
double* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 9.3;
double* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 64;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -10000;
signed long int* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 2;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 0;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 128;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 16;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 32;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 2;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 100;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 32;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 32;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 32;
unsigned short int* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch158Wrapper_P
	if ((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer))));
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req2Batch158Wrapper_P
	if (! (*(var_1_7_Pointer))) {
		(*(var_1_6_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req3Batch158Wrapper_P
	if ((*(var_1_7_Pointer)) || (*(var_1_9_Pointer))) {
		(*(var_1_8_Pointer)) = ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer)));
	} else {
		if (-1000000000 < (*(var_1_4_Pointer))) {
			(*(var_1_8_Pointer)) = (128 - (((*(var_1_12_Pointer)) + 50) - (32 - (*(var_1_13_Pointer)))));
		} else {
			(*(var_1_8_Pointer)) = (((*(var_1_14_Pointer)) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))) - (*(var_1_12_Pointer)));
		}
	}


	// From: Req4Batch158Wrapper_P
	signed long int stepLocal_1 = (*(var_1_6_Pointer));
	signed long int stepLocal_0 = -5;
	if ((*(var_1_7_Pointer))) {
		if ((*(var_1_14_Pointer)) <= stepLocal_1) {
			(*(var_1_17_Pointer)) = (max ((*(var_1_10_Pointer)) , (*(var_1_6_Pointer))));
		} else {
			if (stepLocal_0 > (*(var_1_13_Pointer))) {
				(*(var_1_17_Pointer)) = (*(var_1_4_Pointer));
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 254);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 254);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 127);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 31);
	assume_abort_if_not(var_1_12 <= 64);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 31);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 63);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 32);
	assume_abort_if_not(var_1_15 <= 64);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 32);
	assume_abort_if_not(var_1_16 <= 63);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (min ((*(var_1_4_Pointer)) , (*(var_1_5_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_5_Pointer))))) && ((! (*(var_1_7_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (*(var_1_5_Pointer)))) : 1)) && (((*(var_1_7_Pointer)) || (*(var_1_9_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned char) ((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))))) : ((-1000000000 < (*(var_1_4_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned char) (128 - (((*(var_1_12_Pointer)) + 50) - (32 - (*(var_1_13_Pointer))))))) : ((*(var_1_8_Pointer)) == ((unsigned char) (((*(var_1_14_Pointer)) + ((*(var_1_15_Pointer)) + (*(var_1_16_Pointer)))) - (*(var_1_12_Pointer)))))))) && ((*(var_1_7_Pointer)) ? (((*(var_1_14_Pointer)) <= (*(var_1_6_Pointer))) ? ((*(var_1_17_Pointer)) == ((unsigned short int) (max ((*(var_1_10_Pointer)) , (*(var_1_6_Pointer)))))) : ((-5 > (*(var_1_13_Pointer))) ? ((*(var_1_17_Pointer)) == ((unsigned short int) (*(var_1_4_Pointer)))) : 1)) : 1)
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
