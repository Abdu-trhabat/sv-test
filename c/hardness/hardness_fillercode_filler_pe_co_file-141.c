// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch141Filler_PE_CO.c", 13, "reach_error"); }
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
double var_1_1 = 31.4;
unsigned char var_1_2 = 1;
double var_1_3 = 255.2;
double var_1_4 = 31.8;
double var_1_5 = 3.8;
double var_1_6 = 50.8;
double var_1_7 = 64.75;
signed short int var_1_8 = -1;
signed short int var_1_9 = 100;
signed short int var_1_10 = 2;
signed long int var_1_11 = 10000;
unsigned char var_1_12 = 16;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 8;
unsigned char var_1_15 = 50;
double var_1_16 = 3.8;
signed long int var_1_17 = 256;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 1;
signed short int var_1_25 = -256;
unsigned long int var_1_26 = 8;
unsigned long int var_1_27 = 8;
unsigned long int var_1_28 = 128;
unsigned long int var_1_29 = 10;
signed short int var_1_30 = 16;
signed short int var_1_31 = 32;
signed short int var_1_32 = 16;
signed short int var_1_33 = -2;
signed short int var_1_34 = 64;
unsigned long int var_1_35 = 16;
unsigned long int var_1_36 = 4;
float var_1_37 = 31.5;
float var_1_38 = 64.75;
unsigned long int var_1_39 = 25;
float var_1_41 = 100000.4;
unsigned long int var_1_42 = 8;
float var_1_43 = 31.5;
float var_1_44 = 1.75;
float var_1_45 = 128.8;
signed short int var_1_46 = 10000;
signed short int var_1_47 = 25;
unsigned char var_1_48 = 0;
unsigned char var_1_50 = 1;
unsigned char var_1_51 = 0;
unsigned char var_1_52 = 0;
unsigned long int var_1_53 = 200;
unsigned long int var_1_54 = 2;
signed long int var_1_55 = 32;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch141Filler_PE_CO
	/* 33L, 86L, 308L, 342L, 829L, 882L) */ if (/* 2L, 27L, 28L, 309L, 343L, 798L, 883L) */ ((var_1_6) > (var_1_5))) {
		/* 28L, 80L, 312L, 346L, 824L, 886L) */ if (/* 5L, 36L, 37L, 313L, 347L, 801L, 887L) */ ((var_1_3) != (199.5))) {
			/* 27L, 78L, 316L, 350L, 823L, 890L) */ if (/* 11L, 48L, 49L, 317L, 351L, 807L, 891L) */ ((var_1_4) != (/* 10L, 47L, 51L, 319L, 353L, 806L, 893L) */ (max (/* 10L, 47L, 51L, 319L, 353L, 806L, 893L) */ (/* 8L, 45L, 52L, 320L, 354L, 804L, 894L) */ (- (8.5))) , (var_1_6)))))) {
				/* 20L, 70L, 323L, 357L, 816L, 897L) */ if (last_1_var_1_18) {
					/* 19L, 69L, 325L, 359L, 815L, 900L) */ var_1_7 = (
						/* 18L, 68L, 328L, 362L, 814L, 903L) */ ((
							var_1_3
						) - (
							var_1_6
						))
					);
				}
			} else {
				/* 26L, 77L, 331L, 365L, 822L, 906L) */ var_1_7 = (
					/* 25L, 76L, 334L, 368L, 821L, 909L) */ ((
						var_1_3
					) - (
						var_1_5
					))
				);
			}
		}
	} else {
		/* 32L, 85L, 337L, 371L, 828L, 912L) */ var_1_7 = (
			var_1_6
		);
	}


	// From: Req3Batch141Filler_PE_CO
	/* 917L, 107L, 444L, 455L) */ if (/* 918L, 94L, 95L, 445L, 456L) */ ((var_1_5) <= (var_1_7))) {
		/* 921L, 106L, 448L, 459L) */ var_1_8 = (
			/* 924L, 105L, 451L, 462L) */ ((
				var_1_9
			) - (
				var_1_10
			))
		);
	}


	// From: Req7Batch141Filler_PE_CO
	signed long int stepLocal_0 = -10;
	/* 981L, 202L, 632L, 649L) */ if (/* 970L, 181L, 182L, 633L, 650L) */ ((/* 969L, 179L, 183L, 634L, 651L) */ ((var_1_8) | (var_1_15))) < (stepLocal_0))) {
		/* 974L, 195L, 638L, 655L) */ var_1_17 = (
			var_1_9
		);
	} else {
		/* 980L, 201L, 642L, 659L) */ var_1_17 = (
			/* 979L, 200L, 645L, 662L) */ (min (
				/* 979L, 200L, 645L, 662L) */ (
					var_1_10
				) , (
					var_1_15
				)
			))
		);
	}


	// From: Req8Batch141Filler_PE_CO
	/* 986L, 238L, 701L, 725L) */ if (var_1_2) {
		/* 988L, 230L, 703L, 727L) */ if (/* 989L, 213L, 214L, 704L, 728L) */ ((var_1_19) || (var_1_20))) {
			/* 992L, 229L, 707L, 731L) */ var_1_18 = (
				/* 995L, 228L, 710L, 734L) */ ((
					var_1_21
				) || (
					/* 997L, 227L, 712L, 736L) */ ((
						/* 998L, 225L, 713L, 737L) */ ((
							var_1_15
						) < (
							var_1_17
						))
					) && (
						var_1_22
					))
				))
			);
		}
	} else {
		/* 1002L, 237L, 717L, 741L) */ var_1_18 = (
			/* 1005L, 236L, 720L, 744L) */ ((
				var_1_23
			) && (
				var_1_24
			))
		);
	}


	// From: Req1Batch141Filler_PE_CO
	/* 867L, 17L, 245L, 261L) */ if (var_1_18) {
		/* 869L, 16L, 247L, 263L) */ var_1_1 = (
			/* 872L, 15L, 250L, 266L) */ ((
				/* 873L, 13L, 251L, 267L) */ ((
					/* 874L, 9L, 252L, 268L) */ ((
						var_1_3
					) + (
						4.275
					))
				) + (
					/* 877L, 12L, 255L, 271L) */ ((
						var_1_4
					) + (
						var_1_5
					))
				))
			) - (
				var_1_6
			))
		);
	}


	// From: Req4Batch141Filler_PE_CO
	/* 931L, 120L, 491L, 503L) */ var_1_11 = (
		/* 934L, 119L, 494L, 506L) */ (min (
			/* 934L, 119L, 494L, 506L) */ (
				/* 935L, 117L, 495L, 507L) */ ((
					var_1_9
				) - (
					var_1_10
				))
			) , (
				var_1_8
			)
		))
	);


	// From: Req5Batch141Filler_PE_CO
	/* 941L, 138L, 537L, 547L) */ var_1_12 = (
		/* 944L, 137L, 540L, 550L) */ (min (
			/* 944L, 137L, 540L, 550L) */ (
				var_1_13
			) , (
				/* 946L, 136L, 542L, 552L) */ ((
					var_1_14
				) + (
					var_1_15
				))
			)
		))
	);


	// From: Req6Batch141Filler_PE_CO
	/* 951L, 169L, 577L, 591L) */ if (var_1_18) {
		/* 953L, 167L, 579L, 593L) */ if (/* 954L, 152L, 153L, 580L, 594L) */ ((var_1_11) != (/* 956L, 151L, 155L, 582L, 596L) */ ((var_1_8) + (var_1_17))))) {
			/* 959L, 166L, 585L, 599L) */ var_1_16 = (
				var_1_4
			);
		}
	}


	// From: CodeObject1
	/* 326L, 129L) */ if (/* 327L, 80L, 81L) */ ((/* 328L, 76L, 82L) */ (min (/* 328L, 76L, 82L) */ (/* 329L, 74L, 83L) */ (min (/* 329L, 74L, 83L) */ (var_1_26) , (var_1_27)))) , (var_1_28)))) > (/* 333L, 79L, 87L) */ ((128u) ^ (16u))))) {
		/* 336L, 127L) */ if (/* 337L, 104L, 105L) */ ((var_1_26) < (/* 339L, 103L, 107L) */ ((/* 340L, 101L, 108L) */ (~ (var_1_28))) / (var_1_29))))) {
			/* 343L, 126L) */ var_1_25 = (
				/* 346L, 125L) */ (max (
					/* 346L, 125L) */ (
						/* 347L, 123L) */ ((
							var_1_30
						) - (
							/* 349L, 122L) */ (max (
								/* 349L, 122L) */ (
									var_1_31
								) , (
									var_1_32
								)
							))
						))
					) , (
						var_1_33
					)
				))
			);
		}
	}


	// From: CodeObject2
	/* 354L, 144L) */ var_1_34 = (
		var_1_33
	);


	// From: CodeObject3
	/* 359L, 152L) */ var_1_35 = (
		var_1_36
	);


	// From: CodeObject4
	/* 364L, 160L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject5
	/* 369L, 174L) */ if (var_1_18) {
		/* 371L, 173L) */ var_1_39 = (
			/* 374L, 172L) */ (max (
				/* 374L, 172L) */ (
					var_1_36
				) , (
					var_1_32
				)
			))
		);
	}


	// From: CodeObject6
	/* 377L, 205L) */ if (/* 378L, 184L, 185L) */ ((var_1_27) <= (/* 380L, 183L, 187L) */ ((var_1_29) >> (var_1_42))))) {
		/* 383L, 204L) */ var_1_41 = (
			/* 386L, 203L) */ (max (
				/* 386L, 203L) */ (
					/* 387L, 201L) */ (max (
						/* 387L, 201L) */ (
							/* 388L, 199L) */ ((
								var_1_43
							) + (
								var_1_44
							))
						) , (
							var_1_38
						)
					))
				) , (
					var_1_45
				)
			))
		);
	}


	// From: CodeObject7
	/* 393L, 261L) */ if (/* 394L, 215L, 216L) */ ((/* 395L, 211L, 217L) */ ((var_1_31) < (var_1_35))) || (/* 398L, 214L, 220L) */ ((var_1_26) > (var_1_39))))) {
		/* 401L, 259L) */ if (/* 402L, 234L, 235L) */ ((/* 403L, 232L, 236L) */ (abs (/* 404L, 231L, 237L) */ (abs (var_1_17))))) > (var_1_35))) {
			/* 407L, 248L) */ var_1_46 = (
				var_1_32
			);
		} else {
			/* 411L, 258L) */ var_1_46 = (
				/* 414L, 257L) */ (max (
					/* 414L, 257L) */ (
						/* 415L, 255L) */ (abs (
							var_1_47
						))
					) , (
						var_1_30
					)
				))
			);
		}
	}


	// From: CodeObject8
	/* 419L, 294L) */ if (var_1_18) {
		/* 421L, 273L) */ var_1_48 = (
			/* 424L, 272L) */ ((
				var_1_50
			) && (
				var_1_51
			))
		);
	} else {
		/* 427L, 292L) */ if (/* 428L, 276L, 277L) */ ((var_1_35) <= (var_1_47))) {
			/* 431L, 291L) */ var_1_48 = (
				/* 434L, 290L) */ ((
					var_1_51
				) || (
					/* 436L, 289L) */ (! (
						/* 437L, 288L) */ ((
							var_1_18
						) && (
							var_1_52
						))
					))
				))
			);
		}
	}


	// From: CodeObject9
	/* 441L, 303L) */ var_1_53 = (
		var_1_42
	);


	// From: CodeObject10
	/* 446L, 311L) */ var_1_54 = (
		var_1_42
	);


	// From: CodeObject11
	/* 451L, 319L) */ var_1_55 = (
		var_1_42
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 2305843.009213691400e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 2305843.009213691400e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 2305843.009213691400e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 127);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 127);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 1);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 0);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 1);
	assume_abort_if_not(var_1_23 <= 1);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 1);
	assume_abort_if_not(var_1_24 <= 1);
	var_1_26 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 4294967295);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967295);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 4294967295);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967295);
	assume_abort_if_not(var_1_29 != 0);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -1);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_31 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 32766);
	var_1_32 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32766);
	var_1_33 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_33 >= -32767);
	assume_abort_if_not(var_1_33 <= 32766);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 4294967294);
	var_1_38 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 1);
	assume_abort_if_not(var_1_42 <= 31);
	var_1_43 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_44 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 16383);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 1);
	assume_abort_if_not(var_1_50 <= 1);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 1);
	assume_abort_if_not(var_1_51 <= 1);
	var_1_52 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_52 >= 0);
	assume_abort_if_not(var_1_52 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (var_1_18) {
	}
	if (/* 472L, 27L, 31L, 377L, 411L, 833L, 1026L, 37L) */ ((var_1_6) > (var_1_5))) {
		if (/* 476L, 36L, 40L, 381L, 415L, 836L, 1030L, 40L) */ ((var_1_3) != (199.5))) {
			if (/* 480L, 48L, 55L, 385L, 419L, 842L, 1034L, 46L) */ ((var_1_4) != (/* 482L, 47L, 57L, 387L, 421L, 841L, 1036L, 45L) */ (max (/* 482L, 47L, 57L, 387L, 421L, 841L, 1036L, 45L) */ (/* 483L, 45L, 58L, 388L, 422L, 839L, 1037L, 43L) */ (- (8.5))) , (var_1_6)))))) {
				if (last_1_var_1_18) {
				}
			} else {
			}
		}
	} else {
	}
	if (/* 507L, 94L, 98L, 467L, 478L, 1061L) */ ((var_1_5) <= (var_1_7))) {
	}
	if (var_1_18) {
		if (/* 543L, 152L, 158L, 608L, 622L, 1097L) */ ((var_1_11) != (/* 545L, 151L, 160L, 610L, 624L, 1099L) */ ((var_1_8) + (var_1_17))))) {
		}
	}
	if (/* 554L, 181L, 187L, 667L, 684L, 1108L) */ ((/* 555L, 179L, 188L, 668L, 685L, 1109L) */ ((var_1_8) | (var_1_15))) < (-10))) {
	} else {
	}
	if (var_1_2) {
		if (/* 574L, 213L, 217L, 752L, 776L, 1128L) */ ((var_1_19) || (var_1_20))) {
		}
	} else {
	}
	return /* 600L) */ ((
	/* 599L) */ ((
		/* 598L) */ ((
			/* 597L) */ ((
				/* 596L) */ ((
					/* 595L) */ ((
						/* 594L) */ ((
							/* 456L, 18L, 277L, 293L, 1010L) */ ((
								var_1_18
							) ? (
								/* 458L, 16L, 279L, 295L, 1012L) */ ((
									var_1_1
								) == (
									/* 458L, 16L, 279L, 295L, 1012L) */ ((double) (
										/* 461L, 15L, 282L, 298L, 1015L) */ ((
											/* 462L, 13L, 283L, 299L, 1016L) */ ((
												/* 463L, 9L, 284L, 300L, 1017L) */ ((
													var_1_3
												) + (
													4.275
												))
											) + (
												/* 466L, 12L, 287L, 303L, 1020L) */ ((
													var_1_4
												) + (
													var_1_5
												))
											))
										) - (
											var_1_6
										))
									))
								))
							) : (
								1
							))
						) && (
							/* 471L, 87L, 376L, 410L, 864L, 1025L, 68L) */ ((
								/* 472L, 27L, 31L, 377L, 411L, 833L, 1026L, 37L) */ ((
									var_1_6
								) > (
									var_1_5
								))
							) ? (
								/* 475L, 81L, 380L, 414L, 859L, 1029L, 63L) */ ((
									/* 476L, 36L, 40L, 381L, 415L, 836L, 1030L, 40L) */ ((
										var_1_3
									) != (
										199.5
									))
								) ? (
									/* 479L, 79L, 384L, 418L, 858L, 1033L, 62L) */ ((
										/* 480L, 48L, 55L, 385L, 419L, 842L, 1034L, 46L) */ ((
											var_1_4
										) != (
											/* 482L, 47L, 57L, 387L, 421L, 841L, 1036L, 45L) */ (max (
												/* 482L, 47L, 57L, 387L, 421L, 841L, 1036L, 45L) */ (
													/* 483L, 45L, 58L, 388L, 422L, 839L, 1037L, 43L) */ (- (
														8.5
													))
												) , (
													var_1_6
												)
											))
										))
									) ? (
										/* 486L, 71L, 391L, 425L, 851L, 1040L, 55L) */ ((
											last_1_var_1_18
										) ? (
											/* 489L, 69L, 393L, 427L, 850L, 1043L, 54L) */ ((
												var_1_7
											) == (
												/* 489L, 69L, 393L, 427L, 850L, 1043L, 54L) */ ((double) (
													/* 492L, 68L, 396L, 430L, 849L, 1046L, 53L) */ ((
														var_1_3
													) - (
														var_1_6
													))
												))
											))
										) : (
											1
										))
									) : (
										/* 495L, 77L, 399L, 433L, 857L, 1049L, 61L) */ ((
											var_1_7
										) == (
											/* 495L, 77L, 399L, 433L, 857L, 1049L, 61L) */ ((double) (
												/* 498L, 76L, 402L, 436L, 856L, 1052L, 60L) */ ((
													var_1_3
												) - (
													var_1_5
												))
											))
										))
									))
								) : (
									1
								))
							) : (
								/* 501L, 85L, 405L, 439L, 863L, 1055L, 67L) */ ((
									var_1_7
								) == (
									/* 501L, 85L, 405L, 439L, 863L, 1055L, 67L) */ ((double) (
										var_1_6
									))
								))
							))
						))
					) && (
						/* 506L, 108L, 466L, 477L, 1060L) */ ((
							/* 507L, 94L, 98L, 467L, 478L, 1061L) */ ((
								var_1_5
							) <= (
								var_1_7
							))
						) ? (
							/* 510L, 106L, 470L, 481L, 1064L) */ ((
								var_1_8
							) == (
								/* 510L, 106L, 470L, 481L, 1064L) */ ((signed short int) (
									/* 513L, 105L, 473L, 484L, 1067L) */ ((
										var_1_9
									) - (
										var_1_10
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 520L, 120L, 515L, 527L, 1074L) */ ((
						var_1_11
					) == (
						/* 520L, 120L, 515L, 527L, 1074L) */ ((signed long int) (
							/* 523L, 119L, 518L, 530L, 1077L) */ (min (
								/* 523L, 119L, 518L, 530L, 1077L) */ (
									/* 524L, 117L, 519L, 531L, 1078L) */ ((
										var_1_9
									) - (
										var_1_10
									))
								) , (
									var_1_8
								)
							))
						))
					))
				))
			) && (
				/* 530L, 138L, 557L, 567L, 1084L) */ ((
					var_1_12
				) == (
					/* 530L, 138L, 557L, 567L, 1084L) */ ((unsigned char) (
						/* 533L, 137L, 560L, 570L, 1087L) */ (min (
							/* 533L, 137L, 560L, 570L, 1087L) */ (
								var_1_13
							) , (
								/* 535L, 136L, 562L, 572L, 1089L) */ ((
									var_1_14
								) + (
									var_1_15
								))
							)
						))
					))
				))
			))
		) && (
			/* 540L, 170L, 605L, 619L, 1094L) */ ((
				var_1_18
			) ? (
				/* 542L, 168L, 607L, 621L, 1096L) */ ((
					/* 543L, 152L, 158L, 608L, 622L, 1097L) */ ((
						var_1_11
					) != (
						/* 545L, 151L, 160L, 610L, 624L, 1099L) */ ((
							var_1_8
						) + (
							var_1_17
						))
					))
				) ? (
					/* 548L, 166L, 613L, 627L, 1102L) */ ((
						var_1_16
					) == (
						/* 548L, 166L, 613L, 627L, 1102L) */ ((double) (
							var_1_4
						))
					))
				) : (
					1
				))
			) : (
				1
			))
		))
	) && (
		/* 553L, 203L, 666L, 683L, 1107L) */ ((
			/* 554L, 181L, 187L, 667L, 684L, 1108L) */ ((
				/* 555L, 179L, 188L, 668L, 685L, 1109L) */ ((
					var_1_8
				) | (
					var_1_15
				))
			) < (
				-10
			))
		) ? (
			/* 559L, 195L, 672L, 689L, 1113L) */ ((
				var_1_17
			) == (
				/* 559L, 195L, 672L, 689L, 1113L) */ ((signed long int) (
					var_1_9
				))
			))
		) : (
			/* 563L, 201L, 676L, 693L, 1117L) */ ((
				var_1_17
			) == (
				/* 563L, 201L, 676L, 693L, 1117L) */ ((signed long int) (
					/* 566L, 200L, 679L, 696L, 1120L) */ (min (
						/* 566L, 200L, 679L, 696L, 1120L) */ (
							var_1_10
						) , (
							var_1_15
						)
					))
				))
			))
		))
	))
) && (
	/* 571L, 239L, 749L, 773L, 1125L) */ ((
		var_1_2
	) ? (
		/* 573L, 231L, 751L, 775L, 1127L) */ ((
			/* 574L, 213L, 217L, 752L, 776L, 1128L) */ ((
				var_1_19
			) || (
				var_1_20
			))
		) ? (
			/* 577L, 229L, 755L, 779L, 1131L) */ ((
				var_1_18
			) == (
				/* 577L, 229L, 755L, 779L, 1131L) */ ((unsigned char) (
					/* 580L, 228L, 758L, 782L, 1134L) */ ((
						var_1_21
					) || (
						/* 582L, 227L, 760L, 784L, 1136L) */ ((
							/* 583L, 225L, 761L, 785L, 1137L) */ ((
								var_1_15
							) < (
								var_1_17
							))
						) && (
							var_1_22
						))
					))
				))
			))
		) : (
			1
		))
	) : (
		/* 587L, 237L, 765L, 789L, 1141L) */ ((
			var_1_18
		) == (
			/* 587L, 237L, 765L, 789L, 1141L) */ ((unsigned char) (
				/* 590L, 236L, 768L, 792L, 1144L) */ ((
					var_1_23
				) && (
					var_1_24
				))
			))
		))
	))
))
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
