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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch140Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_27 = 0;
double var_1_28 = 999.85;
double var_1_29 = 10000000.75;
signed char var_1_30 = -8;
signed char var_1_31 = -64;
unsigned short int var_1_32 = 200;
unsigned short int var_1_33 = 10;
unsigned short int var_1_34 = 46168;
unsigned short int var_1_35 = 25;
double var_1_36 = 256.25;
double var_1_37 = 5.5;
double var_1_38 = 4.25;
unsigned long int var_1_39 = 1;
signed long int var_1_40 = -1;
signed short int var_1_41 = 0;
signed short int var_1_42 = -4;
signed short int var_1_43 = 500;
unsigned short int var_1_44 = 0;
double var_1_45 = 10.2;
double var_1_46 = 10000.5;

// Calibration values

// Last'ed variables
signed short int last_1_var_1_1 = -10;
signed char last_1_var_1_18 = -10;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req4Batch140Filler_PE_CN
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


	// From: Req5Batch140Filler_PE_CN
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


	// From: Req2Batch140Filler_PE_CN
	/* 980L, 62L, 388L, 398L) */ if (var_1_3) {
		/* 982L, 61L, 390L, 400L) */ var_1_8 = (
			/* 985L, 60L, 393L, 403L) */ ((
				var_1_9
			) + (
				var_1_10
			))
		);
	}


	// From: Req3Batch140Filler_PE_CN
	/* 989L, 85L, 427L, 438L) */ if (/* 990L, 72L, 73L, 428L, 439L) */ ((var_1_10) >= (var_1_8))) {
		/* 993L, 84L, 431L, 442L) */ var_1_11 = (
			/* 996L, 83L, 434L, 445L) */ ((
				var_1_12
			) - (
				var_1_13
			))
		);
	}


	// From: Req7Batch140Filler_PE_CN
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


	// From: Req8Batch140Filler_PE_CN
	/* 1096L, 262L, 896L, 902L) */ var_1_25 = (
		-1
	);


	// From: Req6Batch140Filler_PE_CN
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


	// From: Req1Batch140Filler_PE_CN
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


	// From: CodeObject1
	/* 55L) */ if (/* 37L, 36L) */ ((var_1_27) || (/* 39L, 35L) */ ((var_1_28) >= (var_1_29))))) {
		/* 54L) */ var_1_26 = (
			/* 53L) */ (min (
				/* 53L) */ (
					/* 51L) */ (min (
						/* 51L) */ (
							var_1_30
						) , (
							-2
						)
					))
				) , (
					var_1_31
				)
			))
		);
	}


	// From: CodeObject2
	/* 77L) */ if (/* 62L, 61L) */ ((var_1_26) > (25))) {
		/* 76L) */ var_1_32 = (
			/* 75L) */ (min (
				/* 75L) */ (
					/* 71L) */ (abs (
						var_1_33
					))
				) , (
					/* 74L) */ ((
						var_1_34
					) - (
						var_1_35
					))
				)
			))
		);
	}


	// From: CodeObject3
	/* 102L) */ if (/* 85L, 84L) */ (! (var_1_27))) {
		/* 94L) */ var_1_36 = (
			/* 93L) */ (max (
				/* 93L) */ (
					var_1_37
				) , (
					var_1_38
				)
			))
		);
	} else {
		/* 101L) */ var_1_36 = (
			/* 100L) */ (abs (
				/* 99L) */ (max (
					/* 99L) */ (
						var_1_38
					) , (
						var_1_37
					)
				))
			))
		);
	}


	// From: CodeObject4
	/* 109L) */ var_1_39 = (
		256u
	);


	// From: CodeObject5
	/* 133L) */ if (/* 117L, 116L) */ ((var_1_31) <= (32))) {
		/* 128L) */ var_1_40 = (
			/* 127L) */ (abs (
				/* 126L) */ (abs (
					var_1_31
				))
			))
		);
	} else {
		/* 132L) */ var_1_40 = (
			var_1_35
		);
	}


	// From: CodeObject6
	/* 170L) */ if (/* 146L, 145L) */ ((/* 147L, 140L) */ ((var_1_39) ^ (var_1_34))) < (/* 150L, 144L) */ ((/* 151L, 142L) */ (abs (var_1_35))) | (var_1_33))))) {
		/* 169L) */ var_1_41 = (
			/* 168L) */ (max (
				/* 168L) */ (
					var_1_30
				) , (
					/* 167L) */ ((
						var_1_26
					) + (
						var_1_31
					))
				)
			))
		);
	}


	// From: CodeObject7
	/* 200L) */ if (/* 182L, 181L) */ ((var_1_34) < (/* 184L, 180L) */ ((var_1_41) | (var_1_39))))) {
		/* 199L) */ var_1_42 = (
			/* 198L) */ ((
				var_1_30
			) + (
				/* 197L) */ ((
					var_1_43
				) - (
					32
				))
			))
		);
	}


	// From: CodeObject8
	/* 258L) */ if (/* 208L, 207L) */ ((/* 209L, 205L) */ (abs (var_1_37))) >= (var_1_45))) {
		/* 252L) */ if (/* 223L, 222L) */ ((/* 224L, 220L) */ ((/* 225L, 218L) */ ((var_1_28) / (var_1_46))) + (var_1_38))) < (var_1_37))) {
			/* 250L) */ if (/* 240L, 239L) */ ((63.2) != (var_1_46))) {
				/* 249L) */ var_1_44 = (
					var_1_35
				);
			}
		}
	} else {
		/* 257L) */ var_1_44 = (
			var_1_35
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
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_28 >= -922337.2036854776000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -127);
	assume_abort_if_not(var_1_30 <= 126);
	var_1_31 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_31 >= -127);
	assume_abort_if_not(var_1_31 <= 126);
	var_1_33 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 65534);
	var_1_34 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_34 >= 32767);
	assume_abort_if_not(var_1_34 <= 65534);
	var_1_35 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32767);
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 16383);
	var_1_45 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_45 >= -922337.2036854776000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854776000e+12F && var_1_45 >= 1.0e-20F ));
	var_1_46 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
	assume_abort_if_not(var_1_46 != 0.0F);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_18 = var_1_18;
}

int property(void) {
	if (/* 266L, 4L, 8L, 329L, 359L, 1103L) */ ((var_1_2) && (var_1_3))) {
		if (/* 270L, 13L, 17L, 333L, 363L, 1107L) */ ((var_1_23) < (var_1_18))) {
			if (var_1_3) {
			} else {
			}
		} else {
		}
	} else {
	}
	if (var_1_3) {
	}
	if (/* 305L, 72L, 76L, 450L, 461L, 1142L) */ ((var_1_10) >= (var_1_8))) {
	}
	if (/* 333L, 113L, 117L, 624L, 647L, 1170L) */ ((var_1_14) <= (var_1_6))) {
	} else {
		if (var_1_17) {
		}
	}
	if (/* 357L, 156L, 160L, 763L, 809L, 1194L) */ ((var_1_6) > (var_1_14))) {
		if (/* 361L, 169L, 177L, 767L, 813L, 1198L) */ ((/* 362L, 167L, 178L, 768L, 814L, 1199L) */ ((/* 363L, 165L, 179L, 769L, 815L, 1200L) */ ((var_1_6) - (var_1_7))) | (var_1_23))) >= (var_1_14))) {
			if (/* 369L, 190L, 198L, 775L, 821L, 1206L) */ ((var_1_3) && (/* 371L, 189L, 200L, 777L, 823L, 1208L) */ ((var_1_15) >= (/* 373L, 188L, 202L, 779L, 825L, 1210L) */ ((var_1_13) - (var_1_19))))))) {
			} else {
			}
		} else {
		}
	}
	return /* 422L) */ ((
	/* 421L) */ ((
		/* 420L) */ ((
			/* 419L) */ ((
				/* 418L) */ ((
					/* 417L) */ ((
						/* 416L) */ ((
							/* 265L, 46L, 328L, 358L, 1102L) */ ((
								/* 266L, 4L, 8L, 329L, 359L, 1103L) */ ((
									var_1_2
								) && (
									var_1_3
								))
							) ? (
								/* 269L, 40L, 332L, 362L, 1106L) */ ((
									/* 270L, 13L, 17L, 333L, 363L, 1107L) */ ((
										var_1_23
									) < (
										var_1_18
									))
								) ? (
									/* 273L, 34L, 336L, 366L, 1110L) */ ((
										var_1_3
									) ? (
										/* 275L, 28L, 338L, 368L, 1112L) */ ((
											var_1_1
										) == (
											/* 275L, 28L, 338L, 368L, 1112L) */ ((signed short int) (
												/* 278L, 27L, 341L, 371L, 1115L) */ ((
													var_1_6
												) - (
													var_1_7
												))
											))
										))
									) : (
										/* 281L, 32L, 344L, 374L, 1118L) */ ((
											var_1_1
										) == (
											/* 281L, 32L, 344L, 374L, 1118L) */ ((signed short int) (
												var_1_7
											))
										))
									))
								) : (
									/* 285L, 38L, 348L, 378L, 1122L) */ ((
										var_1_1
									) == (
										/* 285L, 38L, 348L, 378L, 1122L) */ ((signed short int) (
											var_1_7
										))
									))
								))
							) : (
								/* 289L, 44L, 352L, 382L, 1126L) */ ((
									var_1_1
								) == (
									/* 289L, 44L, 352L, 382L, 1126L) */ ((signed short int) (
										var_1_18
									))
								))
							))
						) && (
							/* 295L, 63L, 408L, 418L, 1132L) */ ((
								var_1_3
							) ? (
								/* 297L, 61L, 410L, 420L, 1134L) */ ((
									var_1_8
								) == (
									/* 297L, 61L, 410L, 420L, 1134L) */ ((double) (
										/* 300L, 60L, 413L, 423L, 1137L) */ ((
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
						/* 304L, 86L, 449L, 460L, 1141L) */ ((
							/* 305L, 72L, 76L, 450L, 461L, 1142L) */ ((
								var_1_10
							) >= (
								var_1_8
							))
						) ? (
							/* 308L, 84L, 453L, 464L, 1145L) */ ((
								var_1_11
							) == (
								/* 308L, 84L, 453L, 464L, 1145L) */ ((double) (
									/* 311L, 83L, 456L, 467L, 1148L) */ ((
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
					/* 319L, 98L, 553L, 566L, 943L, 1156L, 24L) */ ((
						var_1_14
					) == (
						/* 319L, 98L, 553L, 566L, 943L, 1156L, 24L) */ ((signed short int) (
							/* 322L, 97L, 556L, 569L, 942L, 1159L, 23L) */ (max (
								/* 322L, 97L, 556L, 569L, 942L, 1159L, 23L) */ (
									var_1_6
								) , (
									/* 324L, 96L, 558L, 571L, 941L, 1161L, 22L) */ (min (
										/* 324L, 96L, 558L, 571L, 941L, 1161L, 22L) */ (
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
				/* 332L, 140L, 623L, 646L, 1169L) */ ((
					/* 333L, 113L, 117L, 624L, 647L, 1170L) */ ((
						var_1_14
					) <= (
						var_1_6
					))
				) ? (
					/* 336L, 129L, 627L, 650L, 1173L) */ ((
						var_1_15
					) == (
						/* 336L, 129L, 627L, 650L, 1173L) */ ((float) (
							/* 339L, 128L, 630L, 653L, 1176L) */ ((
								var_1_12
							) - (
								/* 341L, 127L, 632L, 655L, 1178L) */ (min (
									/* 341L, 127L, 632L, 655L, 1178L) */ (
										var_1_13
									) , (
										/* 343L, 126L, 634L, 657L, 1180L) */ ((
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
					/* 346L, 138L, 637L, 660L, 1183L) */ ((
						var_1_17
					) ? (
						/* 348L, 136L, 639L, 662L, 1185L) */ ((
							var_1_15
						) == (
							/* 348L, 136L, 639L, 662L, 1185L) */ ((float) (
								var_1_9
							))
						))
					) : (
						1
					))
				))
			))
		) && (
			/* 356L, 232L, 762L, 808L, 1193L) */ ((
				/* 357L, 156L, 160L, 763L, 809L, 1194L) */ ((
					var_1_6
				) > (
					var_1_14
				))
			) ? (
				/* 360L, 230L, 766L, 812L, 1197L) */ ((
					/* 361L, 169L, 177L, 767L, 813L, 1198L) */ ((
						/* 362L, 167L, 178L, 768L, 814L, 1199L) */ ((
							/* 363L, 165L, 179L, 769L, 815L, 1200L) */ ((
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
					/* 368L, 220L, 774L, 820L, 1205L) */ ((
						/* 369L, 190L, 198L, 775L, 821L, 1206L) */ ((
							var_1_3
						) && (
							/* 371L, 189L, 200L, 777L, 823L, 1208L) */ ((
								var_1_15
							) >= (
								/* 373L, 188L, 202L, 779L, 825L, 1210L) */ ((
									var_1_13
								) - (
									var_1_19
								))
							))
						))
					) ? (
						/* 376L, 210L, 782L, 828L, 1213L) */ ((
							var_1_18
						) == (
							/* 376L, 210L, 782L, 828L, 1213L) */ ((signed char) (
								/* 379L, 209L, 785L, 831L, 1216L) */ ((
									var_1_20
								) - (
									var_1_21
								))
							))
						))
					) : (
						/* 382L, 218L, 788L, 834L, 1219L) */ ((
							var_1_18
						) == (
							/* 382L, 218L, 788L, 834L, 1219L) */ ((signed char) (
								/* 385L, 217L, 791L, 837L, 1222L) */ (min (
									/* 385L, 217L, 791L, 837L, 1222L) */ (
										/* 386L, 215L, 792L, 838L, 1223L) */ (min (
											/* 386L, 215L, 792L, 838L, 1223L) */ (
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
					/* 390L, 228L, 796L, 842L, 1227L) */ ((
						var_1_18
					) == (
						/* 390L, 228L, 796L, 842L, 1227L) */ ((signed char) (
							/* 393L, 227L, 799L, 845L, 1230L) */ ((
								-10
							) + (
								/* 395L, 226L, 801L, 847L, 1232L) */ ((
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
		/* 401L, 250L, 875L, 886L, 1238L) */ ((
			var_1_23
		) == (
			/* 401L, 250L, 875L, 886L, 1238L) */ ((unsigned long int) (
				/* 404L, 249L, 878L, 889L, 1241L) */ (max (
					/* 404L, 249L, 878L, 889L, 1241L) */ (
						/* 405L, 247L, 879L, 890L, 1242L) */ (max (
							/* 405L, 247L, 879L, 890L, 1242L) */ (
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
	/* 411L, 262L, 908L, 914L, 1248L) */ ((
		var_1_25
	) == (
		/* 411L, 262L, 908L, 914L, 1248L) */ ((signed char) (
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
