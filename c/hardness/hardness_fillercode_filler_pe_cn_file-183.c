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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch183Filler_PE_CN.c", 13, "reach_error"); }
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
signed char var_1_1 = -64;
unsigned char var_1_2 = 0;
signed char var_1_3 = 8;
signed char var_1_4 = -32;
signed long int var_1_5 = -8;
signed short int var_1_6 = 200;
float var_1_7 = 0.25;
float var_1_8 = 8.5;
float var_1_9 = 25.75;
signed short int var_1_10 = 0;
signed short int var_1_11 = 256;
signed short int var_1_12 = 5;
signed short int var_1_13 = 25;
signed short int var_1_14 = 1;
signed short int var_1_15 = 0;
unsigned short int var_1_16 = 32;
unsigned char var_1_17 = 100;
unsigned char var_1_18 = 25;
unsigned char var_1_19 = 32;
signed char var_1_20 = 100;
signed long int var_1_21 = 8;
signed char var_1_22 = 2;
signed char var_1_23 = 4;
unsigned char var_1_24 = 128;
float var_1_25 = 63.625;
float var_1_26 = 10.625;
unsigned char var_1_27 = 0;
double var_1_28 = 0.25;
double var_1_29 = 25.5;
double var_1_30 = 10.25;
signed long int var_1_31 = 25;
signed long int var_1_32 = 2;
double var_1_33 = 1.9;
double var_1_34 = 199.125;
double var_1_35 = 255.625;
double var_1_36 = 127.875;
unsigned long int var_1_37 = 32;
unsigned long int var_1_38 = 64;
float var_1_39 = 1.8;
unsigned char var_1_40 = 2;
unsigned long int var_1_41 = 5;
unsigned long int var_1_42 = 128;
unsigned short int var_1_43 = 100;
unsigned char var_1_44 = 0;
unsigned short int var_1_45 = 16;
unsigned char var_1_46 = 10;
unsigned long int var_1_47 = 2289826039;
unsigned long int var_1_48 = 128;
unsigned char var_1_49 = 200;

// Calibration values

// Last'ed variables
signed char last_1_var_1_20 = 100;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch183Filler_PE_CN
	signed char stepLocal_1 = var_1_4;
	signed long int stepLocal_0 = last_1_var_1_20;
	/* 21L, 46L, 276L, 289L, 754L, 801L) */ if (/* 10L, 24L, 25L, 277L, 290L, 743L, 791L) */ ((stepLocal_0) > (var_1_3))) {
		/* 20L, 44L, 280L, 293L, 753L, 800L) */ if (/* 14L, 33L, 34L, 281L, 294L, 747L, 794L) */ ((stepLocal_1) > (last_1_var_1_20))) {
			/* 19L, 43L, 284L, 297L, 752L, 799L) */ var_1_5 = (
				last_1_var_1_20
			);
		}
	}


	// From: Req6Batch183Filler_PE_CN
	signed long int stepLocal_2 = /* 858L, 142L, 146L, 535L, 554L) */ ((/* 859L, 140L, 147L, 536L, 555L) */ ((var_1_14) - (var_1_13))) / (var_1_21));
	/* 876L, 168L, 532L, 551L) */ if (/* 865L, 143L, 144L, 533L, 552L) */ ((var_1_5) <= (stepLocal_2))) {
		/* 875L, 167L, 540L, 559L) */ var_1_20 = (
			/* 874L, 166L, 543L, 562L) */ (max (
				/* 874L, 166L, 543L, 562L) */ (
					/* 872L, 164L, 544L, 563L) */ ((
						/* 870L, 162L, 545L, 564L) */ ((
							var_1_22
						) - (
							var_1_23
						))
					) + (
						var_1_4
					))
				) , (
					var_1_3
				)
			))
		);
	}


	// From: Req1Batch183Filler_PE_CN
	/* 773L, 14L, 233L, 244L) */ if (/* 774L, 3L, 4L, 234L, 245L) */ (! (var_1_2))) {
		/* 776L, 13L, 236L, 247L) */ var_1_1 = (
			/* 779L, 12L, 239L, 250L) */ ((
				var_1_3
			) + (
				var_1_4
			))
		);
	}


	// From: Req3Batch183Filler_PE_CN
	/* 806L, 87L, 328L, 355L) */ if (/* 807L, 56L, 57L, 329L, 356L) */ ((/* 808L, 54L, 58L, 330L, 357L) */ (max (/* 808L, 54L, 58L, 330L, 357L) */ (var_1_7) , (var_1_8)))) <= (var_1_9))) {
		/* 812L, 74L, 334L, 361L) */ var_1_6 = (
			/* 815L, 73L, 337L, 364L) */ (min (
				/* 815L, 73L, 337L, 364L) */ (
					/* 816L, 71L, 338L, 365L) */ ((
						var_1_10
					) - (
						var_1_11
					))
				) , (
					var_1_3
				)
			))
		);
	} else {
		/* 820L, 86L, 342L, 369L) */ var_1_6 = (
			/* 823L, 85L, 345L, 372L) */ ((
				/* 824L, 83L, 346L, 373L) */ ((
					/* 825L, 79L, 347L, 374L) */ (min (
						/* 825L, 79L, 347L, 374L) */ (
							var_1_12
						) , (
							var_1_13
						)
					))
				) + (
					/* 828L, 82L, 350L, 377L) */ (min (
						/* 828L, 82L, 350L, 377L) */ (
							var_1_14
						) , (
							var_1_15
						)
					))
				))
			) - (
				256
			))
		);
	}


	// From: Req4Batch183Filler_PE_CN
	/* 833L, 116L, 436L, 451L) */ if (/* 834L, 97L, 98L, 437L, 452L) */ ((/* 835L, 95L, 99L, 438L, 453L) */ ((var_1_8) * (var_1_9))) <= (var_1_7))) {
		/* 839L, 115L, 442L, 457L) */ var_1_16 = (
			/* 842L, 114L, 445L, 460L) */ (min (
				/* 842L, 114L, 445L, 460L) */ (
					/* 843L, 112L, 446L, 461L) */ ((
						var_1_15
					) + (
						1
					))
				) , (
					var_1_12
				)
			))
		);
	}


	// From: Req5Batch183Filler_PE_CN
	/* 848L, 131L, 496L, 505L) */ if (var_1_2) {
		/* 850L, 130L, 498L, 507L) */ var_1_17 = (
			/* 853L, 129L, 501L, 510L) */ (min (
				/* 853L, 129L, 501L, 510L) */ (
					var_1_18
				) , (
					var_1_19
				)
			))
		);
	}


	// From: Req7Batch183Filler_PE_CN
	/* 881L, 226L, 609L, 642L) */ if (var_1_2) {
		/* 883L, 215L, 611L, 644L) */ if (/* 884L, 184L, 185L, 612L, 645L) */ ((/* 885L, 178L, 186L, 613L, 646L) */ (- (var_1_7))) <= (/* 887L, 183L, 188L, 615L, 648L) */ (min (/* 887L, 183L, 188L, 615L, 648L) */ (/* 888L, 181L, 189L, 616L, 649L) */ ((var_1_25) - (var_1_26))) , (var_1_9)))))) {
			/* 892L, 210L, 620L, 653L) */ var_1_24 = (
				/* 895L, 209L, 623L, 656L) */ (min (
					/* 895L, 209L, 623L, 656L) */ (
						var_1_19
					) , (
						/* 897L, 208L, 625L, 658L) */ (max (
							/* 897L, 208L, 625L, 658L) */ (
								/* 898L, 206L, 626L, 659L) */ ((
									var_1_22
								) + (
									var_1_23
								))
							) , (
								var_1_18
							)
						))
					)
				))
			);
		} else {
			/* 902L, 214L, 630L, 663L) */ var_1_24 = (
				0
			);
		}
	} else {
		/* 906L, 224L, 634L, 667L) */ if (var_1_27) {
			/* 908L, 223L, 636L, 669L) */ var_1_24 = (
				var_1_23
			);
		}
	}


	// From: CodeObject1
	/* 45L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject2
	/* 96L) */ if (/* 57L, 56L) */ ((/* 58L, 52L) */ ((var_1_29) >= (var_1_28))) || (/* 61L, 55L) */ ((var_1_31) < (var_1_32))))) {
		/* 94L) */ if (/* 74L, 73L) */ ((var_1_31) <= (var_1_32))) {
			/* 89L) */ var_1_30 = (
				/* 88L) */ (min (
					/* 88L) */ (
						/* 86L) */ ((
							var_1_33
						) + (
							/* 85L) */ ((
								var_1_34
							) + (
								var_1_35
							))
						))
					) , (
						var_1_29
					)
				))
			);
		} else {
			/* 93L) */ var_1_30 = (
				var_1_36
			);
		}
	}


	// From: CodeObject3
	/* 103L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject4
	/* 128L) */ if (/* 113L, 112L) */ ((/* 114L, 110L) */ ((var_1_38) & (var_1_40))) > (var_1_31))) {
		/* 127L) */ var_1_39 = (
			/* 126L) */ (abs (
				var_1_29
			))
		);
	}


	// From: CodeObject5
	/* 151L) */ if (/* 137L, 136L) */ ((var_1_35) < (var_1_29))) {
		/* 150L) */ var_1_41 = (
			/* 149L) */ ((
				/* 147L) */ ((
					var_1_40
				) + (
					var_1_42
				))
			) + (
				256u
			))
		);
	}


	// From: CodeObject6
	/* 225L) */ if (/* 160L, 159L) */ ((var_1_35) < (var_1_29))) {
		/* 189L) */ if (/* 171L, 170L) */ ((var_1_44) || (/* 173L, 169L) */ ((var_1_36) == (var_1_29))))) {
			/* 188L) */ var_1_43 = (
				/* 187L) */ (abs (
					/* 186L) */ ((
						/* 184L) */ (abs (
							var_1_40
						))
					) + (
						var_1_45
					))
				))
			);
		}
	} else {
		/* 223L) */ if (/* 195L, 194L) */ (! (/* 196L, 193L) */ ((var_1_37) < (var_1_40))))) {
			/* 206L) */ var_1_43 = (
				10
			);
		} else {
			/* 221L) */ if (/* 210L, 209L) */ ((var_1_39) < (var_1_36))) {
				/* 220L) */ var_1_43 = (
					/* 219L) */ (abs (
						5
					))
				);
			}
		}
	}


	// From: CodeObject7
	/* 284L) */ if (/* 232L, 231L) */ ((var_1_32) <= (var_1_42))) {
		/* 278L) */ if (/* 241L, 240L) */ ((var_1_29) < (var_1_36))) {
			/* 250L) */ var_1_46 = (
				4
			);
		} else {
			/* 276L) */ if (/* 258L, 257L) */ ((/* 259L, 255L) */ ((var_1_43) % (/* 261L, 254L) */ ((var_1_47) - (var_1_48))))) >= (var_1_31))) {
				/* 275L) */ var_1_46 = (
					64
				);
			}
		}
	} else {
		/* 283L) */ var_1_46 = (
			var_1_49
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_3 >= -63);
	assume_abort_if_not(var_1_3 <= 63);
	var_1_4 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_4 >= -63);
	assume_abort_if_not(var_1_4 <= 63);
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= -1);
	assume_abort_if_not(var_1_10 <= 32766);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 32766);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 16383);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 16383);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 254);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 254);
	var_1_21 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_21 >= -2147483648);
	assume_abort_if_not(var_1_21 <= 2147483647);
	assume_abort_if_not(var_1_21 != 0);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 63);
	var_1_23 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 63);
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_32 >= -2147483648);
	assume_abort_if_not(var_1_32 <= 2147483647);
	var_1_33 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_33 >= -461168.6018427383000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 4611686.018427383000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_34 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 4294967294);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 255);
	var_1_42 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1073741823);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 1);
	var_1_45 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_45 >= 0);
	assume_abort_if_not(var_1_45 <= 32767);
	var_1_47 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_47 >= 2147483647);
	assume_abort_if_not(var_1_47 <= 4294967295);
	var_1_48 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_48 >= 1);
	assume_abort_if_not(var_1_48 <= 2147483646);
	assume_abort_if_not(var_1_48 != 2147483647);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_20 = var_1_20;
}

int property(void) {
	if (/* 288L, 3L, 6L, 256L, 267L, 915L) */ (! (var_1_2))) {
	}
	if (/* 298L, 24L, 28L, 303L, 316L, 759L, 925L, 27L) */ ((last_1_var_1_20) > (var_1_3))) {
		if (/* 303L, 33L, 37L, 307L, 320L, 763L, 930L, 31L) */ ((var_1_4) > (last_1_var_1_20))) {
		}
	}
	if (/* 314L, 56L, 62L, 383L, 410L, 941L) */ ((/* 315L, 54L, 63L, 384L, 411L, 942L) */ (max (/* 315L, 54L, 63L, 384L, 411L, 942L) */ (var_1_7) , (var_1_8)))) <= (var_1_9))) {
	} else {
	}
	if (/* 341L, 97L, 103L, 467L, 482L, 968L) */ ((/* 342L, 95L, 104L, 468L, 483L, 969L) */ ((var_1_8) * (var_1_9))) <= (var_1_7))) {
	}
	if (var_1_2) {
	}
	if (/* 365L, 143L, 151L, 571L, 590L, 992L) */ ((var_1_5) <= (/* 367L, 142L, 153L, 573L, 592L, 994L) */ ((/* 368L, 140L, 154L, 574L, 593L, 995L) */ ((var_1_14) - (var_1_13))) / (var_1_21))))) {
	}
	if (var_1_2) {
		if (/* 387L, 184L, 193L, 678L, 711L, 1014L) */ ((/* 388L, 178L, 194L, 679L, 712L, 1015L) */ (- (var_1_7))) <= (/* 390L, 183L, 196L, 681L, 714L, 1017L) */ (min (/* 390L, 183L, 196L, 681L, 714L, 1017L) */ (/* 391L, 181L, 197L, 682L, 715L, 1018L) */ ((var_1_25) - (var_1_26))) , (var_1_9)))))) {
		} else {
		}
	} else {
		if (var_1_27) {
		}
	}
	return /* 421L) */ ((
	/* 420L) */ ((
		/* 419L) */ ((
			/* 418L) */ ((
				/* 417L) */ ((
					/* 416L) */ ((
						/* 287L, 15L, 255L, 266L, 914L) */ ((
							/* 288L, 3L, 6L, 256L, 267L, 915L) */ (! (
								var_1_2
							))
						) ? (
							/* 290L, 13L, 258L, 269L, 917L) */ ((
								var_1_1
							) == (
								/* 290L, 13L, 258L, 269L, 917L) */ ((signed char) (
									/* 293L, 12L, 261L, 272L, 920L) */ ((
										var_1_3
									) + (
										var_1_4
									))
								))
							))
						) : (
							1
						))
					) && (
						/* 297L, 47L, 302L, 315L, 770L, 924L, 38L) */ ((
							/* 298L, 24L, 28L, 303L, 316L, 759L, 925L, 27L) */ ((
								last_1_var_1_20
							) > (
								var_1_3
							))
						) ? (
							/* 302L, 45L, 306L, 319L, 769L, 929L, 37L) */ ((
								/* 303L, 33L, 37L, 307L, 320L, 763L, 930L, 31L) */ ((
									var_1_4
								) > (
									last_1_var_1_20
								))
							) ? (
								/* 307L, 43L, 310L, 323L, 768L, 934L, 36L) */ ((
									var_1_5
								) == (
									/* 307L, 43L, 310L, 323L, 768L, 934L, 36L) */ ((signed long int) (
										last_1_var_1_20
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
					/* 313L, 88L, 382L, 409L, 940L) */ ((
						/* 314L, 56L, 62L, 383L, 410L, 941L) */ ((
							/* 315L, 54L, 63L, 384L, 411L, 942L) */ (max (
								/* 315L, 54L, 63L, 384L, 411L, 942L) */ (
									var_1_7
								) , (
									var_1_8
								)
							))
						) <= (
							var_1_9
						))
					) ? (
						/* 319L, 74L, 388L, 415L, 946L) */ ((
							var_1_6
						) == (
							/* 319L, 74L, 388L, 415L, 946L) */ ((signed short int) (
								/* 322L, 73L, 391L, 418L, 949L) */ (min (
									/* 322L, 73L, 391L, 418L, 949L) */ (
										/* 323L, 71L, 392L, 419L, 950L) */ ((
											var_1_10
										) - (
											var_1_11
										))
									) , (
										var_1_3
									)
								))
							))
						))
					) : (
						/* 327L, 86L, 396L, 423L, 954L) */ ((
							var_1_6
						) == (
							/* 327L, 86L, 396L, 423L, 954L) */ ((signed short int) (
								/* 330L, 85L, 399L, 426L, 957L) */ ((
									/* 331L, 83L, 400L, 427L, 958L) */ ((
										/* 332L, 79L, 401L, 428L, 959L) */ (min (
											/* 332L, 79L, 401L, 428L, 959L) */ (
												var_1_12
											) , (
												var_1_13
											)
										))
									) + (
										/* 335L, 82L, 404L, 431L, 962L) */ (min (
											/* 335L, 82L, 404L, 431L, 962L) */ (
												var_1_14
											) , (
												var_1_15
											)
										))
									))
								) - (
									256
								))
							))
						))
					))
				))
			) && (
				/* 340L, 117L, 466L, 481L, 967L) */ ((
					/* 341L, 97L, 103L, 467L, 482L, 968L) */ ((
						/* 342L, 95L, 104L, 468L, 483L, 969L) */ ((
							var_1_8
						) * (
							var_1_9
						))
					) <= (
						var_1_7
					))
				) ? (
					/* 346L, 115L, 472L, 487L, 973L) */ ((
						var_1_16
					) == (
						/* 346L, 115L, 472L, 487L, 973L) */ ((unsigned short int) (
							/* 349L, 114L, 475L, 490L, 976L) */ (min (
								/* 349L, 114L, 475L, 490L, 976L) */ (
									/* 350L, 112L, 476L, 491L, 977L) */ ((
										var_1_15
									) + (
										1
									))
								) , (
									var_1_12
								)
							))
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 355L, 132L, 514L, 523L, 982L) */ ((
				var_1_2
			) ? (
				/* 357L, 130L, 516L, 525L, 984L) */ ((
					var_1_17
				) == (
					/* 357L, 130L, 516L, 525L, 984L) */ ((unsigned char) (
						/* 360L, 129L, 519L, 528L, 987L) */ (min (
							/* 360L, 129L, 519L, 528L, 987L) */ (
								var_1_18
							) , (
								var_1_19
							)
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 364L, 169L, 570L, 589L, 991L) */ ((
			/* 365L, 143L, 151L, 571L, 590L, 992L) */ ((
				var_1_5
			) <= (
				/* 367L, 142L, 153L, 573L, 592L, 994L) */ ((
					/* 368L, 140L, 154L, 574L, 593L, 995L) */ ((
						var_1_14
					) - (
						var_1_13
					))
				) / (
					var_1_21
				))
			))
		) ? (
			/* 372L, 167L, 578L, 597L, 999L) */ ((
				var_1_20
			) == (
				/* 372L, 167L, 578L, 597L, 999L) */ ((signed char) (
					/* 375L, 166L, 581L, 600L, 1002L) */ (max (
						/* 375L, 166L, 581L, 600L, 1002L) */ (
							/* 376L, 164L, 582L, 601L, 1003L) */ ((
								/* 377L, 162L, 583L, 602L, 1004L) */ ((
									var_1_22
								) - (
									var_1_23
								))
							) + (
								var_1_4
							))
						) , (
							var_1_3
						)
					))
				))
			))
		) : (
			1
		))
	))
) && (
	/* 384L, 227L, 675L, 708L, 1011L) */ ((
		var_1_2
	) ? (
		/* 386L, 216L, 677L, 710L, 1013L) */ ((
			/* 387L, 184L, 193L, 678L, 711L, 1014L) */ ((
				/* 388L, 178L, 194L, 679L, 712L, 1015L) */ (- (
					var_1_7
				))
			) <= (
				/* 390L, 183L, 196L, 681L, 714L, 1017L) */ (min (
					/* 390L, 183L, 196L, 681L, 714L, 1017L) */ (
						/* 391L, 181L, 197L, 682L, 715L, 1018L) */ ((
							var_1_25
						) - (
							var_1_26
						))
					) , (
						var_1_9
					)
				))
			))
		) ? (
			/* 395L, 210L, 686L, 719L, 1022L) */ ((
				var_1_24
			) == (
				/* 395L, 210L, 686L, 719L, 1022L) */ ((unsigned char) (
					/* 398L, 209L, 689L, 722L, 1025L) */ (min (
						/* 398L, 209L, 689L, 722L, 1025L) */ (
							var_1_19
						) , (
							/* 400L, 208L, 691L, 724L, 1027L) */ (max (
								/* 400L, 208L, 691L, 724L, 1027L) */ (
									/* 401L, 206L, 692L, 725L, 1028L) */ ((
										var_1_22
									) + (
										var_1_23
									))
								) , (
									var_1_18
								)
							))
						)
					))
				))
			))
		) : (
			/* 405L, 214L, 696L, 729L, 1032L) */ ((
				var_1_24
			) == (
				/* 405L, 214L, 696L, 729L, 1032L) */ ((unsigned char) (
					0
				))
			))
		))
	) : (
		/* 409L, 225L, 700L, 733L, 1036L) */ ((
			var_1_27
		) ? (
			/* 411L, 223L, 702L, 735L, 1038L) */ ((
				var_1_24
			) == (
				/* 411L, 223L, 702L, 735L, 1038L) */ ((unsigned char) (
					var_1_23
				))
			))
		) : (
			1
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
