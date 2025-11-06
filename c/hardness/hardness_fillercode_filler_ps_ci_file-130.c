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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch130Filler_PS_CI.c", 13, "reach_error"); }
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
float var_1_1 = 1.664;
signed short int var_1_2 = 25;
signed short int var_1_3 = 27904;
signed short int var_1_4 = 64;
float var_1_6 = 4.6;
float var_1_7 = 1.75;
float var_1_8 = 1.875;
float var_1_9 = 127.5;
signed short int var_1_10 = -2;
unsigned char var_1_11 = 4;
unsigned char var_1_12 = 200;
float var_1_13 = 10000000000000.875;
unsigned char var_1_14 = 1;
float var_1_15 = 31.875;
signed char var_1_16 = -64;
signed char var_1_17 = 16;
unsigned char var_1_18 = 2;
unsigned char var_1_19 = 16;
unsigned char var_1_20 = 8;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 16;
double var_1_23 = 10000000000.5;
signed char var_1_24 = 64;
signed char var_1_25 = 8;
unsigned long int var_1_26 = 10000000;
unsigned short int var_1_27 = 5;
unsigned long int var_1_28 = 25;
unsigned char var_1_31 = 1;
signed char var_1_32 = -32;
signed char var_1_33 = -8;
signed short int var_1_34 = -10;
unsigned long int var_1_36 = 2;
float var_1_37 = 128.25;
unsigned long int var_1_39 = 0;
unsigned long int var_1_40 = 2619877799;
float var_1_41 = 16.5;
unsigned char var_1_42 = 1;
signed long int var_1_44 = -32;
float var_1_45 = 127.5;
signed long int var_1_46 = -1;
unsigned char var_1_47 = 10;
unsigned long int var_1_49 = 5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_27 = 5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 266L, 59L) */ if (/* 267L, 37L, 38L) */ ((/* 268L, 35L, 39L) */ ((var_1_21) >= (/* 270L, 34L, 41L) */ (- (var_1_22))))) || (var_1_14))) {
		/* 273L, 54L) */ var_1_28 = (
			/* 276L, 53L) */ (abs (
				var_1_21
			))
		);
	} else {
		/* 278L, 58L) */ var_1_28 = (
			var_1_21
		);
	}


	// From: CodeObject2
	/* 282L, 78L) */ if (/* 283L, 65L, 66L) */ ((var_1_2) < (var_1_26))) {
		/* 286L, 77L) */ var_1_32 = (
			/* 289L, 76L) */ ((
				var_1_33
			) + (
				16
			))
		);
	}


	// From: CodeObject3
	/* 292L, 101L) */ if (/* 293L, 86L, 87L) */ ((var_1_10) <= (/* 295L, 85L, 89L) */ ((var_1_19) >> (var_1_36))))) {
		/* 298L, 100L) */ var_1_34 = (
			var_1_19
		);
	}


	// From: CodeObject4
	/* 302L, 113L) */ if (var_1_14) {
		/* 304L, 112L) */ var_1_37 = (
			/* 307L, 111L) */ (abs (
				var_1_15
			))
		);
	}


	// From: CodeObject5
	/* 313L, 122L) */ var_1_39 = (
		/* 316L, 121L) */ ((
			var_1_40
		) - (
			var_1_3
		))
	);


	// From: CodeObject6
	/* 344L, 149L) */ if (/* 345L, 135L, 136L) */ ((var_1_31) && (var_1_42))) {
		/* 348L, 148L) */ var_1_41 = (
			/* 351L, 147L) */ (abs (
				/* 352L, 146L) */ (min (
					/* 352L, 146L) */ (
						var_1_8
					) , (
						var_1_6
					)
				))
			))
		);
	}


	// From: CodeObject7
	/* 355L, 209L) */ if (/* 356L, 161L, 162L) */ ((/* 357L, 159L, 163L) */ (max (/* 357L, 159L, 163L) */ (var_1_15) , (/* 359L, 158L, 165L) */ ((var_1_45) - (3.2f)))))) <= (var_1_8))) {
		/* 363L, 207L) */ if (/* 364L, 181L, 182L) */ ((/* 365L, 179L, 183L) */ (max (/* 365L, 179L, 183L) */ (/* 366L, 177L, 184L) */ (- (var_1_45))) , (var_1_8)))) != (var_1_6))) {
			/* 370L, 200L) */ var_1_44 = (
				/* 373L, 199L) */ ((
					/* 374L, 197L) */ (abs (
						var_1_22
					))
				) + (
					var_1_33
				))
			);
		} else {
			/* 377L, 206L) */ var_1_44 = (
				/* 380L, 205L) */ ((
					var_1_20
				) - (
					1
				))
			);
		}
	}


	// From: CodeObject8
	/* 385L, 236L) */ if (/* 386L, 218L, 219L) */ ((/* 387L, 216L, 220L) */ (abs (/* 388L, 215L, 221L) */ ((var_1_36) % (var_1_47))))) > (var_1_26))) {
		/* 392L, 235L) */ var_1_46 = (
			/* 395L, 234L) */ (abs (
				var_1_36
			))
		);
	}


	// From: CodeObject9
	/* 412L, 264L) */ if (/* 413L, 246L, 247L) */ ((var_1_46) < (var_1_39))) {
		/* 416L, 257L) */ var_1_49 = (
			/* 419L, 256L) */ (abs (
				var_1_3
			))
		);
	} else {
		/* 421L, 263L) */ var_1_49 = (
			/* 424L, 262L) */ ((
				var_1_40
			) - (
				var_1_19
			))
		);
	}


	// From: Req4Batch130Filler_PS_CI
	/* 12L, 107L, 471L, 485L, 866L, 933L) */ if (/* 3L, 89L, 90L, 472L, 486L, 857L, 934L) */ ((last_1_var_1_27) >= (var_1_2))) {
		/* 11L, 105L, 475L, 489L, 865L, 938L) */ if (var_1_14) {
			/* 10L, 104L, 477L, 491L, 864L, 940L) */ var_1_13 = (
				/* 9L, 103L, 480L, 494L, 863L, 943L) */ ((
					var_1_15
				) + (
					var_1_8
				))
			);
		}
	}


	// From: Req2Batch130Filler_PS_CI
	/* 911L, 44L, 380L, 389L) */ var_1_10 = (
		/* 914L, 43L, 383L, 392L) */ ((
			var_1_4
		) - (
			256
		))
	);


	// From: Req5Batch130Filler_PS_CI
	/* 948L, 183L, 527L, 553L) */ if (/* 949L, 123L, 124L, 528L, 554L) */ ((/* 950L, 119L, 125L, 529L, 555L) */ ((/* 951L, 117L, 126L, 530L, 556L) */ ((var_1_3) - (var_1_12))) > (var_1_10))) && (/* 955L, 122L, 130L, 534L, 560L) */ ((256) >= (var_1_2))))) {
		/* 958L, 177L, 537L, 563L) */ if (var_1_14) {
			/* 960L, 148L, 539L, 565L) */ var_1_16 = (
				var_1_17
			);
		} else {
			/* 964L, 176L, 543L, 569L) */ var_1_16 = (
				1
			);
		}
	} else {
		/* 968L, 182L, 547L, 573L) */ var_1_16 = (
			var_1_17
		);
	}


	// From: Req6Batch130Filler_PS_CI
	/* 975L, 203L, 632L, 648L) */ var_1_18 = (
		/* 978L, 202L, 635L, 651L) */ ((
			/* 979L, 196L, 636L, 652L) */ (max (
				/* 979L, 196L, 636L, 652L) */ (
					/* 980L, 194L, 637L, 653L) */ (abs (
						var_1_19
					))
				) , (
					var_1_20
				)
			))
		) + (
			/* 983L, 201L, 640L, 656L) */ (min (
				/* 983L, 201L, 640L, 656L) */ (
					/* 984L, 199L, 641L, 657L) */ (min (
						/* 984L, 199L, 641L, 657L) */ (
							4
						) , (
							var_1_21
						)
					))
				) , (
					var_1_22
				)
			))
		))
	);


	// From: Req7Batch130Filler_PS_CI
	signed char stepLocal_1 = var_1_17;
	/* 1002L, 237L, 694L, 707L) */ if (/* 997L, 218L, 219L, 695L, 708L) */ ((/* 996L, 216L, 220L, 696L, 709L) */ ((var_1_4) / (/* 995L, 215L, 222L, 698L, 711L) */ (min (/* 995L, 215L, 222L, 698L, 711L) */ (var_1_24) , (var_1_25)))))) > (stepLocal_1))) {
		/* 1001L, 236L, 702L, 715L) */ var_1_23 = (
			var_1_6
		);
	}


	// From: Req8Batch130Filler_PS_CI
	/* 1007L, 252L, 747L, 759L) */ var_1_26 = (
		/* 1010L, 251L, 750L, 762L) */ (min (
			/* 1010L, 251L, 750L, 762L) */ (
				/* 1011L, 247L, 751L, 763L) */ ((
					var_1_21
				) + (
					4u
				))
			) , (
				/* 1014L, 250L, 754L, 766L) */ ((
					var_1_10
				) + (
					var_1_18
				))
			)
		))
	);


	// From: Req1Batch130Filler_PS_CI
	unsigned long int stepLocal_0 = var_1_26;
	/* 905L, 35L, 294L, 315L) */ if (/* 892L, 8L, 9L, 295L, 316L) */ ((/* 891L, 6L, 10L, 296L, 317L) */ ((var_1_2) - (/* 890L, 5L, 12L, 298L, 319L) */ ((var_1_3) - (var_1_4))))) >= (stepLocal_0))) {
		/* 898L, 28L, 302L, 323L) */ var_1_1 = (
			/* 897L, 27L, 305L, 326L) */ (max (
				/* 897L, 27L, 305L, 326L) */ (
					var_1_6
				) , (
					var_1_7
				)
			))
		);
	} else {
		/* 904L, 34L, 308L, 329L) */ var_1_1 = (
			/* 903L, 33L, 311L, 332L) */ ((
				var_1_8
			) + (
				var_1_9
			))
		);
	}


	// From: Req3Batch130Filler_PS_CI
	/* 919L, 79L, 415L, 429L) */ if (/* 920L, 57L, 58L, 416L, 430L) */ ((var_1_26) < (16))) {
		/* 923L, 77L, 419L, 433L) */ if (/* 924L, 66L, 67L, 420L, 434L) */ ((var_1_1) <= (var_1_6))) {
			/* 927L, 76L, 423L, 437L) */ var_1_11 = (
				var_1_12
			);
		}
	}


	// From: Req9Batch130Filler_PS_CI
	unsigned char stepLocal_2 = /* 1019L, 261L, 269L, 796L, 811L) */ ((var_1_15) < (var_1_13));
	/* 1033L, 290L, 794L, 809L) */ if (/* 1028L, 267L, 268L, 795L, 810L) */ ((stepLocal_2) && (/* 1027L, 266L, 272L, 799L, 814L) */ ((var_1_18) > (/* 1026L, 265L, 274L, 801L, 816L) */ ((var_1_4) | (var_1_10))))))) {
		/* 1032L, 289L, 804L, 819L) */ var_1_27 = (
			var_1_20
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_2 >= -1);
	assume_abort_if_not(var_1_2 <= 32767);
	var_1_3 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_3 >= 16383);
	assume_abort_if_not(var_1_3 <= 32767);
	var_1_4 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 16383);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 254);
	var_1_14 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1);
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -127);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 127);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 127);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 127);
	var_1_24 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_24 >= -128);
	assume_abort_if_not(var_1_24 <= 127);
	assume_abort_if_not(var_1_24 != 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -128);
	assume_abort_if_not(var_1_25 <= 127);
	assume_abort_if_not(var_1_25 != 0);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -63);
	assume_abort_if_not(var_1_33 <= 63);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 6);
	var_1_40 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_40 >= 2147483647);
	assume_abort_if_not(var_1_40 <= 4294967294);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_45 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 0);
	assume_abort_if_not(var_1_47 <= 255);
	assume_abort_if_not(var_1_47 != 0);
}



void updateLastVariables(void) {
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	if (/* 428L, 8L, 16L, 337L, 358L, 1038L) */ ((/* 429L, 6L, 17L, 338L, 359L, 1039L) */ ((var_1_2) - (/* 431L, 5L, 19L, 340L, 361L, 1041L) */ ((var_1_3) - (var_1_4))))) >= (var_1_26))) {
	} else {
	}
	if (/* 459L, 57L, 61L, 444L, 458L, 1069L) */ ((var_1_26) < (16))) {
		if (/* 463L, 66L, 70L, 448L, 462L, 1073L) */ ((var_1_1) <= (var_1_6))) {
		}
	}
	if (/* 473L, 89L, 93L, 500L, 514L, 872L, 1083L, 18L) */ ((last_1_var_1_27) >= (var_1_2))) {
		if (var_1_14) {
		}
	}
	if (/* 488L, 123L, 133L, 580L, 606L, 1098L) */ ((/* 489L, 119L, 134L, 581L, 607L, 1099L) */ ((/* 490L, 117L, 135L, 582L, 608L, 1100L) */ ((var_1_3) - (var_1_12))) > (var_1_10))) && (/* 494L, 122L, 139L, 586L, 612L, 1104L) */ ((256) >= (var_1_2))))) {
		if (var_1_14) {
		} else {
		}
	} else {
	}
	if (/* 529L, 218L, 226L, 721L, 734L, 1139L) */ ((/* 530L, 216L, 227L, 722L, 735L, 1140L) */ ((var_1_4) / (/* 532L, 215L, 229L, 724L, 737L, 1142L) */ (min (/* 532L, 215L, 229L, 724L, 737L, 1142L) */ (var_1_24) , (var_1_25)))))) > (var_1_17))) {
	}
	if (/* 554L, 267L, 277L, 825L, 840L, 1164L) */ ((/* 555L, 261L, 278L, 826L, 841L, 1165L) */ ((var_1_15) < (var_1_13))) && (/* 558L, 266L, 281L, 829L, 844L, 1168L) */ ((var_1_18) > (/* 560L, 265L, 283L, 831L, 846L, 1170L) */ ((var_1_4) | (var_1_10))))))) {
	}
	return /* 575L) */ ((
	/* 574L) */ ((
		/* 573L) */ ((
			/* 572L) */ ((
				/* 571L) */ ((
					/* 570L) */ ((
						/* 569L) */ ((
							/* 568L) */ ((
								/* 427L, 36L, 336L, 357L, 1037L) */ ((
									/* 428L, 8L, 16L, 337L, 358L, 1038L) */ ((
										/* 429L, 6L, 17L, 338L, 359L, 1039L) */ ((
											var_1_2
										) - (
											/* 431L, 5L, 19L, 340L, 361L, 1041L) */ ((
												var_1_3
											) - (
												var_1_4
											))
										))
									) >= (
										var_1_26
									))
								) ? (
									/* 435L, 28L, 344L, 365L, 1045L) */ ((
										var_1_1
									) == (
										/* 435L, 28L, 344L, 365L, 1045L) */ ((float) (
											/* 438L, 27L, 347L, 368L, 1048L) */ (max (
												/* 438L, 27L, 347L, 368L, 1048L) */ (
													var_1_6
												) , (
													var_1_7
												)
											))
										))
									))
								) : (
									/* 441L, 34L, 350L, 371L, 1051L) */ ((
										var_1_1
									) == (
										/* 441L, 34L, 350L, 371L, 1051L) */ ((float) (
											/* 444L, 33L, 353L, 374L, 1054L) */ ((
												var_1_8
											) + (
												var_1_9
											))
										))
									))
								))
							) && (
								/* 450L, 44L, 398L, 407L, 1060L) */ ((
									var_1_10
								) == (
									/* 450L, 44L, 398L, 407L, 1060L) */ ((signed short int) (
										/* 453L, 43L, 401L, 410L, 1063L) */ ((
											var_1_4
										) - (
											256
										))
									))
								))
							))
						) && (
							/* 458L, 80L, 443L, 457L, 1068L) */ ((
								/* 459L, 57L, 61L, 444L, 458L, 1069L) */ ((
									var_1_26
								) < (
									16
								))
							) ? (
								/* 462L, 78L, 447L, 461L, 1072L) */ ((
									/* 463L, 66L, 70L, 448L, 462L, 1073L) */ ((
										var_1_1
									) <= (
										var_1_6
									))
								) ? (
									/* 466L, 76L, 451L, 465L, 1076L) */ ((
										var_1_11
									) == (
										/* 466L, 76L, 451L, 465L, 1076L) */ ((unsigned char) (
											var_1_12
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
						/* 472L, 108L, 499L, 513L, 881L, 1082L, 27L) */ ((
							/* 473L, 89L, 93L, 500L, 514L, 872L, 1083L, 18L) */ ((
								last_1_var_1_27
							) >= (
								var_1_2
							))
						) ? (
							/* 477L, 106L, 503L, 517L, 880L, 1087L, 26L) */ ((
								var_1_14
							) ? (
								/* 479L, 104L, 505L, 519L, 879L, 1089L, 25L) */ ((
									var_1_13
								) == (
									/* 479L, 104L, 505L, 519L, 879L, 1089L, 25L) */ ((float) (
										/* 482L, 103L, 508L, 522L, 878L, 1092L, 24L) */ ((
											var_1_15
										) + (
											var_1_8
										))
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
					/* 487L, 184L, 579L, 605L, 1097L) */ ((
						/* 488L, 123L, 133L, 580L, 606L, 1098L) */ ((
							/* 489L, 119L, 134L, 581L, 607L, 1099L) */ ((
								/* 490L, 117L, 135L, 582L, 608L, 1100L) */ ((
									var_1_3
								) - (
									var_1_12
								))
							) > (
								var_1_10
							))
						) && (
							/* 494L, 122L, 139L, 586L, 612L, 1104L) */ ((
								256
							) >= (
								var_1_2
							))
						))
					) ? (
						/* 497L, 178L, 589L, 615L, 1107L) */ ((
							var_1_14
						) ? (
							/* 499L, 148L, 591L, 617L, 1109L) */ ((
								var_1_16
							) == (
								/* 499L, 148L, 591L, 617L, 1109L) */ ((signed char) (
									var_1_17
								))
							))
						) : (
							/* 503L, 176L, 595L, 621L, 1113L) */ ((
								var_1_16
							) == (
								/* 503L, 176L, 595L, 621L, 1113L) */ ((signed char) (
									1
								))
							))
						))
					) : (
						/* 507L, 182L, 599L, 625L, 1117L) */ ((
							var_1_16
						) == (
							/* 507L, 182L, 599L, 625L, 1117L) */ ((signed char) (
								var_1_17
							))
						))
					))
				))
			) && (
				/* 514L, 203L, 664L, 680L, 1124L) */ ((
					var_1_18
				) == (
					/* 514L, 203L, 664L, 680L, 1124L) */ ((unsigned char) (
						/* 517L, 202L, 667L, 683L, 1127L) */ ((
							/* 518L, 196L, 668L, 684L, 1128L) */ (max (
								/* 518L, 196L, 668L, 684L, 1128L) */ (
									/* 519L, 194L, 669L, 685L, 1129L) */ (abs (
										var_1_19
									))
								) , (
									var_1_20
								)
							))
						) + (
							/* 522L, 201L, 672L, 688L, 1132L) */ (min (
								/* 522L, 201L, 672L, 688L, 1132L) */ (
									/* 523L, 199L, 673L, 689L, 1133L) */ (min (
										/* 523L, 199L, 673L, 689L, 1133L) */ (
											4
										) , (
											var_1_21
										)
									))
								) , (
									var_1_22
								)
							))
						))
					))
				))
			))
		) && (
			/* 528L, 238L, 720L, 733L, 1138L) */ ((
				/* 529L, 218L, 226L, 721L, 734L, 1139L) */ ((
					/* 530L, 216L, 227L, 722L, 735L, 1140L) */ ((
						var_1_4
					) / (
						/* 532L, 215L, 229L, 724L, 737L, 1142L) */ (min (
							/* 532L, 215L, 229L, 724L, 737L, 1142L) */ (
								var_1_24
							) , (
								var_1_25
							)
						))
					))
				) > (
					var_1_17
				))
			) ? (
				/* 536L, 236L, 728L, 741L, 1146L) */ ((
					var_1_23
				) == (
					/* 536L, 236L, 728L, 741L, 1146L) */ ((double) (
						var_1_6
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 542L, 252L, 771L, 783L, 1152L) */ ((
			var_1_26
		) == (
			/* 542L, 252L, 771L, 783L, 1152L) */ ((unsigned long int) (
				/* 545L, 251L, 774L, 786L, 1155L) */ (min (
					/* 545L, 251L, 774L, 786L, 1155L) */ (
						/* 546L, 247L, 775L, 787L, 1156L) */ ((
							var_1_21
						) + (
							4u
						))
					) , (
						/* 549L, 250L, 778L, 790L, 1159L) */ ((
							var_1_10
						) + (
							var_1_18
						))
					)
				))
			))
		))
	))
) && (
	/* 553L, 291L, 824L, 839L, 1163L) */ ((
		/* 554L, 267L, 277L, 825L, 840L, 1164L) */ ((
			/* 555L, 261L, 278L, 826L, 841L, 1165L) */ ((
				var_1_15
			) < (
				var_1_13
			))
		) && (
			/* 558L, 266L, 281L, 829L, 844L, 1168L) */ ((
				var_1_18
			) > (
				/* 560L, 265L, 283L, 831L, 846L, 1170L) */ ((
					var_1_4
				) | (
					var_1_10
				))
			))
		))
	) ? (
		/* 563L, 289L, 834L, 849L, 1173L) */ ((
			var_1_27
		) == (
			/* 563L, 289L, 834L, 849L, 1173L) */ ((unsigned short int) (
				var_1_20
			))
		))
	) : (
		1
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
