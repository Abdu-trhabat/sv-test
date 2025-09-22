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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Wrapper_P.c", 13, "reach_error"); }
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
signed short int var_1_1 = -10;
signed short int* var_1_1_Pointer = &(var_1_1);
signed long int var_1_3 = 1;
signed long int* var_1_3_Pointer = &(var_1_3);
signed long int var_1_4 = -256;
signed long int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 4;
unsigned char* var_1_5_Pointer = &(var_1_5);
unsigned char var_1_6 = 0;
unsigned char* var_1_6_Pointer = &(var_1_6);
unsigned char var_1_7 = 128;
unsigned char* var_1_7_Pointer = &(var_1_7);
unsigned char var_1_8 = 128;
unsigned char* var_1_8_Pointer = &(var_1_8);
unsigned char var_1_9 = 4;
unsigned char* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 50;
unsigned char* var_1_10_Pointer = &(var_1_10);
signed char var_1_11 = -128;
signed char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 1;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 0;
unsigned char* var_1_13_Pointer = &(var_1_13);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch180Wrapper_P
	if (! (*(var_1_6_Pointer))) {
		(*(var_1_5_Pointer)) = (min ((*(var_1_7_Pointer)) , ((*(var_1_8_Pointer)) - ((*(var_1_9_Pointer)) + (*(var_1_10_Pointer))))));
	} else {
		(*(var_1_5_Pointer)) = (128 - (*(var_1_9_Pointer)));
	}


	// From: Req1Batch180Wrapper_P
	signed long int stepLocal_0 = ((*(var_1_3_Pointer)) * -10) & (*(var_1_4_Pointer));
	if ((~ (*(var_1_5_Pointer))) >= stepLocal_0) {
		(*(var_1_1_Pointer)) = (*(var_1_5_Pointer));
	}


	// From: Req3Batch180Wrapper_P
	unsigned char stepLocal_3 = (*(var_1_5_Pointer)) < (*(var_1_8_Pointer));
	unsigned char stepLocal_2 = (*(var_1_9_Pointer));
	signed short int stepLocal_1 = (*(var_1_1_Pointer));
	if ((*(var_1_6_Pointer))) {
		if (stepLocal_1 < (*(var_1_10_Pointer))) {
			if ((max (((*(var_1_8_Pointer)) - (*(var_1_10_Pointer))) , (*(var_1_1_Pointer)))) >= stepLocal_2) {
				(*(var_1_11_Pointer)) = (*(var_1_10_Pointer));
			} else {
				if (stepLocal_3 || (*(var_1_12_Pointer))) {
					if ((*(var_1_12_Pointer))) {
						if ((*(var_1_13_Pointer))) {
							(*(var_1_11_Pointer)) = (*(var_1_10_Pointer));
						}
					} else {
						(*(var_1_11_Pointer)) = (*(var_1_9_Pointer));
					}
				} else {
					(*(var_1_11_Pointer)) = (*(var_1_10_Pointer));
				}
			}
		} else {
			(*(var_1_11_Pointer)) = (*(var_1_10_Pointer));
		}
	} else {
		(*(var_1_11_Pointer)) = (*(var_1_9_Pointer));
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 254);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 127);
	assume_abort_if_not(var_1_8 <= 254);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 0);
	assume_abort_if_not(var_1_9 <= 64);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 63);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 1);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((~ (*(var_1_5_Pointer))) >= (((*(var_1_3_Pointer)) * -10) & (*(var_1_4_Pointer)))) ? ((*(var_1_1_Pointer)) == ((signed short int) (*(var_1_5_Pointer)))) : 1) && ((! (*(var_1_6_Pointer))) ? ((*(var_1_5_Pointer)) == ((unsigned char) (min ((*(var_1_7_Pointer)) , ((*(var_1_8_Pointer)) - ((*(var_1_9_Pointer)) + (*(var_1_10_Pointer)))))))) : ((*(var_1_5_Pointer)) == ((unsigned char) (128 - (*(var_1_9_Pointer))))))) && ((*(var_1_6_Pointer)) ? (((*(var_1_1_Pointer)) < (*(var_1_10_Pointer))) ? (((max (((*(var_1_8_Pointer)) - (*(var_1_10_Pointer))) , (*(var_1_1_Pointer)))) >= (*(var_1_9_Pointer))) ? ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_10_Pointer)))) : ((((*(var_1_5_Pointer)) < (*(var_1_8_Pointer))) || (*(var_1_12_Pointer))) ? ((*(var_1_12_Pointer)) ? ((*(var_1_13_Pointer)) ? ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_10_Pointer)))) : 1) : ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_9_Pointer))))) : ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_10_Pointer)))))) : ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_10_Pointer))))) : ((*(var_1_11_Pointer)) == ((signed char) (*(var_1_9_Pointer)))))
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
