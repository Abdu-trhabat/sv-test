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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch56Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_2 = 5;
signed short int* var_1_2_Pointer = &(var_1_2);
signed char var_1_3 = 10;
signed char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 32;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 128;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 16;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 2;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 8;
unsigned char* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 10.5;
double* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
double var_1_13 = 99.25;
double* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 64;
unsigned char* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 4;
signed short int* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 0;
unsigned char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 0;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 1;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch56Wrapper_P
	if (((*(var_1_2_Pointer)) >> (*(var_1_3_Pointer))) >= (*(var_1_4_Pointer))) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_3_Pointer)) , ((*(var_1_5_Pointer)) - (max ((*(var_1_6_Pointer)) , (*(var_1_7_Pointer)))))));
	} else {
		(*(var_1_1_Pointer)) = ((min ((*(var_1_6_Pointer)) , (*(var_1_3_Pointer)))) + (min (((*(var_1_8_Pointer)) + 1) , (*(var_1_7_Pointer)))));
	}


	// From: Req2Batch56Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_6_Pointer));
	unsigned char stepLocal_0 = (*(var_1_12_Pointer));
	if ((*(var_1_10_Pointer))) {
		if ((*(var_1_11_Pointer)) || stepLocal_0) {
			if ((*(var_1_4_Pointer)) > stepLocal_1) {
				(*(var_1_9_Pointer)) = (*(var_1_13_Pointer));
			}
		}
	}


	// From: Req3Batch56Wrapper_P
	if (((*(var_1_8_Pointer)) + (*(var_1_15_Pointer))) >= (*(var_1_7_Pointer))) {
		(*(var_1_14_Pointer)) = (*(var_1_6_Pointer));
	}


	// From: Req4Batch56Wrapper_P
	if ((*(var_1_12_Pointer)) || (*(var_1_10_Pointer))) {
		if ((*(var_1_15_Pointer)) >= ((*(var_1_8_Pointer)) << (*(var_1_3_Pointer)))) {
			if ((*(var_1_6_Pointer)) > (*(var_1_7_Pointer))) {
				(*(var_1_16_Pointer)) = (*(var_1_17_Pointer));
			} else {
				(*(var_1_16_Pointer)) = 1;
			}
		} else {
			(*(var_1_16_Pointer)) = (*(var_1_18_Pointer));
		}
	} else {
		(*(var_1_16_Pointer)) = (*(var_1_17_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 1);
	assume_abort_if_not(var_1_3 <= 14);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 127);
	assume_abort_if_not(var_1_5 <= 254);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 127);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 64);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= -32768);
	assume_abort_if_not(var_1_15 <= 32767);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 0);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) >> (*(var_1_3_Pointer))) >= (*(var_1_4_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (min ((*(var_1_3_Pointer)) , ((*(var_1_5_Pointer)) - (max ((*(var_1_6_Pointer)) , (*(var_1_7_Pointer))))))))) : ((*(var_1_1_Pointer)) == ((unsigned char) ((min ((*(var_1_6_Pointer)) , (*(var_1_3_Pointer)))) + (min (((*(var_1_8_Pointer)) + 1) , (*(var_1_7_Pointer)))))))) && ((*(var_1_10_Pointer)) ? (((*(var_1_11_Pointer)) || (*(var_1_12_Pointer))) ? (((*(var_1_4_Pointer)) > (*(var_1_6_Pointer))) ? ((*(var_1_9_Pointer)) == ((double) (*(var_1_13_Pointer)))) : 1) : 1) : 1)) && ((((*(var_1_8_Pointer)) + (*(var_1_15_Pointer))) >= (*(var_1_7_Pointer))) ? ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_6_Pointer)))) : 1)) && (((*(var_1_12_Pointer)) || (*(var_1_10_Pointer))) ? (((*(var_1_15_Pointer)) >= ((*(var_1_8_Pointer)) << (*(var_1_3_Pointer)))) ? (((*(var_1_6_Pointer)) > (*(var_1_7_Pointer))) ? ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))) : ((*(var_1_16_Pointer)) == ((unsigned char) 1))) : ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_18_Pointer))))) : ((*(var_1_16_Pointer)) == ((unsigned char) (*(var_1_17_Pointer)))))
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
