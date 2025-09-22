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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch127Wrapper_P.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 0;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 100;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 1;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = -64;
signed short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = -50;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 128;
signed short int* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 10.55;
double* var_1_10_Pointer = &(var_1_10);
double var_1_11 = 10.375;
double* var_1_11_Pointer = &(var_1_11);
signed long int var_1_12 = 2;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 16;
signed long int* var_1_13_Pointer = &(var_1_13);
signed long int var_1_14 = 1;
signed long int* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch127Wrapper_P
	if ((max (0u , (*(var_1_2_Pointer)))) > (~ (*(var_1_3_Pointer)))) {
		(*(var_1_1_Pointer)) = ((! (*(var_1_4_Pointer))) && ((*(var_1_5_Pointer)) || (*(var_1_6_Pointer))));
	}


	// From: Req2Batch127Wrapper_P
	if ((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) {
		(*(var_1_7_Pointer)) = (max ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer))));
	} else {
		if ((*(var_1_10_Pointer)) > (*(var_1_11_Pointer))) {
			(*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
		} else {
			(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
		}
	}


	// From: Req3Batch127Wrapper_P
	unsigned long int stepLocal_0 = (*(var_1_3_Pointer));
	if ((*(var_1_10_Pointer)) >= (*(var_1_11_Pointer))) {
		if (10 >= stepLocal_0) {
			(*(var_1_12_Pointer)) = (((*(var_1_9_Pointer)) + ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer)))) + (*(var_1_7_Pointer)));
		} else {
			(*(var_1_12_Pointer)) = (((*(var_1_9_Pointer)) + (*(var_1_7_Pointer))) + ((*(var_1_8_Pointer)) + 256));
		}
	} else {
		if ((*(var_1_6_Pointer))) {
			(*(var_1_12_Pointer)) = (*(var_1_14_Pointer));
		} else {
			(*(var_1_12_Pointer)) = (*(var_1_8_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 0);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 1);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -32767);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_11 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 536870911);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 536870911);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((max (0u , (*(var_1_2_Pointer)))) > (~ (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) ((! (*(var_1_4_Pointer))) && ((*(var_1_5_Pointer)) || (*(var_1_6_Pointer)))))) : 1) && (((*(var_1_2_Pointer)) > (*(var_1_3_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed short int) (max ((*(var_1_8_Pointer)) , (*(var_1_9_Pointer)))))) : (((*(var_1_10_Pointer)) > (*(var_1_11_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed short int) (*(var_1_9_Pointer)))) : ((*(var_1_7_Pointer)) == ((signed short int) (*(var_1_8_Pointer))))))) && (((*(var_1_10_Pointer)) >= (*(var_1_11_Pointer))) ? ((10 >= (*(var_1_3_Pointer))) ? ((*(var_1_12_Pointer)) == ((signed long int) (((*(var_1_9_Pointer)) + ((*(var_1_13_Pointer)) - (*(var_1_14_Pointer)))) + (*(var_1_7_Pointer))))) : ((*(var_1_12_Pointer)) == ((signed long int) (((*(var_1_9_Pointer)) + (*(var_1_7_Pointer))) + ((*(var_1_8_Pointer)) + 256))))) : ((*(var_1_6_Pointer)) ? ((*(var_1_12_Pointer)) == ((signed long int) (*(var_1_14_Pointer)))) : ((*(var_1_12_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))))
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
