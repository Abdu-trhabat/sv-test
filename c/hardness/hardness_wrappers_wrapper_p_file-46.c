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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch46Wrapper_P.c", 13, "reach_error"); }
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
double var_1_2 = 31.75;
double* var_1_2_Pointer = &(var_1_2);
signed char var_1_4 = -8;
signed char* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = -64;
signed long int* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 0;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_10 = 1;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 25;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 64436;
unsigned short int* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 56375;
unsigned short int* var_1_13_Pointer = &(var_1_13);
unsigned short int var_1_14 = 49255;
unsigned short int* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 0;
unsigned char* var_1_15_Pointer = &(var_1_15);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch46Wrapper_P
	(*(var_1_11_Pointer)) = ((min ((*(var_1_12_Pointer)) , (max ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer)))))) - 32);


	// From: Req4Batch46Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_10_Pointer));


	// From: Req1Batch46Wrapper_P
	signed long int stepLocal_1 = -32;
	signed long int stepLocal_0 = (*(var_1_11_Pointer)) / (*(var_1_4_Pointer));
	if ((- (*(var_1_2_Pointer))) >= 16.75) {
		if (stepLocal_0 >= (*(var_1_5_Pointer))) {
			if ((min ((*(var_1_4_Pointer)) , (*(var_1_11_Pointer)))) > stepLocal_1) {
				(*(var_1_1_Pointer)) = 0;
			} else {
				(*(var_1_1_Pointer)) = ((*(var_1_6_Pointer)) || (*(var_1_7_Pointer)));
			}
		} else {
			if ((*(var_1_6_Pointer))) {
				(*(var_1_1_Pointer)) = 1;
			} else {
				(*(var_1_1_Pointer)) = (*(var_1_7_Pointer));
			}
		}
	} else {
		(*(var_1_1_Pointer)) = 1;
	}


	// From: Req2Batch46Wrapper_P
	if (1 == ((*(var_1_5_Pointer)) + (*(var_1_11_Pointer)))) {
		if ((((*(var_1_5_Pointer)) * (*(var_1_4_Pointer))) + (*(var_1_11_Pointer))) >= (*(var_1_11_Pointer))) {
			(*(var_1_8_Pointer)) = (*(var_1_10_Pointer));
		} else {
			(*(var_1_8_Pointer)) = (*(var_1_6_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -128);
	assume_abort_if_not(var_1_4 <= 127);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 0);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 1);
	assume_abort_if_not(var_1_10 <= 1);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 32767);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 32767);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 32767);
	assume_abort_if_not(var_1_14 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((- (*(var_1_2_Pointer))) >= 16.75) ? ((((*(var_1_11_Pointer)) / (*(var_1_4_Pointer))) >= (*(var_1_5_Pointer))) ? (((min ((*(var_1_4_Pointer)) , (*(var_1_11_Pointer)))) > -32) ? ((*(var_1_1_Pointer)) == ((unsigned char) 0)) : ((*(var_1_1_Pointer)) == ((unsigned char) ((*(var_1_6_Pointer)) || (*(var_1_7_Pointer)))))) : ((*(var_1_6_Pointer)) ? ((*(var_1_1_Pointer)) == ((unsigned char) 1)) : ((*(var_1_1_Pointer)) == ((unsigned char) (*(var_1_7_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned char) 1))) && ((1 == ((*(var_1_5_Pointer)) + (*(var_1_11_Pointer)))) ? (((((*(var_1_5_Pointer)) * (*(var_1_4_Pointer))) + (*(var_1_11_Pointer))) >= (*(var_1_11_Pointer))) ? ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_10_Pointer)))) : ((*(var_1_8_Pointer)) == ((unsigned char) (*(var_1_6_Pointer))))) : 1)) && ((*(var_1_11_Pointer)) == ((unsigned short int) ((min ((*(var_1_12_Pointer)) , (max ((*(var_1_13_Pointer)) , (*(var_1_14_Pointer)))))) - 32)))) && ((*(var_1_15_Pointer)) == ((unsigned char) (*(var_1_10_Pointer))))
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
