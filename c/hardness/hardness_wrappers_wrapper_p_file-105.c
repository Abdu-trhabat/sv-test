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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105Wrapper_P.c", 13, "reach_error"); }
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
signed char var_1_1 = 4;
signed char* var_1_1_Pointer = &(var_1_1);
signed char var_1_2 = 32;
signed char* var_1_2_Pointer = &(var_1_2);
signed char var_1_3 = 50;
signed char* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = 4;
signed long int* var_1_4_Pointer = &(var_1_4);
signed long int var_1_5 = 0;
signed long int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 128;
unsigned short int* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 1.5;
float* var_1_7_Pointer = &(var_1_7);
float var_1_8 = 127.2;
float* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 1;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 128;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 26003;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 4;
unsigned char* var_1_12_Pointer = &(var_1_12);
float var_1_13 = 1.2;
float* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch105Wrapper_P
	(*(var_1_1_Pointer)) = ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer)));


	// From: Req2Batch105Wrapper_P
	if ((((*(var_1_3_Pointer)) >> 2) * (*(var_1_1_Pointer))) <= ((*(var_1_2_Pointer)) / 1000000)) {
		(*(var_1_4_Pointer)) = (5 - ((*(var_1_3_Pointer)) + (*(var_1_5_Pointer))));
	} else {
		(*(var_1_4_Pointer)) = (*(var_1_3_Pointer));
	}


	// From: Req3Batch105Wrapper_P
	unsigned char stepLocal_0 = (*(var_1_4_Pointer)) > (*(var_1_2_Pointer));
	if ((7.7f - (*(var_1_7_Pointer))) > (*(var_1_8_Pointer))) {
		if (stepLocal_0 && (*(var_1_9_Pointer))) {
			if (! (((*(var_1_10_Pointer)) - (*(var_1_3_Pointer))) < -4)) {
				(*(var_1_6_Pointer)) = (((*(var_1_11_Pointer)) - (*(var_1_3_Pointer))) + (*(var_1_10_Pointer)));
			} else {
				(*(var_1_6_Pointer)) = (*(var_1_11_Pointer));
			}
		} else {
			(*(var_1_6_Pointer)) = (*(var_1_10_Pointer));
		}
	}


	// From: Req4Batch105Wrapper_P
	if ((*(var_1_7_Pointer)) <= (*(var_1_13_Pointer))) {
		(*(var_1_12_Pointer)) = ((*(var_1_14_Pointer)) + (*(var_1_3_Pointer)));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 126);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 126);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 127);
	assume_abort_if_not(var_1_10 <= 255);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 16383);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_13 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((*(var_1_1_Pointer)) == ((signed char) ((*(var_1_2_Pointer)) - (*(var_1_3_Pointer))))) && (((((*(var_1_3_Pointer)) >> 2) * (*(var_1_1_Pointer))) <= ((*(var_1_2_Pointer)) / 1000000)) ? ((*(var_1_4_Pointer)) == ((signed long int) (5 - ((*(var_1_3_Pointer)) + (*(var_1_5_Pointer)))))) : ((*(var_1_4_Pointer)) == ((signed long int) (*(var_1_3_Pointer)))))) && (((7.7f - (*(var_1_7_Pointer))) > (*(var_1_8_Pointer))) ? ((((*(var_1_4_Pointer)) > (*(var_1_2_Pointer))) && (*(var_1_9_Pointer))) ? ((! (((*(var_1_10_Pointer)) - (*(var_1_3_Pointer))) < -4)) ? ((*(var_1_6_Pointer)) == ((unsigned short int) (((*(var_1_11_Pointer)) - (*(var_1_3_Pointer))) + (*(var_1_10_Pointer))))) : ((*(var_1_6_Pointer)) == ((unsigned short int) (*(var_1_11_Pointer))))) : ((*(var_1_6_Pointer)) == ((unsigned short int) (*(var_1_10_Pointer))))) : 1)) && (((*(var_1_7_Pointer)) <= (*(var_1_13_Pointer))) ? ((*(var_1_12_Pointer)) == ((unsigned char) ((*(var_1_14_Pointer)) + (*(var_1_3_Pointer))))) : 1)
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
