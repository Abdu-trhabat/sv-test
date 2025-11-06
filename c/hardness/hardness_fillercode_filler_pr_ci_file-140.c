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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Filler_PR_CI.c", 13, "reach_error"); }
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
unsigned char var_1_2 = 0;
unsigned char var_1_3 = 1;
signed short int var_1_6 = 32;
signed short int var_1_7 = 1;
double var_1_8 = 5.5;
double var_1_9 = 31.6;
double var_1_10 = 0.25;
double var_1_11 = 32.9;
double var_1_12 = 255.5;
double var_1_13 = 500.8;
signed short int var_1_14 = 0;
float var_1_15 = 25.25;
float var_1_16 = 127.25;
unsigned char var_1_17 = 0;
signed char var_1_18 = -10;
float var_1_19 = 4.5;
signed char var_1_20 = -1;
signed char var_1_21 = 2;
signed char var_1_22 = 32;
unsigned long int var_1_23 = 64;
unsigned long int var_1_24 = 1;
signed char var_1_25 = 64;
signed char var_1_26 = -8;
unsigned short int var_1_32 = 200;
unsigned short int var_1_33 = 10;
unsigned short int var_1_34 = 46168;
unsigned short int var_1_35 = 25;
double var_1_36 = 256.25;
unsigned long int var_1_39 = 1;
signed long int var_1_40 = -1;
signed short int var_1_41 = 0;
signed short int var_1_42 = -4;
signed short int var_1_43 = 500;
unsigned short int var_1_44 = 0;
double var_1_46 = 10000.5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -10;
signed char last_1_var_1_18 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch140Filler_PR_CI
	/* 9L, 98L, 527L, 540L, 928L, 1004L) */ var_1_14 = (
		/* 8L, 97L, 530L, 543L, 927L, 1007L) */ (max (
			/* 8L, 97L, 530L, 543L, 927L, 1007L) */ (
				var_1_6
			) , (
				/* 7L, 96L, 532L, 545L, 926L, 1009L) */ (min (
					/* 7L, 96L, 532L, 545L, 926L, 1009L) */ (
						last_1_var_1_18
					) , (
						last_1_var_1_1
					)
				))
			)
		))
	);


	// From: CodeObject4
	/* 309L, 109L) */ var_1_39 = (
		256u
	);


	// From: Req5Batch140Filler_PR_CI
	/* 1017L, 139L, 577L, 600L) */ if (/* 1018L, 113L, 114L, 578L, 601L) */ ((var_1_14) <= (var_1_6))) {
		/* 1021L, 129L, 581L, 604L) */ var_1_15 = (
			/* 1024L, 128L, 584L, 607L) */ ((
				var_1_12
			) - (
				/* 1026L, 127L, 586L, 609L) */ (min (
					/* 1026L, 127L, 586L, 609L) */ (
						var_1_13
					) , (
						/* 1028L, 126L, 588L, 611L) */ ((
							5.410574086893798E18f
						) - (
							var_1_16
						))
					)
				))
			))
		);
	} else {
		/* 1031L, 137L, 591L, 614L) */ if (var_1_17) {
			/* 1033L, 136L, 593L, 616L) */ var_1_15 = (
				var_1_9
			);
		}
	}


	// From: Req2Batch140Filler_PR_CI
	/* 980L, 62L, 388L, 398L) */ if (var_1_3) {
		/* 982L, 61L, 390L, 400L) */ var_1_8 = (
			/* 985L, 60L, 393L, 403L) */ ((
				var_1_9
			) + (
				var_1_10
			))
		);
	}


	// From: CodeObject5
	/* 313L, 133L) */ if (/* 314L, 116L, 117L) */ ((var_1_22) <= (32))) {
		/* 317L, 128L) */ var_1_40 = (
			/* 320L, 127L) */ (abs (
				/* 321L, 126L) */ (abs (
					var_1_22
				))
			))
		);
	} else {
		/* 323L, 132L) */ var_1_40 = (
			var_1_35
		);
	}


	// From: Req3Batch140Filler_PR_CI
	/* 989L, 85L, 427L, 438L) */ if (/* 990L, 72L, 73L, 428L, 439L) */ ((var_1_10) >= (var_1_8))) {
		/* 993L, 84L, 431L, 442L) */ var_1_11 = (
			/* 996L, 83L, 434L, 445L) */ ((
				var_1_12
			) - (
				var_1_13
			))
		);
	}


	// From: CodeObject1
	/* 264L, 55L) */ if (/* 265L, 36L, 37L) */ ((var_1_3) || (/* 267L, 35L, 39L) */ ((var_1_12) >= (var_1_13))))) {
		/* 270L, 54L) */ var_1_26 = (
			/* 273L, 53L) */ (min (
				/* 273L, 53L) */ (
					/* 274L, 51L) */ (min (
						/* 274L, 51L) */ (
							var_1_21
						) , (
							-2
						)
					))
				) , (
					var_1_20
				)
			))
		);
	}


	// From: CodeObject8
	/* 374L, 258L) */ if (/* 375L, 207L, 208L) */ ((/* 376L, 205L, 209L) */ (abs (var_1_10))) >= (var_1_13))) {
		/* 379L, 252L) */ if (/* 380L, 222L, 223L) */ ((/* 381L, 220L, 224L) */ ((/* 382L, 218L, 225L) */ ((var_1_10) / (var_1_46))) + (var_1_12))) < (var_1_10))) {
			/* 387L, 250L) */ if (/* 388L, 239L, 240L) */ ((63.2) != (var_1_46))) {
				/* 391L, 249L) */ var_1_44 = (
					var_1_35
				);
			}
		}
	} else {
		/* 395L, 257L) */ var_1_44 = (
			var_1_35
		);
	}


	// From: Req7Batch140Filler_PR_CI
	/* 1086L, 250L, 853L, 864L) */ var_1_23 = (
		/* 1089L, 249L, 856L, 867L) */ (max (
			/* 1089L, 249L, 856L, 867L) */ (
				/* 1090L, 247L, 857L, 868L) */ (max (
					/* 1090L, 247L, 857L, 868L) */ (
						var_1_7
					) , (
						var_1_21
					)
				))
			) , (
				var_1_24
			)
		))
	);


	// From: CodeObject7
	/* 358L, 200L) */ if (/* 359L, 181L, 182L) */ ((var_1_34) < (/* 361L, 180L, 184L) */ ((var_1_7) | (var_1_23))))) {
		/* 364L, 199L) */ var_1_42 = (
			/* 367L, 198L) */ ((
				var_1_20
			) + (
				/* 369L, 197L) */ ((
					var_1_43
				) - (
					32
				))
			))
		);
	}


	// From: Req8Batch140Filler_PR_CI
	/* 1096L, 262L, 896L, 902L) */ var_1_25 = (
		-1
	);


	// From: CodeObject3
	/* 292L, 102L) */ if (/* 293L, 84L, 85L) */ (! (var_1_3))) {
		/* 295L, 94L) */ var_1_36 = (
			/* 298L, 93L) */ (max (
				/* 298L, 93L) */ (
					var_1_10
				) , (
					var_1_13
				)
			))
		);
	} else {
		/* 301L, 101L) */ var_1_36 = (
			/* 304L, 100L) */ (abs (
				/* 305L, 99L) */ (max (
					/* 305L, 99L) */ (
						var_1_13
					) , (
						var_1_10
					)
				))
			))
		);
	}


	// From: Req6Batch140Filler_PR_CI
	/* 1041L, 231L, 670L, 716L) */ if (/* 1042L, 156L, 157L, 671L, 717L) */ ((var_1_6) > (var_1_14))) {
		/* 1045L, 229L, 674L, 720L) */ if (/* 1046L, 169L, 170L, 675L, 721L) */ ((/* 1047L, 167L, 171L, 676L, 722L) */ ((/* 1048L, 165L, 172L, 677L, 723L) */ ((var_1_6) - (var_1_7))) | (var_1_23))) >= (var_1_14))) {
			/* 1053L, 219L, 682L, 728L) */ if (/* 1054L, 190L, 191L, 683L, 729L) */ ((var_1_3) && (/* 1056L, 189L, 193L, 685L, 731L) */ ((var_1_15) >= (/* 1058L, 188L, 195L, 687L, 733L) */ ((var_1_13) - (var_1_19))))))) {
				/* 1061L, 210L, 690L, 736L) */ var_1_18 = (
					/* 1064L, 209L, 693L, 739L) */ ((
						var_1_20
					) - (
						var_1_21
					))
				);
			} else {
				/* 1067L, 218L, 696L, 742L) */ var_1_18 = (
					/* 1070L, 217L, 699L, 745L) */ (min (
						/* 1070L, 217L, 699L, 745L) */ (
							/* 1071L, 215L, 700L, 746L) */ (min (
								/* 1071L, 215L, 700L, 746L) */ (
									var_1_20
								) , (
									var_1_21
								)
							))
						) , (
							-16
						)
					))
				);
			}
		} else {
			/* 1075L, 228L, 704L, 750L) */ var_1_18 = (
				/* 1078L, 227L, 707L, 753L) */ ((
					-10
				) + (
					/* 1080L, 226L, 709L, 755L) */ ((
						var_1_22
					) + (
						5
					))
				))
			);
		}
	}


	// From: CodeObject2
	/* 279L, 77L) */ if (/* 280L, 61L, 62L) */ ((var_1_21) > (25))) {
		/* 283L, 76L) */ var_1_32 = (
			/* 286L, 75L) */ (min (
				/* 286L, 75L) */ (
					/* 287L, 71L) */ (abs (
						var_1_33
					))
				) , (
					/* 289L, 74L) */ ((
						var_1_34
					) - (
						var_1_35
					))
				)
			))
		);
	}


	// From: CodeObject6
	/* 327L, 170L) */ if (/* 328L, 145L, 146L) */ ((/* 329L, 140L, 147L) */ ((var_1_23) ^ (var_1_34))) < (/* 332L, 144L, 150L) */ ((/* 333L, 142L, 151L) */ (abs (var_1_35))) | (var_1_33))))) {
		/* 336L, 169L) */ var_1_41 = (
			/* 339L, 168L) */ (max (
				/* 339L, 168L) */ (
					var_1_21
				) , (
					/* 341L, 167L) */ ((
						var_1_23
					) + (
						var_1_22
					))
				)
			))
		);
	}


	// From: Req1Batch140Filler_PR_CI
	/* 950L, 45L, 268L, 298L) */ if (/* 951L, 4L, 5L, 269L, 299L) */ ((var_1_2) && (var_1_3))) {
		/* 954L, 39L, 272L, 302L) */ if (/* 955L, 13L, 14L, 273L, 303L) */ ((var_1_23) < (var_1_18))) {
			/* 958L, 33L, 276L, 306L) */ if (var_1_3) {
				/* 960L, 28L, 278L, 308L) */ var_1_1 = (
					/* 963L, 27L, 281L, 311L) */ ((
						var_1_6
					) - (
						var_1_7
					))
				);
			} else {
				/* 966L, 32L, 284L, 314L) */ var_1_1 = (
					var_1_7
				);
			}
		} else {
			/* 970L, 38L, 288L, 318L) */ var_1_1 = (
				var_1_7
			);
		}
	} else {
		/* 974L, 44L, 292L, 322L) */ var_1_1 = (
			var_1_18
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 1);
	var_1_6 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_6 >= -1);
	assume_abort_if_not(var_1_6 <= 32766);
	var_1_7 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32766);
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_19 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= -1);
	assume_abort_if_not(var_1_20 <= 126);
	var_1_21 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 126);
	var_1_22 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_22 >= -31);
	assume_abort_if_not(var_1_22 <= 32);
	var_1_24 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 4294967294);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 16383);
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 401L, 4L, 8L, 329L, 359L, 1103L) */ ((var_1_2) && (var_1_3))) {
		if (/* 405L, 13L, 17L, 333L, 363L, 1107L) */ ((var_1_23) < (var_1_18))) {
			if (var_1_3) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (var_1_3) {
	}
	if (/* 440L, 72L, 76L, 450L, 461L, 1142L) */ ((var_1_10) >= (var_1_8))) {
	}
	if (/* 468L, 113L, 117L, 624L, 647L, 1170L) */ ((var_1_14) <= (var_1_6))) {
	} else {
		if (var_1_17) {
		}
	}
	if (/* 492L, 156L, 160L, 763L, 809L, 1194L) */ ((var_1_6) > (var_1_14))) {
		if (/* 496L, 169L, 177L, 767L, 813L, 1198L) */ ((/* 497L, 167L, 178L, 768L, 814L, 1199L) */ ((/* 498L, 165L, 179L, 769L, 815L, 1200L) */ ((var_1_6) - (var_1_7))) | (var_1_23))) >= (var_1_14))) {
			if (/* 504L, 190L, 198L, 775L, 821L, 1206L) */ ((var_1_3) && (/* 506L, 189L, 200L, 777L, 823L, 1208L) */ ((var_1_15) >= (/* 508L, 188L, 202L, 779L, 825L, 1210L) */ ((var_1_13) - (var_1_19))))))) {
			} else {
			}
		} else {
		}
	}
	return /* 557L) */ ((
	/* 556L) */ ((
		/* 555L) */ ((
			/* 554L) */ ((
				/* 553L) */ ((
					/* 552L) */ ((
						/* 551L) */ ((
							/* 400L, 46L, 328L, 358L, 1102L) */ ((
								/* 401L, 4L, 8L, 329L, 359L, 1103L) */ ((
									var_1_2
								) && (
									var_1_3
								))
							) ? (
								/* 404L, 40L, 332L, 362L, 1106L) */ ((
									/* 405L, 13L, 17L, 333L, 363L, 1107L) */ ((
										var_1_23
									) < (
										var_1_18
									))
								) ? (
									/* 408L, 34L, 336L, 366L, 1110L) */ ((
										var_1_3
									) ? (
										/* 410L, 28L, 338L, 368L, 1112L) */ ((
											var_1_1
										) == (
											/* 410L, 28L, 338L, 368L, 1112L) */ ((signed short int) (
												/* 413L, 27L, 341L, 371L, 1115L) */ ((
													var_1_6
												) - (
													var_1_7
												))
											))
										))
									) : (
										/* 416L, 32L, 344L, 374L, 1118L) */ ((
											var_1_1
										) == (
											/* 416L, 32L, 344L, 374L, 1118L) */ ((signed short int) (
												var_1_7
											))
										))
									))
								) : (
									/* 420L, 38L, 348L, 378L, 1122L) */ ((
										var_1_1
									) == (
										/* 420L, 38L, 348L, 378L, 1122L) */ ((signed short int) (
											var_1_7
										))
									))
								))
							) : (
								/* 424L, 44L, 352L, 382L, 1126L) */ ((
									var_1_1
								) == (
									/* 424L, 44L, 352L, 382L, 1126L) */ ((signed short int) (
										var_1_18
									))
								))
							))
						) && (
							/* 430L, 63L, 408L, 418L, 1132L) */ ((
								var_1_3
							) ? (
								/* 432L, 61L, 410L, 420L, 1134L) */ ((
									var_1_8
								) == (
									/* 432L, 61L, 410L, 420L, 1134L) */ ((double) (
										/* 435L, 60L, 413L, 423L, 1137L) */ ((
											var_1_9
										) + (
											var_1_10
										))
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 439L, 86L, 449L, 460L, 1141L) */ ((
							/* 440L, 72L, 76L, 450L, 461L, 1142L) */ ((
								var_1_10
							) >= (
								var_1_8
							))
						) ? (
							/* 443L, 84L, 453L, 464L, 1145L) */ ((
								var_1_11
							) == (
								/* 443L, 84L, 453L, 464L, 1145L) */ ((double) (
									/* 446L, 83L, 456L, 467L, 1148L) */ ((
										var_1_12
									) - (
										var_1_13
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 454L, 98L, 553L, 566L, 943L, 1156L, 24L) */ ((
						var_1_14
					) == (
						/* 454L, 98L, 553L, 566L, 943L, 1156L, 24L) */ ((signed short int) (
							/* 457L, 97L, 556L, 569L, 942L, 1159L, 23L) */ (max (
								/* 457L, 97L, 556L, 569L, 942L, 1159L, 23L) */ (
									var_1_6
								) , (
									/* 459L, 96L, 558L, 571L, 941L, 1161L, 22L) */ (min (
										/* 459L, 96L, 558L, 571L, 941L, 1161L, 22L) */ (
											last_1_var_1_18
										) , (
											last_1_var_1_1
										)
									))
								)
							))
						))
					))
				))
			) && (
				/* 467L, 140L, 623L, 646L, 1169L) */ ((
					/* 468L, 113L, 117L, 624L, 647L, 1170L) */ ((
						var_1_14
					) <= (
						var_1_6
					))
				) ? (
					/* 471L, 129L, 627L, 650L, 1173L) */ ((
						var_1_15
					) == (
						/* 471L, 129L, 627L, 650L, 1173L) */ ((float) (
							/* 474L, 128L, 630L, 653L, 1176L) */ ((
								var_1_12
							) - (
								/* 476L, 127L, 632L, 655L, 1178L) */ (min (
									/* 476L, 127L, 632L, 655L, 1178L) */ (
										var_1_13
									) , (
										/* 478L, 126L, 634L, 657L, 1180L) */ ((
											5.410574086893798E18f
										) - (
											var_1_16
										))
									)
								))
							))
						))
					))
				) : (
					/* 481L, 138L, 637L, 660L, 1183L) */ ((
						var_1_17
					) ? (
						/* 483L, 136L, 639L, 662L, 1185L) */ ((
							var_1_15
						) == (
							/* 483L, 136L, 639L, 662L, 1185L) */ ((float) (
								var_1_9
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 491L, 232L, 762L, 808L, 1193L) */ ((
				/* 492L, 156L, 160L, 763L, 809L, 1194L) */ ((
					var_1_6
				) > (
					var_1_14
				))
			) ? (
				/* 495L, 230L, 766L, 812L, 1197L) */ ((
					/* 496L, 169L, 177L, 767L, 813L, 1198L) */ ((
						/* 497L, 167L, 178L, 768L, 814L, 1199L) */ ((
							/* 498L, 165L, 179L, 769L, 815L, 1200L) */ ((
								var_1_6
							) - (
								var_1_7
							))
						) | (
							var_1_23
						))
					) >= (
						var_1_14
					))
				) ? (
					/* 503L, 220L, 774L, 820L, 1205L) */ ((
						/* 504L, 190L, 198L, 775L, 821L, 1206L) */ ((
							var_1_3
						) && (
							/* 506L, 189L, 200L, 777L, 823L, 1208L) */ ((
								var_1_15
							) >= (
								/* 508L, 188L, 202L, 779L, 825L, 1210L) */ ((
									var_1_13
								) - (
									var_1_19
								))
							))
						))
					) ? (
						/* 511L, 210L, 782L, 828L, 1213L) */ ((
							var_1_18
						) == (
							/* 511L, 210L, 782L, 828L, 1213L) */ ((signed char) (
								/* 514L, 209L, 785L, 831L, 1216L) */ ((
									var_1_20
								) - (
									var_1_21
								))
							))
						))
					) : (
						/* 517L, 218L, 788L, 834L, 1219L) */ ((
							var_1_18
						) == (
							/* 517L, 218L, 788L, 834L, 1219L) */ ((signed char) (
								/* 520L, 217L, 791L, 837L, 1222L) */ (min (
									/* 520L, 217L, 791L, 837L, 1222L) */ (
										/* 521L, 215L, 792L, 838L, 1223L) */ (min (
											/* 521L, 215L, 792L, 838L, 1223L) */ (
												var_1_20
											) , (
												var_1_21
											)
										))
									) , (
										-16
									)
								))
							))
						))
					))
				) : (
					/* 525L, 228L, 796L, 842L, 1227L) */ ((
						var_1_18
					) == (
						/* 525L, 228L, 796L, 842L, 1227L) */ ((signed char) (
							/* 528L, 227L, 799L, 845L, 1230L) */ ((
								-10
							) + (
								/* 530L, 226L, 801L, 847L, 1232L) */ ((
									var_1_22
								) + (
									5
								))
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 536L, 250L, 875L, 886L, 1238L) */ ((
			var_1_23
		) == (
			/* 536L, 250L, 875L, 886L, 1238L) */ ((unsigned long int) (
				/* 539L, 249L, 878L, 889L, 1241L) */ (max (
					/* 539L, 249L, 878L, 889L, 1241L) */ (
						/* 540L, 247L, 879L, 890L, 1242L) */ (max (
							/* 540L, 247L, 879L, 890L, 1242L) */ (
								var_1_7
							) , (
								var_1_21
							)
						))
					) , (
						var_1_24
					)
				))
			))
		))
	))
) && (
	/* 546L, 262L, 908L, 914L, 1248L) */ ((
		var_1_25
	) == (
		/* 546L, 262L, 908L, 914L, 1248L) */ ((signed char) (
			-1
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
