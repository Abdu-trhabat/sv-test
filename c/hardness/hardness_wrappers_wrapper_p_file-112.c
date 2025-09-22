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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Wrapper_P.c", 13, "reach_error"); }
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
float var_1_1 = 8.4;
float* var_1_1_Pointer = &(var_1_1);
float var_1_2 = 9999999999.14;
float* var_1_2_Pointer = &(var_1_2);
float var_1_3 = 16.2;
float* var_1_3_Pointer = &(var_1_3);
float var_1_4 = 15.125;
float* var_1_4_Pointer = &(var_1_4);
float var_1_5 = 256.4;
float* var_1_5_Pointer = &(var_1_5);
float var_1_6 = 256.75;
float* var_1_6_Pointer = &(var_1_6);
float var_1_7 = 8.8;
float* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 1;
unsigned char* var_1_8_Pointer = &(var_1_8);
float var_1_9 = 25.75;
float* var_1_9_Pointer = &(var_1_9);
float var_1_10 = 8.6;
float* var_1_10_Pointer = &(var_1_10);
unsigned short int var_1_11 = 128;
unsigned short int* var_1_11_Pointer = &(var_1_11);
unsigned short int var_1_12 = 0;
unsigned short int* var_1_12_Pointer = &(var_1_12);
unsigned short int var_1_13 = 10;
unsigned short int* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 1;
unsigned char* var_1_14_Pointer = &(var_1_14);
signed char var_1_16 = 5;
signed char* var_1_16_Pointer = &(var_1_16);
unsigned char var_1_17 = 128;
unsigned char* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 32;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned char var_1_19 = 0;
unsigned char* var_1_19_Pointer = &(var_1_19);
unsigned char var_1_20 = 128;
unsigned char* var_1_20_Pointer = &(var_1_20);

// Calibration values

// Last'ed variables
float last_1_var_1_7 = 8.8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch112Wrapper_P
	if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
		(*(var_1_1_Pointer)) = (min ((*(var_1_4_Pointer)) , (max ((*(var_1_5_Pointer)) , (*(var_1_6_Pointer))))));
	}


	// From: Req2Batch112Wrapper_P
	if ((*(var_1_8_Pointer))) {
		if (last_1_var_1_7 < (*(var_1_1_Pointer))) {
			(*(var_1_7_Pointer)) = ((max ((*(var_1_9_Pointer)) , 32.75f)) + (*(var_1_10_Pointer)));
		}
	} else {
		(*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
	}


	// From: Req3Batch112Wrapper_P
	(*(var_1_11_Pointer)) = (max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer))));


	// From: Req4Batch112Wrapper_P
	signed long int stepLocal_0 = 0;
	if (stepLocal_0 <= ((*(var_1_12_Pointer)) >> (*(var_1_16_Pointer)))) {
		if (! ((*(var_1_1_Pointer)) != (*(var_1_2_Pointer)))) {
			if ((*(var_1_8_Pointer))) {
				(*(var_1_14_Pointer)) = ((max (128 , (*(var_1_17_Pointer)))) - (*(var_1_16_Pointer)));
			} else {
				if ((*(var_1_7_Pointer)) >= (*(var_1_10_Pointer))) {
					(*(var_1_14_Pointer)) = ((*(var_1_16_Pointer)) + (*(var_1_18_Pointer)));
				} else {
					if ((*(var_1_19_Pointer))) {
						(*(var_1_14_Pointer)) = (*(var_1_18_Pointer));
					} else {
						(*(var_1_14_Pointer)) = (*(var_1_20_Pointer));
					}
				}
			}
		}
	} else {
		(*(var_1_14_Pointer)) = (*(var_1_18_Pointer));
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 65534);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 1);
	assume_abort_if_not(var_1_16 <= 15);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 127);
	assume_abort_if_not(var_1_17 <= 254);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_7 = var_1_7;
}

int property(void) {
	return (((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((float) (min ((*(var_1_4_Pointer)) , (max ((*(var_1_5_Pointer)) , (*(var_1_6_Pointer)))))))) : 1) && ((*(var_1_8_Pointer)) ? ((last_1_var_1_7 < (*(var_1_1_Pointer))) ? ((*(var_1_7_Pointer)) == ((float) ((max ((*(var_1_9_Pointer)) , 32.75f)) + (*(var_1_10_Pointer))))) : 1) : ((*(var_1_7_Pointer)) == ((float) (*(var_1_9_Pointer)))))) && ((*(var_1_11_Pointer)) == ((unsigned short int) (max ((*(var_1_12_Pointer)) , (*(var_1_13_Pointer))))))) && ((0 <= ((*(var_1_12_Pointer)) >> (*(var_1_16_Pointer)))) ? ((! ((*(var_1_1_Pointer)) != (*(var_1_2_Pointer)))) ? ((*(var_1_8_Pointer)) ? ((*(var_1_14_Pointer)) == ((unsigned char) ((max (128 , (*(var_1_17_Pointer)))) - (*(var_1_16_Pointer))))) : (((*(var_1_7_Pointer)) >= (*(var_1_10_Pointer))) ? ((*(var_1_14_Pointer)) == ((unsigned char) ((*(var_1_16_Pointer)) + (*(var_1_18_Pointer))))) : ((*(var_1_19_Pointer)) ? ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_18_Pointer)))) : ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_20_Pointer))))))) : 1) : ((*(var_1_14_Pointer)) == ((unsigned char) (*(var_1_18_Pointer)))))
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
