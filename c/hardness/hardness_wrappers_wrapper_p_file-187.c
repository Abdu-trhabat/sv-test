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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Wrapper_P.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 8;
unsigned long int* var_1_1_Pointer = &(var_1_1);
unsigned char var_1_2 = 0;
unsigned char* var_1_2_Pointer = &(var_1_2);
unsigned short int var_1_3 = 200;
unsigned short int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 100;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned char var_1_5 = 0;
unsigned char* var_1_5_Pointer = &(var_1_5);
signed long int var_1_6 = -100;
signed long int* var_1_6_Pointer = &(var_1_6);
signed short int var_1_7 = 0;
signed short int* var_1_7_Pointer = &(var_1_7);
signed short int var_1_8 = 8;
signed short int* var_1_8_Pointer = &(var_1_8);
signed short int var_1_9 = -16;
signed short int* var_1_9_Pointer = &(var_1_9);
unsigned long int var_1_10 = 10000;
unsigned long int* var_1_10_Pointer = &(var_1_10);
signed short int var_1_11 = 1;
signed short int* var_1_11_Pointer = &(var_1_11);
unsigned long int var_1_12 = 128;
unsigned long int* var_1_12_Pointer = &(var_1_12);

// Calibration values

// Last'ed variables
unsigned long int last_1_var_1_10 = 10000;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch187Wrapper_P
	unsigned char stepLocal_1 = ((*(var_1_4_Pointer)) / (*(var_1_6_Pointer))) < (*(var_1_3_Pointer));
	unsigned short int stepLocal_0 = (*(var_1_4_Pointer));
	if ((*(var_1_2_Pointer))) {
		if ((*(var_1_3_Pointer)) <= stepLocal_0) {
			if ((*(var_1_5_Pointer)) && stepLocal_1) {
				(*(var_1_1_Pointer)) = (*(var_1_4_Pointer));
			}
		} else {
			(*(var_1_1_Pointer)) = (*(var_1_3_Pointer));
		}
	}


	// From: Req3Batch187Wrapper_P
	signed long int stepLocal_5 = (*(var_1_6_Pointer));
	unsigned long int stepLocal_4 = (*(var_1_1_Pointer));
	if (last_1_var_1_10 > stepLocal_5) {
		if (((*(var_1_8_Pointer)) - (*(var_1_11_Pointer))) > stepLocal_4) {
			(*(var_1_10_Pointer)) = ((min ((*(var_1_11_Pointer)) , (last_1_var_1_10 + (*(var_1_1_Pointer))))) + (*(var_1_12_Pointer)));
		}
	} else {
		(*(var_1_10_Pointer)) = (*(var_1_1_Pointer));
	}


	// From: Req2Batch187Wrapper_P
	unsigned long int stepLocal_3 = (*(var_1_1_Pointer));
	signed long int stepLocal_2 = 2;
	if (stepLocal_2 == (min (((*(var_1_10_Pointer)) | (*(var_1_1_Pointer))) , (*(var_1_1_Pointer))))) {
		if ((*(var_1_10_Pointer)) < stepLocal_3) {
			(*(var_1_7_Pointer)) = ((*(var_1_8_Pointer)) - 8);
		} else {
			(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
		}
	} else {
		if ((*(var_1_2_Pointer))) {
			(*(var_1_7_Pointer)) = (*(var_1_8_Pointer));
		} else {
			(*(var_1_7_Pointer)) = (*(var_1_9_Pointer));
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 65535);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 65535);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -2147483648);
	assume_abort_if_not(var_1_6 <= 2147483647);
	assume_abort_if_not(var_1_6 != 0);
	var_1_8 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_8 >= -1);
	assume_abort_if_not(var_1_8 <= 32766);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -32767);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 2147483647);
}



void updateLastVariables(void) {
	last_1_var_1_10 = var_1_10;
}

int property(void) {
	return (((*(var_1_2_Pointer)) ? (((*(var_1_3_Pointer)) <= (*(var_1_4_Pointer))) ? (((*(var_1_5_Pointer)) && (((*(var_1_4_Pointer)) / (*(var_1_6_Pointer))) < (*(var_1_3_Pointer)))) ? ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_4_Pointer)))) : 1) : ((*(var_1_1_Pointer)) == ((unsigned long int) (*(var_1_3_Pointer))))) : 1) && ((2 == (min (((*(var_1_10_Pointer)) | (*(var_1_1_Pointer))) , (*(var_1_1_Pointer))))) ? (((*(var_1_10_Pointer)) < (*(var_1_1_Pointer))) ? ((*(var_1_7_Pointer)) == ((signed short int) ((*(var_1_8_Pointer)) - 8))) : ((*(var_1_7_Pointer)) == ((signed short int) (*(var_1_8_Pointer))))) : ((*(var_1_2_Pointer)) ? ((*(var_1_7_Pointer)) == ((signed short int) (*(var_1_8_Pointer)))) : ((*(var_1_7_Pointer)) == ((signed short int) (*(var_1_9_Pointer))))))) && ((last_1_var_1_10 > (*(var_1_6_Pointer))) ? ((((*(var_1_8_Pointer)) - (*(var_1_11_Pointer))) > (*(var_1_1_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned long int) ((min ((*(var_1_11_Pointer)) , (last_1_var_1_10 + (*(var_1_1_Pointer))))) + (*(var_1_12_Pointer))))) : 1) : ((*(var_1_10_Pointer)) == ((unsigned long int) (*(var_1_1_Pointer)))))
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
