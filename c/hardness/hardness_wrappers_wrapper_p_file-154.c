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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch154Wrapper_P.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 50;
unsigned char* var_1_1_Pointer = &(var_1_1);
signed long int var_1_2 = 0;
signed long int* var_1_2_Pointer = &(var_1_2);
signed long int var_1_3 = 1;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 16;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 1;
signed long int* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 10;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 8;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 2;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned long int var_1_9 = 128;
unsigned long int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 200;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 1000000000;
unsigned long int* var_1_12_Pointer = &(var_1_12);
unsigned long int var_1_13 = 1000000000;
unsigned long int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 5;
unsigned char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_9 = 128;
unsigned char last_1_var_1_14 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch154Wrapper_P
	if (last_1_var_1_9 < (*(var_1_3_Pointer))) {
		if (last_1_var_1_14 <= (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) - (*(var_1_7_Pointer)))) {
			(*(var_1_9_Pointer)) = ((1211749435u + ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))) - (*(var_1_8_Pointer)));
		} else {
			if ((*(var_1_10_Pointer)) < ((*(var_1_7_Pointer)) | (*(var_1_5_Pointer)))) {
				(*(var_1_9_Pointer)) = (*(var_1_10_Pointer));
			}
		}
	} else {
		(*(var_1_9_Pointer)) = (*(var_1_8_Pointer));
	}


	// From: Req3Batch154Wrapper_P
	unsigned long int stepLocal_1 = ((*(var_1_7_Pointer)) & (*(var_1_9_Pointer))) / (*(var_1_10_Pointer));
	if (stepLocal_1 < ((*(var_1_8_Pointer)) + (abs ((*(var_1_11_Pointer)))))) {
		(*(var_1_14_Pointer)) = (*(var_1_7_Pointer));
	} else {
		(*(var_1_14_Pointer)) = 5;
	}


	// From: Req1Batch154Wrapper_P
	signed long int stepLocal_0 = (*(var_1_4_Pointer)) + (*(var_1_5_Pointer));
	if ((max ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))) != stepLocal_0) {
		(*(var_1_1_Pointer)) = (abs ((*(var_1_6_Pointer))));
	} else {
		(*(var_1_1_Pointer)) = (min (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer))) , (*(var_1_6_Pointer))));
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
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 254);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 127);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 127);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 191);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 64);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 536870912);
	assume_abort_if_not(var_1_12 <= 1073741824);
	var_1_13 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_13 >= 536870912);
	assume_abort_if_not(var_1_13 <= 1073741823);
}



void updateLastVariables(void) {
	last_1_var_1_9 = var_1_9;
	last_1_var_1_14 = var_1_14;
}

int property(void) {
	return ((((max ((*(var_1_2_Pointer)) , (*(var_1_3_Pointer)))) != ((*(var_1_4_Pointer)) + (*(var_1_5_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned char) (abs ((*(var_1_6_Pointer)))))) : ((*(var_1_1_Pointer)) == ((unsigned char) (min (((*(var_1_7_Pointer)) + (*(var_1_8_Pointer))) , (*(var_1_6_Pointer))))))) && ((last_1_var_1_9 < (*(var_1_3_Pointer))) ? ((last_1_var_1_14 <= (((*(var_1_10_Pointer)) - (*(var_1_11_Pointer))) - (*(var_1_7_Pointer)))) ? ((*(var_1_9_Pointer)) == ((unsigned long int) ((1211749435u + ((*(var_1_12_Pointer)) + (*(var_1_13_Pointer)))) - (*(var_1_8_Pointer))))) : (((*(var_1_10_Pointer)) < ((*(var_1_7_Pointer)) | (*(var_1_5_Pointer)))) ? ((*(var_1_9_Pointer)) == ((unsigned long int) (*(var_1_10_Pointer)))) : 1)) : ((*(var_1_9_Pointer)) == ((unsigned long int) (*(var_1_8_Pointer)))))) && (((((*(var_1_7_Pointer)) & (*(var_1_9_Pointer))) / (*(var_1_10_Pointer))) < ((*(var_1_8_Pointer)) + (abs ((*(var_1_11_Pointer)))))) ? ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_7_Pointer)))) : ((*(var_1_14_Pointer)) == ((unsigned char) 5)))
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
