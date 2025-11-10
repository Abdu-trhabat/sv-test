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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch96Filler_PE_CO.c", 13, "reach_error"); }
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
unsigned long int var_1_2 = 500;
unsigned long int var_1_3 = 10;
unsigned char var_1_4 = 0;
unsigned char var_1_5 = 1;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed char var_1_8 = -10;
unsigned short int var_1_9 = 4;
signed char var_1_10 = 8;
unsigned short int var_1_11 = 32;
unsigned short int var_1_12 = 64314;
unsigned short int var_1_13 = 26169;
unsigned short int var_1_14 = 10;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 256;
signed char var_1_17 = 50;
signed char var_1_18 = 16;
signed char var_1_19 = 5;
signed char var_1_20 = 0;
signed char var_1_21 = 50;
signed char var_1_22 = 16;
unsigned char var_1_23 = 16;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
double var_1_27 = 0.25;
double var_1_28 = 10.25;
double var_1_29 = 1000.25;
double var_1_30 = 9.5;
float var_1_31 = 63.5;
unsigned short int var_1_32 = 16;
unsigned long int var_1_33 = 500;
unsigned long int var_1_34 = 10;
signed char var_1_35 = 1;
unsigned short int var_1_37 = 16;
unsigned short int var_1_38 = 10;
unsigned short int var_1_39 = 64;
unsigned char var_1_40 = 1;
signed char var_1_41 = 25;
signed char var_1_42 = 32;
unsigned char var_1_43 = 0;
unsigned char var_1_44 = 0;
signed long int var_1_45 = 100000000;
signed long int var_1_46 = 50;
unsigned char var_1_47 = 4;
unsigned char var_1_48 = 100;
unsigned char var_1_49 = 10;
unsigned char var_1_50 = 2;
unsigned char var_1_51 = 2;
unsigned char var_1_52 = 1;
signed short int var_1_53 = -64;
signed char var_1_54 = 1;
unsigned short int var_1_55 = 32;
float var_1_56 = 5.4;
float var_1_57 = 10.2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch96Filler_PE_CO
	/* 849L, 56L, 297L, 327L) */ if (/* 850L, 4L, 5L, 298L, 328L) */ ((var_1_2) < (var_1_3))) {
		/* 853L, 50L, 301L, 331L) */ if (/* 854L, 13L, 14L, 302L, 332L) */ ((var_1_4) && (var_1_5))) {
			/* 857L, 44L, 305L, 335L) */ if (var_1_4) {
				/* 859L, 42L, 307L, 337L) */ if (/* 860L, 27L, 28L, 308L, 338L) */ ((var_1_5) && (/* 862L, 26L, 30L, 310L, 340L) */ ((var_1_6) || (var_1_7))))) {
					/* 865L, 41L, 313L, 343L) */ var_1_1 = (
						-5
					);
				}
			}
		} else {
			/* 869L, 49L, 317L, 347L) */ var_1_1 = (
				var_1_8
			);
		}
	} else {
		/* 873L, 55L, 321L, 351L) */ var_1_1 = (
			var_1_8
		);
	}


	// From: Req3Batch96Filler_PE_CO
	/* 919L, 126L, 555L, 571L) */ var_1_17 = (
		/* 922L, 125L, 558L, 574L) */ ((
			/* 923L, 119L, 559L, 575L) */ (min (
				/* 923L, 119L, 559L, 575L) */ (
					var_1_18
				) , (
					var_1_19
				)
			))
		) - (
			/* 926L, 124L, 562L, 578L) */ ((
				var_1_20
			) + (
				/* 928L, 123L, 564L, 580L) */ ((
					var_1_21
				) - (
					var_1_22
				))
			))
		))
	);


	// From: Req5Batch96Filler_PE_CO
	/* 945L, 185L, 668L, 686L) */ if (var_1_4) {
		/* 947L, 174L, 670L, 688L) */ var_1_24 = (
			/* 950L, 173L, 673L, 691L) */ (! (
				var_1_25
			))
		);
	} else {
		/* 952L, 184L, 675L, 693L) */ var_1_24 = (
			/* 955L, 183L, 678L, 696L) */ ((
				var_1_6
			) && (
				/* 957L, 182L, 680L, 698L) */ ((
					/* 958L, 180L, 681L, 699L) */ ((
						var_1_10
					) >= (
						var_1_17
					))
				) && (
					var_1_25
				))
			))
		);
	}


	// From: Req7Batch96Filler_PE_CO
	/* 985L, 231L, 825L, 831L) */ var_1_31 = (
		var_1_30
	);


	// From: Req2Batch96Filler_PE_CO
	signed char stepLocal_0 = var_1_17;
	/* 912L, 109L, 416L, 450L) */ if (/* 884L, 68L, 69L, 417L, 451L) */ ((stepLocal_0) < (/* 883L, 67L, 71L, 419L, 453L) */ ((-1) - (var_1_10))))) {
		/* 907L, 103L, 422L, 456L) */ if (var_1_24) {
			/* 892L, 88L, 424L, 458L) */ var_1_9 = (
				/* 891L, 87L, 427L, 461L) */ ((
					var_1_10
				) + (
					/* 890L, 86L, 429L, 463L) */ (abs (
						var_1_11
					))
				))
			);
		} else {
			/* 906L, 102L, 431L, 465L) */ var_1_9 = (
				/* 905L, 101L, 434L, 468L) */ ((
					/* 897L, 93L, 435L, 469L) */ ((
						var_1_12
					) - (
						var_1_10
					))
				) - (
					/* 904L, 100L, 438L, 472L) */ ((
						/* 900L, 96L, 439L, 473L) */ ((
							var_1_13
						) - (
							var_1_14
						))
					) - (
						/* 903L, 99L, 442L, 476L) */ (min (
							/* 903L, 99L, 442L, 476L) */ (
								var_1_15
							) , (
								var_1_16
							)
						))
					))
				))
			);
		}
	} else {
		/* 911L, 108L, 445L, 479L) */ var_1_9 = (
			var_1_13
		);
	}


	// From: Req4Batch96Filler_PE_CO
	/* 933L, 159L, 617L, 630L) */ if (/* 934L, 142L, 143L, 618L, 631L) */ ((/* 935L, 138L, 144L, 619L, 632L) */ (- (var_1_9))) < (/* 937L, 141L, 146L, 621L, 634L) */ ((var_1_2) + (-500))))) {
		/* 940L, 158L, 624L, 637L) */ var_1_23 = (
			var_1_20
		);
	}


	// From: Req6Batch96Filler_PE_CO
	/* 965L, 218L, 742L, 763L) */ if (/* 966L, 195L, 196L, 743L, 764L) */ ((var_1_9) < (/* 968L, 194L, 198L, 745L, 766L) */ ((var_1_21) + (var_1_14))))) {
		/* 971L, 213L, 748L, 769L) */ var_1_27 = (
			/* 974L, 212L, 751L, 772L) */ ((
				/* 975L, 210L, 752L, 773L) */ ((
					var_1_28
				) + (
					var_1_29
				))
			) + (
				var_1_30
			))
		);
	} else {
		/* 979L, 217L, 756L, 777L) */ var_1_27 = (
			var_1_28
		);
	}


	// From: CodeObject1
	/* 257L, 50L) */ if (/* 258L, 12L, 13L) */ ((/* 259L, 10L, 14L) */ ((var_1_34) <= (var_1_33))) || (var_1_24))) {
		/* 263L, 48L) */ if (/* 264L, 26L, 27L) */ ((/* 265L, 24L, 28L) */ (abs (5))) < (var_1_34))) {
			/* 268L, 46L) */ if (var_1_24) {
				/* 270L, 45L) */ var_1_32 = (
					/* 273L, 44L) */ (max (
						/* 273L, 44L) */ (
							/* 274L, 42L) */ (min (
								/* 274L, 42L) */ (
									var_1_37
								) , (
									var_1_38
								)
							))
						) , (
							var_1_39
						)
					))
				);
			}
		}
	}


	// From: CodeObject2
	/* 279L, 130L) */ if (/* 280L, 57L, 58L) */ ((/* 281L, 55L, 59L) */ (abs (4))) >= (var_1_37))) {
		/* 284L, 128L) */ if (/* 285L, 75L, 76L) */ ((/* 286L, 71L, 77L) */ ((/* 287L, 67L, 78L) */ (abs (var_1_41))) % (/* 289L, 70L, 80L) */ (min (/* 289L, 70L, 80L) */ (var_1_35) , (var_1_42)))))) <= (/* 292L, 74L, 83L) */ ((var_1_39) ^ (var_1_37))))) {
			/* 295L, 126L) */ if (/* 296L, 101L, 102L) */ ((/* 297L, 99L, 103L) */ (min (/* 297L, 99L, 103L) */ (/* 298L, 97L, 104L) */ (abs (var_1_41))) , (var_1_42)))) < (var_1_38))) {
				/* 302L, 117L) */ var_1_40 = (
					var_1_43
				);
			} else {
				/* 306L, 125L) */ var_1_40 = (
					var_1_44
				);
			}
		}
	}


	// From: CodeObject3
	/* 310L, 153L) */ if (/* 311L, 138L, 139L) */ ((-16) <= (var_1_46))) {
		/* 314L, 152L) */ var_1_45 = (
			/* 317L, 151L) */ (min (
				/* 317L, 151L) */ (
					/* 318L, 148L) */ (abs (
						var_1_9
					))
				) , (
					/* 320L, 150L) */ (abs (
						var_1_35
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 322L, 179L) */ if (/* 323L, 160L, 161L) */ ((/* 324L, 158L, 162L) */ (- (var_1_33))) <= (5u))) {
		/* 327L, 178L) */ var_1_47 = (
			/* 330L, 177L) */ ((
				/* 331L, 173L) */ ((
					var_1_48
				) - (
					var_1_49
				))
			) + (
				/* 334L, 176L) */ ((
					var_1_50
				) + (
					var_1_51
				))
			))
		);
	}


	// From: CodeObject5
	/* 338L, 186L) */ var_1_52 = (
		var_1_43
	);


	// From: CodeObject6
	/* 343L, 237L) */ if (/* 344L, 194L, 195L) */ (! (/* 345L, 193L, 196L) */ ((var_1_44) || (var_1_24))))) {
		/* 348L, 235L) */ if (/* 349L, 207L, 208L) */ ((/* 350L, 205L, 209L) */ ((var_1_49) >> (var_1_54))) == (var_1_50))) {
			/* 354L, 221L) */ var_1_53 = (
				var_1_41
			);
		} else {
			/* 358L, 233L) */ if (var_1_24) {
				/* 360L, 232L) */ var_1_53 = (
					var_1_50
				);
			}
		}
	}


	// From: CodeObject7
	/* 365L, 246L) */ var_1_55 = (
		var_1_51
	);


	// From: CodeObject8
	/* 370L, 254L) */ var_1_56 = (
		var_1_57
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1);
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_8 >= -127);
	assume_abort_if_not(var_1_8 <= 126);
	var_1_10 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 127);
	var_1_11 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32767);
	var_1_12 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_12 >= 49150);
	assume_abort_if_not(var_1_12 <= 65534);
	var_1_13 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_13 >= 24575);
	assume_abort_if_not(var_1_13 <= 32767);
	var_1_14 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 8192);
	var_1_15 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 16383);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= -1);
	assume_abort_if_not(var_1_18 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 126);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 31);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 31);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -230584.3009213691400e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 2305843.009213691400e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -461168.6018427383000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 4294967295);
	var_1_35 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_35 >= -128);
	assume_abort_if_not(var_1_35 <= 127);
	assume_abort_if_not(var_1_35 != 0);
	var_1_37 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 65534);
	var_1_38 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 65534);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -127);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_42 >= -128);
	assume_abort_if_not(var_1_42 <= 127);
	assume_abort_if_not(var_1_42 != 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 0);
	var_1_46 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_46 >= -2147483648);
	assume_abort_if_not(var_1_46 <= 2147483647);
	var_1_48 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_48 >= 63);
	assume_abort_if_not(var_1_48 <= 127);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 63);
	var_1_50 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_50 >= 0);
	assume_abort_if_not(var_1_50 <= 64);
	var_1_51 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_51 >= 0);
	assume_abort_if_not(var_1_51 <= 63);
	var_1_54 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_54 >= 1);
	assume_abort_if_not(var_1_54 <= 7);
	var_1_57 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_57 >= -922337.2036854766000e+13F && var_1_57 <= -1.0e-20F) || (var_1_57 <= 9223372.036854766000e+12F && var_1_57 >= 1.0e-20F ));
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 376L, 4L, 8L, 358L, 388L, 992L) */ ((var_1_2) < (var_1_3))) {
		if (/* 380L, 13L, 17L, 362L, 392L, 996L) */ ((var_1_4) && (var_1_5))) {
			if (var_1_4) {
				if (/* 386L, 27L, 33L, 368L, 398L, 1002L) */ ((var_1_5) && (/* 388L, 26L, 35L, 370L, 400L, 1004L) */ ((var_1_6) || (var_1_7))))) {
				}
			}
		} else {
		}
	} else {
	}
	if (/* 405L, 68L, 74L, 485L, 519L, 1021L) */ ((var_1_17) < (/* 407L, 67L, 76L, 487L, 521L, 1023L) */ ((-1) - (var_1_10))))) {
		if (var_1_24) {
		} else {
		}
	} else {
	}
	if (/* 456L, 142L, 149L, 644L, 657L, 1072L) */ ((/* 457L, 138L, 150L, 645L, 658L, 1073L) */ (- (var_1_9))) < (/* 459L, 141L, 152L, 647L, 660L, 1075L) */ ((var_1_2) + (-500))))) {
	}
	if (var_1_4) {
	} else {
	}
	if (/* 488L, 195L, 201L, 785L, 806L, 1104L) */ ((var_1_9) < (/* 490L, 194L, 203L, 787L, 808L, 1106L) */ ((var_1_21) + (var_1_14))))) {
	} else {
	}
	return /* 517L) */ ((
	/* 516L) */ ((
		/* 515L) */ ((
			/* 514L) */ ((
				/* 513L) */ ((
					/* 512L) */ ((
						/* 375L, 57L, 357L, 387L, 991L) */ ((
							/* 376L, 4L, 8L, 358L, 388L, 992L) */ ((
								var_1_2
							) < (
								var_1_3
							))
						) ? (
							/* 379L, 51L, 361L, 391L, 995L) */ ((
								/* 380L, 13L, 17L, 362L, 392L, 996L) */ ((
									var_1_4
								) && (
									var_1_5
								))
							) ? (
								/* 383L, 45L, 365L, 395L, 999L) */ ((
									var_1_4
								) ? (
									/* 385L, 43L, 367L, 397L, 1001L) */ ((
										/* 386L, 27L, 33L, 368L, 398L, 1002L) */ ((
											var_1_5
										) && (
											/* 388L, 26L, 35L, 370L, 400L, 1004L) */ ((
												var_1_6
											) || (
												var_1_7
											))
										))
									) ? (
										/* 391L, 41L, 373L, 403L, 1007L) */ ((
											var_1_1
										) == (
											/* 391L, 41L, 373L, 403L, 1007L) */ ((signed char) (
												-5
											))
										))
									) : (
										1
									))
								) : (
									1
								))
							) : (
								/* 395L, 49L, 377L, 407L, 1011L) */ ((
									var_1_1
								) == (
									/* 395L, 49L, 377L, 407L, 1011L) */ ((signed char) (
										var_1_8
									))
								))
							))
						) : (
							/* 399L, 55L, 381L, 411L, 1015L) */ ((
								var_1_1
							) == (
								/* 399L, 55L, 381L, 411L, 1015L) */ ((signed char) (
									var_1_8
								))
							))
						))
					) && (
						/* 404L, 110L, 484L, 518L, 1020L) */ ((
							/* 405L, 68L, 74L, 485L, 519L, 1021L) */ ((
								var_1_17
							) < (
								/* 407L, 67L, 76L, 487L, 521L, 1023L) */ ((
									-1
								) - (
									var_1_10
								))
							))
						) ? (
							/* 410L, 104L, 490L, 524L, 1026L) */ ((
								var_1_24
							) ? (
								/* 412L, 88L, 492L, 526L, 1028L) */ ((
									var_1_9
								) == (
									/* 412L, 88L, 492L, 526L, 1028L) */ ((unsigned short int) (
										/* 415L, 87L, 495L, 529L, 1031L) */ ((
											var_1_10
										) + (
											/* 417L, 86L, 497L, 531L, 1033L) */ (abs (
												var_1_11
											))
										))
									))
								))
							) : (
								/* 419L, 102L, 499L, 533L, 1035L) */ ((
									var_1_9
								) == (
									/* 419L, 102L, 499L, 533L, 1035L) */ ((unsigned short int) (
										/* 422L, 101L, 502L, 536L, 1038L) */ ((
											/* 423L, 93L, 503L, 537L, 1039L) */ ((
												var_1_12
											) - (
												var_1_10
											))
										) - (
											/* 426L, 100L, 506L, 540L, 1042L) */ ((
												/* 427L, 96L, 507L, 541L, 1043L) */ ((
													var_1_13
												) - (
													var_1_14
												))
											) - (
												/* 430L, 99L, 510L, 544L, 1046L) */ (min (
													/* 430L, 99L, 510L, 544L, 1046L) */ (
														var_1_15
													) , (
														var_1_16
													)
												))
											))
										))
									))
								))
							))
						) : (
							/* 433L, 108L, 513L, 547L, 1049L) */ ((
								var_1_9
							) == (
								/* 433L, 108L, 513L, 547L, 1049L) */ ((unsigned short int) (
									var_1_13
								))
							))
						))
					))
				) && (
					/* 441L, 126L, 587L, 603L, 1057L) */ ((
						var_1_17
					) == (
						/* 441L, 126L, 587L, 603L, 1057L) */ ((signed char) (
							/* 444L, 125L, 590L, 606L, 1060L) */ ((
								/* 445L, 119L, 591L, 607L, 1061L) */ (min (
									/* 445L, 119L, 591L, 607L, 1061L) */ (
										var_1_18
									) , (
										var_1_19
									)
								))
							) - (
								/* 448L, 124L, 594L, 610L, 1064L) */ ((
									var_1_20
								) + (
									/* 450L, 123L, 596L, 612L, 1066L) */ ((
										var_1_21
									) - (
										var_1_22
									))
								))
							))
						))
					))
				))
			) && (
				/* 455L, 160L, 643L, 656L, 1071L) */ ((
					/* 456L, 142L, 149L, 644L, 657L, 1072L) */ ((
						/* 457L, 138L, 150L, 645L, 658L, 1073L) */ (- (
							var_1_9
						))
					) < (
						/* 459L, 141L, 152L, 647L, 660L, 1075L) */ ((
							var_1_2
						) + (
							-500
						))
					))
				) ? (
					/* 462L, 158L, 650L, 663L, 1078L) */ ((
						var_1_23
					) == (
						/* 462L, 158L, 650L, 663L, 1078L) */ ((unsigned char) (
							var_1_20
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 467L, 186L, 704L, 722L, 1083L) */ ((
				var_1_4
			) ? (
				/* 469L, 174L, 706L, 724L, 1085L) */ ((
					var_1_24
				) == (
					/* 469L, 174L, 706L, 724L, 1085L) */ ((unsigned char) (
						/* 472L, 173L, 709L, 727L, 1088L) */ (! (
							var_1_25
						))
					))
				))
			) : (
				/* 474L, 184L, 711L, 729L, 1090L) */ ((
					var_1_24
				) == (
					/* 474L, 184L, 711L, 729L, 1090L) */ ((unsigned char) (
						/* 477L, 183L, 714L, 732L, 1093L) */ ((
							var_1_6
						) && (
							/* 479L, 182L, 716L, 734L, 1095L) */ ((
								/* 480L, 180L, 717L, 735L, 1096L) */ ((
									var_1_10
								) >= (
									var_1_17
								))
							) && (
								var_1_25
							))
						))
					))
				))
			))
		))
	) && (
		/* 487L, 219L, 784L, 805L, 1103L) */ ((
			/* 488L, 195L, 201L, 785L, 806L, 1104L) */ ((
				var_1_9
			) < (
				/* 490L, 194L, 203L, 787L, 808L, 1106L) */ ((
					var_1_21
				) + (
					var_1_14
				))
			))
		) ? (
			/* 493L, 213L, 790L, 811L, 1109L) */ ((
				var_1_27
			) == (
				/* 493L, 213L, 790L, 811L, 1109L) */ ((double) (
					/* 496L, 212L, 793L, 814L, 1112L) */ ((
						/* 497L, 210L, 794L, 815L, 1113L) */ ((
							var_1_28
						) + (
							var_1_29
						))
					) + (
						var_1_30
					))
				))
			))
		) : (
			/* 501L, 217L, 798L, 819L, 1117L) */ ((
				var_1_27
			) == (
				/* 501L, 217L, 798L, 819L, 1117L) */ ((double) (
					var_1_28
				))
			))
		))
	))
) && (
	/* 507L, 231L, 837L, 843L, 1123L) */ ((
		var_1_31
	) == (
		/* 507L, 231L, 837L, 843L, 1123L) */ ((float) (
			var_1_30
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
