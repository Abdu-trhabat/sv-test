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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_1 = -128;
signed char* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 256;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 0;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 4;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 16;
signed long int* var_1_5_Pointer = &(var_1_5);
signed char var_1_6 = -16;
signed char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 4;
signed long int* var_1_7_Pointer = &(var_1_7);
double var_1_8 = 10.9;
double* var_1_8_Pointer = &(var_1_8);
double var_1_9 = 32.6;
double* var_1_9_Pointer = &(var_1_9);
double var_1_10 = 4.5;
double* var_1_10_Pointer = &(var_1_10);
signed long int var_1_12 = 64;
signed long int* var_1_12_Pointer = &(var_1_12);
signed long int var_1_13 = 1;
signed long int* var_1_13_Pointer = &(var_1_13);
double var_1_14 = 128.2;
double* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 1;
unsigned char* var_1_15_Pointer = &(var_1_15);
unsigned char var_1_16 = 1;
unsigned char* var_1_16_Pointer = &(var_1_16);
double var_1_17 = 15.25;
double* var_1_17_Pointer = &(var_1_17);
signed char var_1_18 = 100;
signed char* var_1_18_Pointer = &(var_1_18);
signed char var_1_19 = 5;
signed char* var_1_19_Pointer = &(var_1_19);
double var_1_20 = 15.125;
double* var_1_20_Pointer = &(var_1_20);
double var_1_21 = 25.25;
double* var_1_21_Pointer = &(var_1_21);

// Calibration values

// Last'ed variables
double last_1_var_1_14 = 128.2;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch130Wrapper_P
	if (((*(var_1_8_Pointer)) - (max ((*(var_1_9_Pointer)) , (*(var_1_10_Pointer))))) <= last_1_var_1_14) {
		(*(var_1_7_Pointer)) = ((max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer)))) - 50);
	}


	// From: Req3Batch130Wrapper_P
	signed long int stepLocal_3 = (*(var_1_6_Pointer)) + (*(var_1_7_Pointer));
	signed long int stepLocal_2 = (*(var_1_18_Pointer)) - (100 - (*(var_1_19_Pointer)));
	if ((*(var_1_15_Pointer))) {
		if ((*(var_1_12_Pointer)) <= stepLocal_3) {
			if ((*(var_1_16_Pointer))) {
				(*(var_1_14_Pointer)) = (*(var_1_17_Pointer));
			} else {
				if (stepLocal_2 <= (*(var_1_7_Pointer))) {
					(*(var_1_14_Pointer)) = ((*(var_1_20_Pointer)) + (*(var_1_21_Pointer)));
				} else {
					(*(var_1_14_Pointer)) = (*(var_1_17_Pointer));
				}
			}
		} else {
			(*(var_1_14_Pointer)) = (*(var_1_20_Pointer));
		}
	} else {
		(*(var_1_14_Pointer)) = (*(var_1_20_Pointer));
	}


	// From: Req1Batch130Wrapper_P
	signed long int stepLocal_1 = (*(var_1_2_Pointer)) & (*(var_1_3_Pointer));
	signed long int stepLocal_0 = (*(var_1_4_Pointer));
	if (stepLocal_1 <= ((*(var_1_4_Pointer)) / (min (-25 , (*(var_1_5_Pointer)))))) {
		(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
	} else {
		if ((*(var_1_5_Pointer)) != stepLocal_0) {
			(*(var_1_1_Pointer)) = (*(var_1_6_Pointer));
		} else {
			(*(var_1_1_Pointer)) = 5;
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= -2147483648);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	assume_abort_if_not(var_1_5 != 0);
	var_1_6 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_6 >= -127);
	assume_abort_if_not(var_1_6 <= 126);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= 0.0F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= 0.0F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= -1);
	assume_abort_if_not(var_1_13 <= 2147483646);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_16 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 1);
	var_1_17 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	return (((((*(var_1_2_Pointer)) & (*(var_1_3_Pointer))) <= ((*(var_1_4_Pointer)) / (min (-25 , (*(var_1_5_Pointer)))))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_6_Pointer)))) : (((*(var_1_5_Pointer)) != (*(var_1_4_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_6_Pointer)))) : ((*(var_1_1_Pointer)) == ((signed char) 5)))) && ((((*(var_1_8_Pointer)) - (max ((*(var_1_9_Pointer)) , (*(var_1_10_Pointer))))) <= last_1_var_1_14) ? ((*(var_1_7_Pointer)) == ((signed long int) ((max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer)))) - 50))) : 1)) && ((*(var_1_15_Pointer)) ? (((*(var_1_12_Pointer)) <= ((*(var_1_6_Pointer)) + (*(var_1_7_Pointer)))) ? ((*(var_1_16_Pointer)) ? ((*(var_1_14_Pointer)) == ((double) (*(var_1_17_Pointer)))) : ((((*(var_1_18_Pointer)) - (100 - (*(var_1_19_Pointer)))) <= (*(var_1_7_Pointer))) ? ((*(var_1_14_Pointer)) == ((double) ((*(var_1_20_Pointer)) + (*(var_1_21_Pointer))))) : ((*(var_1_14_Pointer)) == ((double) (*(var_1_17_Pointer)))))) : ((*(var_1_14_Pointer)) == ((double) (*(var_1_20_Pointer))))) : ((*(var_1_14_Pointer)) == ((double) (*(var_1_20_Pointer)))))
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
