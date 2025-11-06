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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch90Filler_PE_CI.c", 13, "reach_error"); }
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
signed long int var_1_1 = -32;
signed long int var_1_2 = 16;
signed long int var_1_3 = 10;
signed long int var_1_4 = 64;
signed long int var_1_5 = -10;
signed long int var_1_10 = 5;
signed long int var_1_11 = -4;
signed char var_1_12 = 4;
signed long int var_1_13 = 100000;
signed char var_1_14 = -16;
double var_1_15 = 2.25;
signed long int var_1_16 = 2;
unsigned char var_1_17 = 0;
signed short int var_1_18 = -1;
signed short int var_1_19 = 4;
signed short int var_1_20 = 32;
double var_1_21 = 4.5;
double var_1_22 = 8.75;
double var_1_23 = 1000.8;
double var_1_24 = 63.5;
double var_1_25 = 31.5;
signed short int var_1_26 = 16;
unsigned char var_1_28 = 1;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 10;
unsigned char var_1_40 = 5;
unsigned char var_1_41 = 2;
unsigned char var_1_42 = 0;
signed long int var_1_43 = 1;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
signed long int var_1_46 = 256;
unsigned char var_1_47 = 2;
unsigned long int var_1_48 = 16;
unsigned long int var_1_49 = 1289077960;
unsigned long int var_1_50 = 10;
unsigned long int var_1_51 = 3273461173;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -32;
signed long int last_1_var_1_16 = 2;
double last_1_var_1_21 = 4.5;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req3Batch90Filler_PE_CI
	/* 59L, 201L, 641L, 655L, 997L, 1121L) */ if (/* 54L, 186L, 187L, 642L, 656L, 992L, 1122L) */ ((/* 52L, 184L, 188L, 643L, 657L, 990L, 1123L) */ ((last_1_var_1_1) + (last_1_var_1_16))) != (var_1_13))) {
		/* 58L, 200L, 647L, 661L, 996L, 1129L) */ var_1_15 = (
			16.4
		);
	}


	// From: Req4Batch90Filler_PE_CI
	unsigned char stepLocal_0 = var_1_17;
	/* 23L, 254L, 694L, 715L, 1038L, 1156L) */ if (/* 6L, 215L, 216L, 695L, 716L, 1021L, 1140L) */ ((8.5) <= (last_1_var_1_21))) {
		/* 18L, 248L, 698L, 719L, 1033L, 1151L) */ if (/* 13L, 229L, 230L, 699L, 720L, 1028L, 1146L) */ ((stepLocal_0) || (/* 12L, 228L, 232L, 701L, 722L, 1027L, 1145L) */ ((/* 10L, 226L, 233L, 702L, 723L, 1025L, 1143L) */ ((var_1_11) & (var_1_3))) != (var_1_13))))) {
			/* 17L, 247L, 706L, 727L, 1032L, 1150L) */ var_1_16 = (
				var_1_10
			);
		}
	} else {
		/* 22L, 253L, 710L, 731L, 1037L, 1155L) */ var_1_16 = (
			0
		);
	}


	// From: Req2Batch90Filler_PE_CI
	/* 1097L, 172L, 548L, 571L) */ if (/* 1098L, 97L, 98L, 549L, 572L) */ ((/* 1099L, 93L, 99L, 550L, 573L) */ ((/* 1100L, 89L, 100L, 551L, 574L) */ ((var_1_16) * (var_1_4))) * (/* 1103L, 92L, 103L, 554L, 577L) */ ((-500) / (var_1_3))))) <= (/* 1106L, 96L, 106L, 557L, 580L) */ ((var_1_2) - (var_1_13))))) {
		/* 1109L, 123L, 560L, 583L) */ var_1_12 = (
			var_1_14
		);
	} else {
		/* 1113L, 171L, 564L, 587L) */ var_1_12 = (
			5
		);
	}


	// From: Req5Batch90Filler_PE_CI
	/* 1161L, 275L, 779L, 795L) */ if (var_1_17) {
		/* 1163L, 268L, 781L, 797L) */ var_1_18 = (
			/* 1166L, 267L, 784L, 800L) */ ((
				var_1_19
			) - (
				var_1_20
			))
		);
	} else {
		/* 1169L, 274L, 787L, 803L) */ var_1_18 = (
			/* 1172L, 273L, 790L, 806L) */ ((
				var_1_14
			) + (
				var_1_12
			))
		);
	}


	// From: Req6Batch90Filler_PE_CI
	/* 1177L, 344L, 843L, 879L) */ if (/* 1178L, 287L, 288L, 844L, 880L) */ ((-50) == (/* 1180L, 286L, 290L, 846L, 882L) */ ((var_1_3) + (var_1_16))))) {
		/* 1183L, 307L, 849L, 885L) */ var_1_21 = (
			/* 1186L, 306L, 852L, 888L) */ ((
				/* 1187L, 304L, 853L, 889L) */ ((
					/* 1188L, 302L, 854L, 890L) */ (min (
						/* 1188L, 302L, 854L, 890L) */ (
							var_1_22
						) , (
							var_1_23
						)
					))
				) - (
					var_1_24
				))
			) + (
				var_1_25
			))
		);
	} else {
		/* 1193L, 342L, 859L, 895L) */ if (/* 1194L, 310L, 311L, 860L, 896L) */ ((var_1_15) > (var_1_25))) {
			/* 1197L, 340L, 863L, 899L) */ if (/* 1198L, 321L, 322L, 864L, 900L) */ ((/* 1199L, 319L, 323L, 865L, 901L) */ ((var_1_19) - (var_1_20))) <= (var_1_13))) {
				/* 1203L, 335L, 869L, 905L) */ var_1_21 = (
					var_1_22
				);
			} else {
				/* 1207L, 339L, 873L, 909L) */ var_1_21 = (
					var_1_25
				);
			}
		}
	}


	// From: Req1Batch90Filler_PE_CI
	/* 1065L, 75L, 417L, 450L) */ if (/* 1066L, 11L, 12L, 418L, 451L) */ ((/* 1067L, 7L, 13L, 419L, 452L) */ ((var_1_2) / (/* 1069L, 6L, 15L, 421L, 454L) */ (min (/* 1069L, 6L, 15L, 421L, 454L) */ (var_1_3) , (var_1_4)))))) <= (/* 1072L, 10L, 18L, 424L, 457L) */ ((var_1_5) | (last_1_var_1_1))))) {
		/* 1076L, 69L, 428L, 461L) */ if (/* 1077L, 34L, 35L, 429L, 462L) */ ((/* 1078L, 32L, 36L, 430L, 463L) */ ((var_1_21) * (var_1_15))) < (var_1_21))) {
			/* 1082L, 48L, 434L, 467L) */ var_1_1 = (
				var_1_10
			);
		} else {
			/* 1086L, 68L, 438L, 471L) */ var_1_1 = (
				var_1_11
			);
		}
	} else {
		/* 1090L, 74L, 442L, 475L) */ var_1_1 = (
			var_1_10
		);
	}


	// From: CodeObject1
	/* 309L, 85L) */ var_1_26 = (
		var_1_19
	);


	// From: CodeObject2
	/* 313L, 154L) */ if (var_1_17) {
		/* 315L, 152L) */ if (/* 316L, 102L, 103L) */ ((var_1_20) < (/* 318L, 101L, 105L) */ (max (/* 318L, 101L, 105L) */ (/* 319L, 97L, 106L) */ (min (/* 319L, 97L, 106L) */ (var_1_11) , (var_1_20)))) , (/* 322L, 100L, 109L) */ ((var_1_20) / (var_1_3)))))))) {
			/* 325L, 150L) */ if (/* 326L, 124L, 125L) */ ((/* 327L, 122L, 126L) */ (abs (var_1_22))) < (var_1_24))) {
				/* 330L, 138L) */ var_1_28 = (
					/* 333L, 137L) */ ((
						var_1_17
					) || (
						var_1_36
					))
				);
			} else {
				/* 336L, 148L) */ if (var_1_17) {
					/* 338L, 147L) */ var_1_28 = (
						/* 341L, 146L) */ ((
							var_1_36
						) || (
							var_1_37
						))
					);
				}
			}
		}
	}


	// From: CodeObject3
	/* 344L, 186L) */ if (/* 345L, 160L, 161L) */ ((var_1_24) == (var_1_25))) {
		/* 348L, 175L) */ var_1_38 = (
			/* 351L, 174L) */ (abs (
				/* 352L, 173L) */ (min (
					/* 352L, 173L) */ (
						/* 353L, 171L) */ (max (
							/* 353L, 171L) */ (
								var_1_39
							) , (
								var_1_40
							)
						))
					) , (
						var_1_41
					)
				))
			))
		);
	} else {
		/* 357L, 185L) */ var_1_38 = (
			/* 360L, 184L) */ (min (
				/* 360L, 184L) */ (
					var_1_41
				) , (
					/* 362L, 183L) */ (max (
						/* 362L, 183L) */ (
							/* 363L, 181L) */ (max (
								/* 363L, 181L) */ (
									var_1_40
								) , (
									var_1_39
								)
							))
						) , (
							var_1_42
						)
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 368L, 193L) */ var_1_43 = (
		var_1_20
	);


	// From: CodeObject5
	/* 372L, 207L) */ if (var_1_37) {
		/* 374L, 206L) */ var_1_44 = (
			/* 377L, 205L) */ ((
				var_1_36
			) && (
				var_1_45
			))
		);
	}


	// From: CodeObject6
	/* 382L, 236L) */ if (/* 383L, 217L, 218L) */ ((var_1_42) <= (/* 385L, 216L, 220L) */ ((/* 386L, 214L, 221L) */ ((var_1_41) >> (var_1_47))) % (var_1_3))))) {
		/* 390L, 235L) */ var_1_46 = (
			var_1_19
		);
	}


	// From: CodeObject7
	/* 394L, 259L) */ if (var_1_17) {
		/* 396L, 258L) */ var_1_48 = (
			/* 399L, 257L) */ ((
				/* 400L, 251L) */ ((
					var_1_47
				) + (
					var_1_40
				))
			) + (
				/* 403L, 256L) */ (min (
					/* 403L, 256L) */ (
						var_1_39
					) , (
						/* 405L, 255L) */ ((
							var_1_49
						) - (
							var_1_20
						))
					)
				))
			))
		);
	}


	// From: CodeObject8
	/* 408L, 306L) */ if (/* 409L, 267L, 268L) */ ((var_1_16) >= (/* 411L, 266L, 270L) */ ((16) << (var_1_20))))) {
		/* 414L, 300L) */ if (/* 415L, 282L, 283L) */ ((var_1_13) > (/* 417L, 281L, 285L) */ ((var_1_4) | (var_1_39))))) {
			/* 420L, 299L) */ var_1_50 = (
				/* 423L, 298L) */ ((
					/* 424L, 296L) */ (abs (
						var_1_51
					))
				) - (
					32u
				))
			);
		}
	} else {
		/* 427L, 305L) */ var_1_50 = (
			var_1_4
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 2147483647);
	var_1_3 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_3 >= -2147483648);
	assume_abort_if_not(var_1_3 <= 2147483647);
	assume_abort_if_not(var_1_3 != 0);
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -2147483648);
	assume_abort_if_not(var_1_4 <= 2147483647);
	assume_abort_if_not(var_1_4 != 0);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -2147483648);
	assume_abort_if_not(var_1_5 <= 2147483647);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -2147483647);
	assume_abort_if_not(var_1_10 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -2147483647);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -127);
	assume_abort_if_not(var_1_14 <= 126);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_19 >= -1);
	assume_abort_if_not(var_1_19 <= 32766);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_23 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_24 >= 0.0F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 1);
	assume_abort_if_not(var_1_36 <= 1);
	var_1_37 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_37 >= 1);
	assume_abort_if_not(var_1_37 <= 1);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 0);
	assume_abort_if_not(var_1_41 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_45 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_45 >= 1);
	assume_abort_if_not(var_1_45 <= 1);
	var_1_47 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_47 >= 1);
	assume_abort_if_not(var_1_47 <= 7);
	var_1_49 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_49 >= 1073741823);
	assume_abort_if_not(var_1_49 <= 2147483647);
	var_1_51 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_51 >= 2147483647);
	assume_abort_if_not(var_1_51 <= 4294967294);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 435L, 11L, 21L, 484L, 517L, 1216L) */ ((/* 436L, 7L, 22L, 485L, 518L, 1217L) */ ((var_1_2) / (/* 438L, 6L, 24L, 487L, 520L, 1219L) */ (min (/* 438L, 6L, 24L, 487L, 520L, 1219L) */ (var_1_3) , (var_1_4)))))) <= (/* 441L, 10L, 27L, 490L, 523L, 1222L) */ ((var_1_5) | (last_1_var_1_1))))) {
		if (/* 446L, 34L, 40L, 495L, 528L, 1227L) */ ((/* 447L, 32L, 41L, 496L, 529L, 1228L) */ ((var_1_21) * (var_1_15))) < (var_1_21))) {
		} else {
		}
	} else {
	}
	if (/* 467L, 97L, 109L, 595L, 618L, 1248L) */ ((/* 468L, 93L, 110L, 596L, 619L, 1249L) */ ((/* 469L, 89L, 111L, 597L, 620L, 1250L) */ ((var_1_16) * (var_1_4))) * (/* 472L, 92L, 114L, 600L, 623L, 1253L) */ ((-500) / (var_1_3))))) <= (/* 475L, 96L, 117L, 603L, 626L, 1256L) */ ((var_1_2) - (var_1_13))))) {
	} else {
	}
	if (/* 491L, 186L, 192L, 670L, 684L, 1008L, 1272L, 70L) */ ((/* 492L, 184L, 193L, 671L, 685L, 1006L, 1273L, 68L) */ ((last_1_var_1_1) + (last_1_var_1_16))) != (var_1_13))) {
	}
	if (/* 504L, 215L, 219L, 737L, 758L, 1043L, 1285L, 29L) */ ((8.5) <= (last_1_var_1_21))) {
		if (/* 509L, 229L, 237L, 741L, 762L, 1050L, 1290L, 36L) */ ((var_1_17) || (/* 511L, 228L, 239L, 743L, 764L, 1049L, 1292L, 35L) */ ((/* 512L, 226L, 240L, 744L, 765L, 1047L, 1293L, 33L) */ ((var_1_11) & (var_1_3))) != (var_1_13))))) {
		}
	} else {
	}
	if (var_1_17) {
	} else {
	}
	if (/* 543L, 287L, 293L, 916L, 952L, 1324L) */ ((-50) == (/* 545L, 286L, 295L, 918L, 954L, 1326L) */ ((var_1_3) + (var_1_16))))) {
	} else {
		if (/* 559L, 310L, 314L, 932L, 968L, 1340L) */ ((var_1_15) > (var_1_25))) {
			if (/* 563L, 321L, 327L, 936L, 972L, 1344L) */ ((/* 564L, 319L, 328L, 937L, 973L, 1345L) */ ((var_1_19) - (var_1_20))) <= (var_1_13))) {
			} else {
			}
		}
	}
	return /* 581L) */ ((
	/* 580L) */ ((
		/* 579L) */ ((
			/* 578L) */ ((
				/* 577L) */ ((
					/* 434L, 76L, 483L, 516L, 1215L) */ ((
						/* 435L, 11L, 21L, 484L, 517L, 1216L) */ ((
							/* 436L, 7L, 22L, 485L, 518L, 1217L) */ ((
								var_1_2
							) / (
								/* 438L, 6L, 24L, 487L, 520L, 1219L) */ (min (
									/* 438L, 6L, 24L, 487L, 520L, 1219L) */ (
										var_1_3
									) , (
										var_1_4
									)
								))
							))
						) <= (
							/* 441L, 10L, 27L, 490L, 523L, 1222L) */ ((
								var_1_5
							) | (
								last_1_var_1_1
							))
						))
					) ? (
						/* 445L, 70L, 494L, 527L, 1226L) */ ((
							/* 446L, 34L, 40L, 495L, 528L, 1227L) */ ((
								/* 447L, 32L, 41L, 496L, 529L, 1228L) */ ((
									var_1_21
								) * (
									var_1_15
								))
							) < (
								var_1_21
							))
						) ? (
							/* 451L, 48L, 500L, 533L, 1232L) */ ((
								var_1_1
							) == (
								/* 451L, 48L, 500L, 533L, 1232L) */ ((signed long int) (
									var_1_10
								))
							))
						) : (
							/* 455L, 68L, 504L, 537L, 1236L) */ ((
								var_1_1
							) == (
								/* 455L, 68L, 504L, 537L, 1236L) */ ((signed long int) (
									var_1_11
								))
							))
						))
					) : (
						/* 459L, 74L, 508L, 541L, 1240L) */ ((
							var_1_1
						) == (
							/* 459L, 74L, 508L, 541L, 1240L) */ ((signed long int) (
								var_1_10
							))
						))
					))
				) && (
					/* 466L, 173L, 594L, 617L, 1247L) */ ((
						/* 467L, 97L, 109L, 595L, 618L, 1248L) */ ((
							/* 468L, 93L, 110L, 596L, 619L, 1249L) */ ((
								/* 469L, 89L, 111L, 597L, 620L, 1250L) */ ((
									var_1_16
								) * (
									var_1_4
								))
							) * (
								/* 472L, 92L, 114L, 600L, 623L, 1253L) */ ((
									-500
								) / (
									var_1_3
								))
							))
						) <= (
							/* 475L, 96L, 117L, 603L, 626L, 1256L) */ ((
								var_1_2
							) - (
								var_1_13
							))
						))
					) ? (
						/* 478L, 123L, 606L, 629L, 1259L) */ ((
							var_1_12
						) == (
							/* 478L, 123L, 606L, 629L, 1259L) */ ((signed char) (
								var_1_14
							))
						))
					) : (
						/* 482L, 171L, 610L, 633L, 1263L) */ ((
							var_1_12
						) == (
							/* 482L, 171L, 610L, 633L, 1263L) */ ((signed char) (
								5
							))
						))
					))
				))
			) && (
				/* 490L, 202L, 669L, 683L, 1013L, 1271L, 75L) */ ((
					/* 491L, 186L, 192L, 670L, 684L, 1008L, 1272L, 70L) */ ((
						/* 492L, 184L, 193L, 671L, 685L, 1006L, 1273L, 68L) */ ((
							last_1_var_1_1
						) + (
							last_1_var_1_16
						))
					) != (
						var_1_13
					))
				) ? (
					/* 498L, 200L, 675L, 689L, 1012L, 1279L, 74L) */ ((
						var_1_15
					) == (
						/* 498L, 200L, 675L, 689L, 1012L, 1279L, 74L) */ ((double) (
							16.4
						))
					))
				) : (
					1
				))
			))
		) && (
			/* 503L, 255L, 736L, 757L, 1060L, 1284L, 46L) */ ((
				/* 504L, 215L, 219L, 737L, 758L, 1043L, 1285L, 29L) */ ((
					8.5
				) <= (
					last_1_var_1_21
				))
			) ? (
				/* 508L, 249L, 740L, 761L, 1055L, 1289L, 41L) */ ((
					/* 509L, 229L, 237L, 741L, 762L, 1050L, 1290L, 36L) */ ((
						var_1_17
					) || (
						/* 511L, 228L, 239L, 743L, 764L, 1049L, 1292L, 35L) */ ((
							/* 512L, 226L, 240L, 744L, 765L, 1047L, 1293L, 33L) */ ((
								var_1_11
							) & (
								var_1_3
							))
						) != (
							var_1_13
						))
					))
				) ? (
					/* 516L, 247L, 748L, 769L, 1054L, 1297L, 40L) */ ((
						var_1_16
					) == (
						/* 516L, 247L, 748L, 769L, 1054L, 1297L, 40L) */ ((signed long int) (
							var_1_10
						))
					))
				) : (
					1
				))
			) : (
				/* 520L, 253L, 752L, 773L, 1059L, 1301L, 45L) */ ((
					var_1_16
				) == (
					/* 520L, 253L, 752L, 773L, 1059L, 1301L, 45L) */ ((signed long int) (
						0
					))
				))
			))
		))
	) && (
		/* 526L, 276L, 811L, 827L, 1307L) */ ((
			var_1_17
		) ? (
			/* 528L, 268L, 813L, 829L, 1309L) */ ((
				var_1_18
			) == (
				/* 528L, 268L, 813L, 829L, 1309L) */ ((signed short int) (
					/* 531L, 267L, 816L, 832L, 1312L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		) : (
			/* 534L, 274L, 819L, 835L, 1315L) */ ((
				var_1_18
			) == (
				/* 534L, 274L, 819L, 835L, 1315L) */ ((signed short int) (
					/* 537L, 273L, 822L, 838L, 1318L) */ ((
						var_1_14
					) + (
						var_1_12
					))
				))
			))
		))
	))
) && (
	/* 542L, 345L, 915L, 951L, 1323L) */ ((
		/* 543L, 287L, 293L, 916L, 952L, 1324L) */ ((
			-50
		) == (
			/* 545L, 286L, 295L, 918L, 954L, 1326L) */ ((
				var_1_3
			) + (
				var_1_16
			))
		))
	) ? (
		/* 548L, 307L, 921L, 957L, 1329L) */ ((
			var_1_21
		) == (
			/* 548L, 307L, 921L, 957L, 1329L) */ ((double) (
				/* 551L, 306L, 924L, 960L, 1332L) */ ((
					/* 552L, 304L, 925L, 961L, 1333L) */ ((
						/* 553L, 302L, 926L, 962L, 1334L) */ (min (
							/* 553L, 302L, 926L, 962L, 1334L) */ (
								var_1_22
							) , (
								var_1_23
							)
						))
					) - (
						var_1_24
					))
				) + (
					var_1_25
				))
			))
		))
	) : (
		/* 558L, 343L, 931L, 967L, 1339L) */ ((
			/* 559L, 310L, 314L, 932L, 968L, 1340L) */ ((
				var_1_15
			) > (
				var_1_25
			))
		) ? (
			/* 562L, 341L, 935L, 971L, 1343L) */ ((
				/* 563L, 321L, 327L, 936L, 972L, 1344L) */ ((
					/* 564L, 319L, 328L, 937L, 973L, 1345L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				) <= (
					var_1_13
				))
			) ? (
				/* 568L, 335L, 941L, 977L, 1349L) */ ((
					var_1_21
				) == (
					/* 568L, 335L, 941L, 977L, 1349L) */ ((double) (
						var_1_22
					))
				))
			) : (
				/* 572L, 339L, 945L, 981L, 1353L) */ ((
					var_1_21
				) == (
					/* 572L, 339L, 945L, 981L, 1353L) */ ((double) (
						var_1_25
					))
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
