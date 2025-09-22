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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch109Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_1 = 16;
signed char* var_1_1_Pointer = &(var_1_1);
signed char var_1_4 = 64;
signed char* var_1_4_Pointer = &(var_1_4);
signed char var_1_5 = 64;
signed char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = 8;
signed long int* var_1_6_Pointer = &(var_1_6);
signed long int var_1_7 = 2;
signed long int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 1;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = 2;
signed short int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 1;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 1;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 0;
unsigned char* var_1_14_Pointer = &(var_1_14);
signed short int var_1_15 = 4;
signed short int* var_1_15_Pointer = &(var_1_15);
signed short int var_1_16 = -10;
signed short int* var_1_16_Pointer = &(var_1_16);
signed short int var_1_17 = 5;
signed short int* var_1_17_Pointer = &(var_1_17);

// Calibration values

// Last'ed variables
signed char last_1_var_1_1 = 16;
signed short int last_1_var_1_8 = 1;
signed short int last_1_var_1_17 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch109Wrapper_P
	signed char stepLocal_1 = (*(var_1_4_Pointer));
	if (stepLocal_1 <= (*(var_1_5_Pointer))) {
		(*(var_1_6_Pointer)) = (last_1_var_1_17 + ((*(var_1_4_Pointer)) + last_1_var_1_8));
	} else {
		(*(var_1_6_Pointer)) = (max (last_1_var_1_8 , (((*(var_1_5_Pointer)) + 16) - (*(var_1_7_Pointer)))));
	}


	// From: Req7Batch109Wrapper_P
	(*(var_1_17_Pointer)) = (*(var_1_6_Pointer));


	// From: Req3Batch109Wrapper_P
	(*(var_1_8_Pointer)) = ((*(var_1_5_Pointer)) - (*(var_1_9_Pointer)));


	// From: Req1Batch109Wrapper_P
	signed short int stepLocal_0 = (*(var_1_8_Pointer));
	if (stepLocal_0 < last_1_var_1_1) {
		(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) - ((*(var_1_5_Pointer)) - 5));
	} else {
		(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
	}


	// From: Req5Batch109Wrapper_P
	(*(var_1_15_Pointer)) = (*(var_1_1_Pointer));


	// From: Req6Batch109Wrapper_P
	(*(var_1_16_Pointer)) = (*(var_1_1_Pointer));


	// From: Req4Batch109Wrapper_P
	signed long int stepLocal_3 = (*(var_1_6_Pointer));
	signed long int stepLocal_2 = 2 * ((*(var_1_5_Pointer)) - (*(var_1_9_Pointer)));
	if (stepLocal_2 <= (*(var_1_15_Pointer))) {
		if ((*(var_1_5_Pointer)) < stepLocal_3) {
			(*(var_1_10_Pointer)) = (((*(var_1_11_Pointer)) && (*(var_1_12_Pointer))) && (*(var_1_13_Pointer)));
		}
	} else {
		(*(var_1_10_Pointer)) = (*(var_1_14_Pointer));
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 126);
	var_1_5 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_5 >= 63);
	assume_abort_if_not(var_1_5 <= 126);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 2147483646);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 1);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 1);
	assume_abort_if_not(var_1_13 <= 1);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_8 = var_1_8;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	return ((((((((*(var_1_8_Pointer)) < last_1_var_1_1) ? ((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_4_Pointer)) - ((*(var_1_5_Pointer)) - 5)))) : ((*(var_1_1_Pointer)) == ((signed char) (*(var_1_4_Pointer))))) && (((*(var_1_4_Pointer)) <= (*(var_1_5_Pointer))) ? ((*(var_1_6_Pointer)) == ((signed long int) (last_1_var_1_17 + ((*(var_1_4_Pointer)) + last_1_var_1_8)))) : ((*(var_1_6_Pointer)) == ((signed long int) (max (last_1_var_1_8 , (((*(var_1_5_Pointer)) + 16) - (*(var_1_7_Pointer))))))))) && ((*(var_1_8_Pointer)) == ((signed short int) ((*(var_1_5_Pointer)) - (*(var_1_9_Pointer)))))) && (((2 * ((*(var_1_5_Pointer)) - (*(var_1_9_Pointer)))) <= (*(var_1_15_Pointer))) ? (((*(var_1_5_Pointer)) < (*(var_1_6_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (((*(var_1_11_Pointer)) && (*(var_1_12_Pointer))) && (*(var_1_13_Pointer))))) : 1) : ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_14_Pointer)))))) && ((*(var_1_15_Pointer)) == ((signed short int) (*(var_1_1_Pointer))))) && ((*(var_1_16_Pointer)) == ((signed short int) (*(var_1_1_Pointer))))) && ((*(var_1_17_Pointer)) == ((signed short int) (*(var_1_6_Pointer))))
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
