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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch81Wrapper_P.c", 13, "reach_error"); }
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
double var_1_1 = 9999.5;
double* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 1;
unsigned char* var_1_2_Pointer = &(var_1_2);
double var_1_3 = 4.5;
double* var_1_3_Pointer = &(var_1_3);
double var_1_4 = 2.5;
double* var_1_4_Pointer = &(var_1_4);
double var_1_5 = 0.0;
double* var_1_5_Pointer = &(var_1_5);
double var_1_6 = 999999999999.3;
double* var_1_6_Pointer = &(var_1_6);
signed char var_1_7 = -128;
signed char* var_1_7_Pointer = &(var_1_7);
signed long int var_1_9 = 0;
signed long int* var_1_9_Pointer = &(var_1_9);
signed long int var_1_10 = -10;
signed long int* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = 16;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 16;
signed char* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 5;
unsigned short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned short int var_1_15 = 16;
unsigned short int* var_1_15_Pointer = &(var_1_15);
unsigned short int var_1_16 = 32647;
unsigned short int* var_1_16_Pointer = &(var_1_16);
unsigned short int var_1_17 = 128;
unsigned short int* var_1_17_Pointer = &(var_1_17);
signed long int var_1_18 = -8;
signed long int* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch81Wrapper_P
	unsigned char stepLocal_1 = (*(var_1_14_Pointer));
	if (((*(var_1_11_Pointer)) >= last_1_var_1_18) && stepLocal_1) {
		(*(var_1_13_Pointer)) = (min ((*(var_1_15_Pointer)) , 100));
	} else {
		(*(var_1_13_Pointer)) = (((*(var_1_16_Pointer)) - 5) + (*(var_1_17_Pointer)));
	}


	// From: Req4Batch81Wrapper_P
	unsigned short int stepLocal_2 = (*(var_1_16_Pointer));
	if ((*(var_1_13_Pointer)) > stepLocal_2) {
		if ((*(var_1_3_Pointer)) < ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer)))) {
			(*(var_1_18_Pointer)) = (abs ((*(var_1_15_Pointer))));
		} else {
			(*(var_1_18_Pointer)) = (*(var_1_13_Pointer));
		}
	} else {
		(*(var_1_18_Pointer)) = (*(var_1_15_Pointer));
	}


	// From: Req1Batch81Wrapper_P
	if ((*(var_1_2_Pointer))) {
		(*(var_1_1_Pointer)) = (max ((*(var_1_3_Pointer)) , ((*(var_1_4_Pointer)) - ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer))))));
	}


	// From: Req2Batch81Wrapper_P
	signed long int stepLocal_0 = (*(var_1_9_Pointer)) ^ (*(var_1_10_Pointer));
	if ((min (-25 , (*(var_1_13_Pointer)))) != stepLocal_0) {
		if ((*(var_1_2_Pointer))) {
			(*(var_1_7_Pointer)) = ((*(var_1_11_Pointer)) + (*(var_1_12_Pointer)));
		}
	} else {
		(*(var_1_7_Pointer)) = (min ((*(var_1_12_Pointer)) , (*(var_1_11_Pointer))));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 4611686.018427383000e+12F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483648);
	assume_abort_if_not(var_1_9 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483648);
	assume_abort_if_not(var_1_10 <= 2147483647);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -63);
	assume_abort_if_not(var_1_11 <= 63);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 65534);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_17 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	return ((((*(var_1_2_Pointer)) ? ((*(var_1_1_Pointer)) == ((double) (max ((*(var_1_3_Pointer)) , ((*(var_1_4_Pointer)) - ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer)))))))) : 1) && (((min (-25 , (*(var_1_13_Pointer)))) != ((*(var_1_9_Pointer)) ^ (*(var_1_10_Pointer)))) ? ((*(var_1_2_Pointer)) ? ((*(var_1_7_Pointer)) == ((signed char) ((*(var_1_11_Pointer)) + (*(var_1_12_Pointer))))) : 1) : ((*(var_1_7_Pointer)) == ((signed char) (min ((*(var_1_12_Pointer)) , (*(var_1_11_Pointer)))))))) && ((((*(var_1_11_Pointer)) >= last_1_var_1_18) && (*(var_1_14_Pointer))) ? ((*(var_1_13_Pointer)) == ((unsigned short int) (min ((*(var_1_15_Pointer)) , 100)))) : ((*(var_1_13_Pointer)) == ((unsigned short int) (((*(var_1_16_Pointer)) - 5) + (*(var_1_17_Pointer))))))) && (((*(var_1_13_Pointer)) > (*(var_1_16_Pointer))) ? (((*(var_1_3_Pointer)) < ((*(var_1_5_Pointer)) - (*(var_1_6_Pointer)))) ? ((*(var_1_18_Pointer)) == ((signed long int) (abs ((*(var_1_15_Pointer)))))) : ((*(var_1_18_Pointer)) == ((signed long int) (*(var_1_13_Pointer))))) : ((*(var_1_18_Pointer)) == ((signed long int) (*(var_1_15_Pointer)))))
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
