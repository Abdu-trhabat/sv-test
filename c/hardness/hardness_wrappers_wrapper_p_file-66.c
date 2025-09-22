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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch66Wrapper_P.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 8;
unsigned short int* var_1_1_Pointer = &(var_1_1);
unsigned long int var_1_2 = 1;
unsigned long int* var_1_2_Pointer = &(var_1_2);
unsigned long int var_1_3 = 32;
unsigned long int* var_1_3_Pointer = &(var_1_3);
unsigned short int var_1_4 = 4;
unsigned short int* var_1_4_Pointer = &(var_1_4);
unsigned short int var_1_5 = 16;
unsigned short int* var_1_5_Pointer = &(var_1_5);
unsigned short int var_1_6 = 128;
unsigned short int* var_1_6_Pointer = &(var_1_6);
unsigned short int var_1_7 = 10000;
unsigned short int* var_1_7_Pointer = &(var_1_7);
unsigned short int var_1_8 = 0;
unsigned short int* var_1_8_Pointer = &(var_1_8);
unsigned short int var_1_9 = 38382;
unsigned short int* var_1_9_Pointer = &(var_1_9);
unsigned char var_1_10 = 0;
unsigned char* var_1_10_Pointer = &(var_1_10);
unsigned char var_1_11 = 0;
unsigned char* var_1_11_Pointer = &(var_1_11);
unsigned char var_1_12 = 0;
unsigned char* var_1_12_Pointer = &(var_1_12);
unsigned char var_1_13 = 32;
unsigned char* var_1_13_Pointer = &(var_1_13);
unsigned char var_1_14 = 2;
unsigned char* var_1_14_Pointer = &(var_1_14);
unsigned char var_1_15 = 2;
unsigned char* var_1_15_Pointer = &(var_1_15);
signed long int var_1_16 = -1000000;
signed long int* var_1_16_Pointer = &(var_1_16);
signed long int var_1_17 = -1000000000;
signed long int* var_1_17_Pointer = &(var_1_17);
unsigned char var_1_18 = 100;
unsigned char* var_1_18_Pointer = &(var_1_18);
unsigned long int var_1_19 = 10;
unsigned long int* var_1_19_Pointer = &(var_1_19);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch66Wrapper_P
	if ((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) {
		(*(var_1_1_Pointer)) = ((*(var_1_4_Pointer)) + (((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))) + ((*(var_1_7_Pointer)) - (*(var_1_8_Pointer)))));
	} else {
		(*(var_1_1_Pointer)) = ((*(var_1_9_Pointer)) - (*(var_1_7_Pointer)));
	}


	// From: Req2Batch66Wrapper_P
	unsigned short int stepLocal_1 = (*(var_1_4_Pointer));
	unsigned char stepLocal_0 = (*(var_1_4_Pointer)) > (*(var_1_1_Pointer));
	if (stepLocal_0 || (*(var_1_11_Pointer))) {
		if ((*(var_1_6_Pointer)) != stepLocal_1) {
			(*(var_1_10_Pointer)) = (*(var_1_12_Pointer));
		} else {
			(*(var_1_10_Pointer)) = (max (((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))) , (max ((*(var_1_12_Pointer)) , (*(var_1_15_Pointer))))));
		}
	}


	// From: Req3Batch66Wrapper_P
	if ((*(var_1_9_Pointer)) < (*(var_1_4_Pointer))) {
		(*(var_1_16_Pointer)) = ((*(var_1_7_Pointer)) + 16);
	} else {
		if ((*(var_1_11_Pointer)) || ((*(var_1_17_Pointer)) <= (*(var_1_3_Pointer)))) {
			(*(var_1_16_Pointer)) = (*(var_1_4_Pointer));
		} else {
			(*(var_1_16_Pointer)) = (*(var_1_1_Pointer));
		}
	}


	// From: Req4Batch66Wrapper_P
	(*(var_1_18_Pointer)) = (*(var_1_15_Pointer));


	// From: Req5Batch66Wrapper_P
	(*(var_1_19_Pointer)) = (*(var_1_12_Pointer));
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 32767);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 8192);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 8192);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 8191);
	assume_abort_if_not(var_1_7 <= 16383);
	var_1_8 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 8191);
	var_1_9 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_9 >= 32767);
	assume_abort_if_not(var_1_9 <= 65534);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 1);
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 127);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 254);
	var_1_17 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_17 >= -2147483648);
	assume_abort_if_not(var_1_17 <= 2147483647);
}



void updateLastVariables(void) {
}

int property(void) {
	return ((((((*(var_1_2_Pointer)) <= (*(var_1_3_Pointer))) ? ((*(var_1_1_Pointer)) == ((unsigned short int) ((*(var_1_4_Pointer)) + (((*(var_1_5_Pointer)) + (*(var_1_6_Pointer))) + ((*(var_1_7_Pointer)) - (*(var_1_8_Pointer))))))) : ((*(var_1_1_Pointer)) == ((unsigned short int) ((*(var_1_9_Pointer)) - (*(var_1_7_Pointer)))))) && ((((*(var_1_4_Pointer)) > (*(var_1_1_Pointer))) || (*(var_1_11_Pointer))) ? (((*(var_1_6_Pointer)) != (*(var_1_4_Pointer))) ? ((*(var_1_10_Pointer)) == ((unsigned char) (*(var_1_12_Pointer)))) : ((*(var_1_10_Pointer)) == ((unsigned char) (max (((*(var_1_13_Pointer)) + (*(var_1_14_Pointer))) , (max ((*(var_1_12_Pointer)) , (*(var_1_15_Pointer))))))))) : 1)) && (((*(var_1_9_Pointer)) < (*(var_1_4_Pointer))) ? ((*(var_1_16_Pointer)) == ((signed long int) ((*(var_1_7_Pointer)) + 16))) : (((*(var_1_11_Pointer)) || ((*(var_1_17_Pointer)) <= (*(var_1_3_Pointer)))) ? ((*(var_1_16_Pointer)) == ((signed long int) (*(var_1_4_Pointer)))) : ((*(var_1_16_Pointer)) == ((signed long int) (*(var_1_1_Pointer))))))) && ((*(var_1_18_Pointer)) == ((unsigned char) (*(var_1_15_Pointer))))) && ((*(var_1_19_Pointer)) == ((unsigned long int) (*(var_1_12_Pointer))))
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
