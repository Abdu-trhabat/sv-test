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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Wrapper_AP.c", 13, "reach_error"); }
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
unsigned char BOOL_unsigned_char_Array_0[2] = {
	1, 0
};
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer = &(BOOL_unsigned_char_Array_0[0]);
unsigned char* BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer = &(BOOL_unsigned_char_Array_0[1]);
double double_Array_0[2][2][2] = {
	{{9.5, 1.974}, {10.25, 127.25}}, {{32.4, 63.5}, {15.75, 8.8}}
};
double* double_Array_0_arraydouble_Array_0arrayVar0_Pointer = &(double_Array_0[0][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar1_Pointer = &(double_Array_0[1][0][0]);
double* double_Array_0_arraydouble_Array_0arrayVar2_Pointer = &(double_Array_0[0][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar3_Pointer = &(double_Array_0[1][1][0]);
double* double_Array_0_arraydouble_Array_0arrayVar4_Pointer = &(double_Array_0[0][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar5_Pointer = &(double_Array_0[1][0][1]);
double* double_Array_0_arraydouble_Array_0arrayVar6_Pointer = &(double_Array_0[0][1][1]);
double* double_Array_0_arraydouble_Array_0arrayVar7_Pointer = &(double_Array_0[1][1][1]);
unsigned short int unsigned_short_int_Array_0[3] = {
	1, 32, 200
};
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer = &(unsigned_short_int_Array_0[0]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer = &(unsigned_short_int_Array_0[1]);
unsigned short int* unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer = &(unsigned_short_int_Array_0[2]);

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch179Wrapper_AP
	unsigned char stepLocal_0 = (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer));
	if (stepLocal_0 && (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) {
		(*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) = ((min ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) + 7.5);
	}


	// From: Req2Batch179Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) {
		if ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) {
			if ((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))) {
				(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) + ((max ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer))));
			} else {
				(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (abs ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))));
			}
		} else {
			(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer));
		}
	} else {
		(*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer));
	}


	// From: Req3Batch179Wrapper_AP
	if ((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (((29089 - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) - 8) + 16);
	} else {
		(*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) = (min ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer))));
	}


	// From: Req4Batch179Wrapper_AP
	(*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) = (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer));
}



void updateVariables(void) {
	BOOL_unsigned_char_Array_0[0] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[0] <= 1);
	BOOL_unsigned_char_Array_0[1] = __VERIFIER_nondet_uchar();
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] >= 0);
	assume_abort_if_not(BOOL_unsigned_char_Array_0[1] <= 1);
	double_Array_0[0][0][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][0][0] >= 0.0F && double_Array_0[0][0][0] <= -1.0e-20F) || (double_Array_0[0][0][0] <= 4611686.018427383000e+12F && double_Array_0[0][0][0] >= 1.0e-20F ));
	double_Array_0[0][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][0] >= 0.0F && double_Array_0[0][1][0] <= -1.0e-20F) || (double_Array_0[0][1][0] <= 4611686.018427383000e+12F && double_Array_0[0][1][0] >= 1.0e-20F ));
	double_Array_0[1][1][0] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][1][0] >= 0.0F && double_Array_0[1][1][0] <= -1.0e-20F) || (double_Array_0[1][1][0] <= 4611686.018427383000e+12F && double_Array_0[1][1][0] >= 1.0e-20F ));
	double_Array_0[1][0][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[1][0][1] >= -461168.6018427383000e+13F && double_Array_0[1][0][1] <= -1.0e-20F) || (double_Array_0[1][0][1] <= 4611686.018427383000e+12F && double_Array_0[1][0][1] >= 1.0e-20F ));
	double_Array_0[0][1][1] = __VERIFIER_nondet_double();
	assume_abort_if_not((double_Array_0[0][1][1] >= -461168.6018427383000e+13F && double_Array_0[0][1][1] <= -1.0e-20F) || (double_Array_0[0][1][1] <= 4611686.018427383000e+12F && double_Array_0[0][1][1] >= 1.0e-20F ));
	unsigned_short_int_Array_0[0] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[0] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[0] <= 65534);
	unsigned_short_int_Array_0[2] = __VERIFIER_nondet_ushort();
	assume_abort_if_not(unsigned_short_int_Array_0[2] >= 0);
	assume_abort_if_not(unsigned_short_int_Array_0[2] <= 8192);
}



void updateLastVariables(void) {
}

int property(void) {
	return (((((*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var1_Pointer)) && (! (*(BOOL_unsigned_char_Array_0_arrayBOOL_unsigned_char_Array_0Var0_Pointer)))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) == ((double) ((min ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) + 7.5))) : 1) && (((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) > ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) * (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar7_Pointer)) <= (*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer))) ? (((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer))) ? ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) ((*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)) + ((max ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer)) , (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer)))) - (*(double_Array_0_arraydouble_Array_0arrayVar0_Pointer)))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (abs ((*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))))) : ((*(double_Array_0_arraydouble_Array_0arrayVar4_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar6_Pointer)))))) && (((*(double_Array_0_arraydouble_Array_0arrayVar5_Pointer)) > (*(double_Array_0_arraydouble_Array_0arrayVar2_Pointer))) ? ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (((29089 - (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer))) - 8) + 16))) : ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var1_Pointer)) == ((unsigned short int) (min ((*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var2_Pointer)) , (*(unsigned_short_int_Array_0_arrayunsigned_short_int_Array_0Var0_Pointer)))))))) && ((*(double_Array_0_arraydouble_Array_0arrayVar1_Pointer)) == ((double) (*(double_Array_0_arraydouble_Array_0arrayVar3_Pointer))))
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
