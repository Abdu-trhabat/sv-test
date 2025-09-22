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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch57Wrapper_P.c", 13, "reach_error"); }
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
signed long int var_1_1 = 1;
signed long int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = -2;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 1;
signed long int* var_1_3_Pointer = &(var_1_3);
unsigned char var_1_4 = 0;
unsigned char* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 1;
unsigned char* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 1;
signed long int* var_1_7_Pointer = &(var_1_7);
signed long int var_1_8 = -4;
signed long int* var_1_8_Pointer = &(var_1_8);
signed char var_1_9 = 64;
signed char* var_1_9_Pointer = &(var_1_9);
signed char var_1_10 = 4;
signed char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -4;
signed char* var_1_11_Pointer = &(var_1_11);
signed char var_1_12 = 32;
signed char* var_1_12_Pointer = &(var_1_12);
signed char var_1_13 = 32;
signed char* var_1_13_Pointer = &(var_1_13);
signed char var_1_14 = -64;
signed char* var_1_14_Pointer = &(var_1_14);
signed char var_1_15 = 8;
signed char* var_1_15_Pointer = &(var_1_15);
unsigned long int var_1_16 = 8;
unsigned long int* var_1_16_Pointer = &(var_1_16);
unsigned long int var_1_17 = 8;
unsigned long int* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 128;
unsigned char* var_1_18_Pointer = &(var_1_18);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch57Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_6_Pointer));
	if (! ((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer)))) {
		if (((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))) && stepLocal_0) {
			(*(var_1_1_Pointer)) = (min ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer))));
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
		}
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_8_Pointer));
	}


	// From: Req2Batch57Wrapper_P
	unsigned char stepLocal_2 = (*(var_1_5_Pointer));
	unsigned char stepLocal_1 = (*(var_1_6_Pointer));
	if (stepLocal_2 && (*(var_1_4_Pointer))) {
		if (stepLocal_1 || ((*(var_1_7_Pointer)) == (*(var_1_1_Pointer)))) {
			(*(var_1_9_Pointer)) = (min ((*(var_1_10_Pointer)) , (*(var_1_11_Pointer))));
		}
	} else {
		(*(var_1_9_Pointer)) = ((*(var_1_12_Pointer)) - (*(var_1_13_Pointer)));
	}


	// From: Req3Batch57Wrapper_P
	signed long int stepLocal_4 = (max ((*(var_1_13_Pointer)) , (*(var_1_15_Pointer)))) << (max ((*(var_1_16_Pointer)) , (*(var_1_17_Pointer))));
	unsigned long int stepLocal_3 = (*(var_1_18_Pointer)) - (*(var_1_16_Pointer));
	if ((*(var_1_12_Pointer)) < stepLocal_4) {
		(*(var_1_14_Pointer)) = ((*(var_1_17_Pointer)) - 64);
	} else {
		if (stepLocal_3 == (*(var_1_1_Pointer))) {
			(*(var_1_14_Pointer)) = (*(var_1_16_Pointer));
		} else {
			(*(var_1_14_Pointer)) = (*(var_1_11_Pointer));
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
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -2147483647);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -2147483647);
	assume_abort_if_not(var_1_8 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= -127);
	assume_abort_if_not(var_1_10 <= 126);
	var_1_11 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_11 >= -127);
	assume_abort_if_not(var_1_11 <= 126);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 126);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 126);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 24);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 24);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 127);
	assume_abort_if_not(var_1_18 <= 255);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((! ((*(var_1_2_Pointer)) >= (*(var_1_3_Pointer)))) ? ((((*(var_1_4_Pointer)) || (*(var_1_5_Pointer))) && (*(var_1_6_Pointer))) ? ((*(var_1_1_Pointer)) == ((signed long int) (min ((*(var_1_7_Pointer)) , (*(var_1_8_Pointer)))))) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))) : ((*(var_1_1_Pointer)) == ((signed long int) (*(var_1_8_Pointer))))) && (((*(var_1_5_Pointer)) && (*(var_1_4_Pointer))) ? (((*(var_1_6_Pointer)) || ((*(var_1_7_Pointer)) == (*(var_1_1_Pointer)))) ? ((*(var_1_9_Pointer)) == ((signed char) (min ((*(var_1_10_Pointer)) , (*(var_1_11_Pointer)))))) : 1) : ((*(var_1_9_Pointer)) == ((signed char) ((*(var_1_12_Pointer)) - (*(var_1_13_Pointer))))))) && (((*(var_1_12_Pointer)) < ((max ((*(var_1_13_Pointer)) , (*(var_1_15_Pointer)))) << (max ((*(var_1_16_Pointer)) , (*(var_1_17_Pointer)))))) ? ((*(var_1_14_Pointer)) == ((signed char) ((*(var_1_17_Pointer)) - 64))) : ((((*(var_1_18_Pointer)) - (*(var_1_16_Pointer))) == (*(var_1_1_Pointer))) ? ((*(var_1_14_Pointer)) == ((signed char) (*(var_1_16_Pointer)))) : ((*(var_1_14_Pointer)) == ((signed char) (*(var_1_11_Pointer))))))
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
