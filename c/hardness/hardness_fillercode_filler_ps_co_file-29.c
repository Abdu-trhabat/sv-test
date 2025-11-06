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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch29Filler_PS_CO.c", 13, "reach_error"); }
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
unsigned char var_1_1 = 0;
double var_1_4 = 99999.75;
double var_1_5 = 31.75;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
signed short int var_1_8 = 0;
signed short int var_1_9 = 0;
signed short int var_1_10 = 8;
signed char var_1_11 = 1;
signed char var_1_12 = 32;
signed char var_1_13 = -2;
signed char var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 10;
signed char var_1_17 = 32;
unsigned char var_1_18 = 0;
signed char var_1_19 = -1;
signed short int var_1_20 = 100;
double var_1_21 = 9.25;
signed short int var_1_22 = 29265;
float var_1_23 = 31.6;
float var_1_24 = 9.2;
float var_1_25 = 15.6;
float var_1_26 = 25.25;
unsigned long int var_1_27 = 256;
double var_1_29 = 15.86;
double var_1_30 = 64.25;
signed short int var_1_31 = 10;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
signed short int var_1_34 = 16;
signed short int var_1_35 = 8;
signed short int var_1_36 = 1000;
signed short int var_1_37 = 64;
signed short int var_1_38 = 128;
float var_1_39 = 4.7;
unsigned short int var_1_40 = 100;
signed short int var_1_41 = 4;
unsigned char var_1_42 = 0;
unsigned long int var_1_43 = 64;
unsigned long int var_1_44 = 5;
float var_1_45 = 31.6;
float var_1_46 = 24.875;
unsigned short int var_1_47 = 64;
double var_1_48 = 16.75;

// Calibration values

// Last'ed variables
unsigned char last_1_var_1_18 = 0;
unsigned long int last_1_var_1_27 = 256;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 315L, 77L) */ var_1_29 = (
		var_1_30
	);


	// From: CodeObject2
	/* 402L, 149L) */ if (/* 403L, 84L, 85L) */ ((var_1_32) && (var_1_33))) {
		/* 406L, 100L) */ var_1_31 = (
			/* 409L, 99L) */ (abs (
				/* 410L, 98L) */ (max (
					/* 410L, 98L) */ (
						/* 411L, 95L) */ ((
							var_1_34
						) - (
							var_1_35
						))
					) , (
						/* 414L, 97L) */ (abs (
							var_1_36
						))
					)
				))
			))
		);
	} else {
		/* 416L, 147L) */ if (/* 417L, 104L, 105L) */ ((/* 418L, 102L, 106L) */ (abs (var_1_36))) > (var_1_34))) {
			/* 421L, 145L) */ if (/* 422L, 118L, 119L) */ ((/* 423L, 114L, 120L) */ (! (var_1_33))) && (/* 425L, 117L, 122L) */ ((var_1_30) > (var_1_29))))) {
				/* 428L, 140L) */ var_1_31 = (
					/* 431L, 139L) */ ((
						/* 432L, 135L) */ (min (
							/* 432L, 135L) */ (
								var_1_35
							) , (
								var_1_34
							)
						))
					) - (
						/* 435L, 138L) */ ((
							var_1_37
						) + (
							var_1_38
						))
					))
				);
			} else {
				/* 438L, 144L) */ var_1_31 = (
					var_1_35
				);
			}
		}
	}


	// From: CodeObject3
	/* 442L, 183L) */ if (/* 443L, 157L, 158L) */ ((var_1_29) < (var_1_30))) {
		/* 446L, 177L) */ if (/* 447L, 166L, 167L) */ ((var_1_20) > (var_1_34))) {
			/* 450L, 176L) */ var_1_39 = (
				var_1_30
			);
		}
	} else {
		/* 454L, 182L) */ var_1_39 = (
			15.6f
		);
	}


	// From: CodeObject4
	/* 459L, 190L) */ var_1_40 = (
		var_1_35
	);


	// From: CodeObject5
	/* 463L, 277L) */ if (var_1_18) {
		/* 465L, 217L) */ if (var_1_1) {
			/* 467L, 215L) */ if (/* 468L, 203L, 204L) */ ((10000000) <= (var_1_35))) {
				/* 471L, 214L) */ var_1_41 = (
					/* 474L, 213L) */ (abs (
						var_1_36
					))
				);
			}
		}
	} else {
		/* 476L, 275L) */ if (/* 477L, 223L, 224L) */ ((var_1_27) > (/* 479L, 222L, 226L) */ ((var_1_34) | (var_1_8))))) {
			/* 482L, 269L) */ if (/* 483L, 242L, 243L) */ ((/* 484L, 238L, 244L) */ ((/* 485L, 236L, 245L) */ ((1u) ^ (var_1_34))) / (var_1_43))) > (/* 489L, 241L, 249L) */ ((var_1_35) / (var_1_44))))) {
				/* 492L, 264L) */ var_1_41 = (
					var_1_34
				);
			} else {
				/* 496L, 268L) */ var_1_41 = (
					var_1_35
				);
			}
		} else {
			/* 500L, 274L) */ var_1_41 = (
				var_1_38
			);
		}
	}


	// From: CodeObject6
	/* 524L, 296L) */ if (/* 525L, 283L, 284L) */ ((var_1_42) || (var_1_33))) {
		/* 528L, 295L) */ var_1_45 = (
			/* 531L, 294L) */ ((
				10.125f
			) + (
				var_1_46
			))
		);
	}


	// From: CodeObject7
	/* 535L, 303L) */ var_1_47 = (
		var_1_37
	);


	// From: CodeObject8
	/* 540L, 311L) */ var_1_48 = (
		var_1_46
	);


	// From: Req3Batch29Filler_PS_CO
	/* 33L, 88L, 392L, 426L, 900L, 971L) */ if (last_1_var_1_18) {
		/* 9L, 55L, 394L, 428L, 876L, 974L) */ var_1_11 = (
			/* 8L, 54L, 397L, 431L, 875L, 977L) */ ((
				var_1_12
			) + (
				/* 7L, 53L, 399L, 433L, 874L, 979L) */ (min (
					/* 7L, 53L, 399L, 433L, 874L, 979L) */ (
						var_1_13
					) , (
						var_1_14
					)
				))
			))
		);
	} else {
		/* 32L, 86L, 402L, 436L, 899L, 982L) */ if (/* 13L, 58L, 59L, 403L, 437L, 880L, 983L) */ ((last_1_var_1_27) >= (var_1_14))) {
			/* 21L, 72L, 406L, 440L, 888L, 987L) */ var_1_11 = (
				/* 20L, 71L, 409L, 443L, 887L, 990L) */ ((
					/* 18L, 69L, 410L, 444L, 885L, 991L) */ ((
						var_1_15
					) + (
						var_1_16
					))
				) - (
					var_1_17
				))
			);
		} else {
			/* 31L, 84L, 414L, 448L, 898L, 995L) */ if (var_1_7) {
				/* 26L, 79L, 416L, 450L, 893L, 997L) */ var_1_11 = (
					var_1_16
				);
			} else {
				/* 30L, 83L, 420L, 454L, 897L, 1001L) */ var_1_11 = (
					var_1_12
				);
			}
		}
	}


	// From: Req4Batch29Filler_PS_CO
	/* 1009L, 126L, 530L, 548L) */ if (/* 1010L, 98L, 99L, 531L, 549L) */ ((var_1_4) == (var_1_5))) {
		/* 1013L, 124L, 534L, 552L) */ if (/* 1014L, 109L, 110L, 535L, 553L) */ ((var_1_15) >= (/* 1016L, 108L, 112L, 537L, 555L) */ ((var_1_11) / (var_1_19))))) {
			/* 1019L, 123L, 540L, 558L) */ var_1_18 = (
				var_1_7
			);
		}
	}


	// From: Req2Batch29Filler_PS_CO
	/* 961L, 36L, 349L, 360L) */ var_1_8 = (
		/* 964L, 35L, 352L, 363L) */ ((
			var_1_9
		) - (
			/* 966L, 34L, 354L, 365L) */ ((
				2
			) + (
				var_1_10
			))
		))
	);


	// From: Req5Batch29Filler_PS_CO
	/* 1028L, 176L, 603L, 631L) */ if (/* 1029L, 145L, 146L, 604L, 632L) */ ((/* 1030L, 141L, 147L, 605L, 633L) */ (- (/* 1031L, 140L, 148L, 606L, 634L) */ (min (/* 1031L, 140L, 148L, 606L, 634L) */ (var_1_4) , (var_1_5)))))) > (/* 1034L, 144L, 151L, 609L, 637L) */ ((1.625) * (var_1_21))))) {
		/* 1037L, 171L, 612L, 640L) */ var_1_20 = (
			/* 1040L, 170L, 615L, 643L) */ ((
				/* 1041L, 168L, 616L, 644L) */ ((
					var_1_22
				) - (
					/* 1043L, 167L, 618L, 646L) */ ((
						var_1_16
					) + (
						var_1_15
					))
				))
			) - (
				var_1_10
			))
		);
	} else {
		/* 1047L, 175L, 622L, 650L) */ var_1_20 = (
			var_1_19
		);
	}


	// From: Req6Batch29Filler_PS_CO
	/* 1057L, 222L, 716L, 742L) */ if (/* 1058L, 192L, 193L, 717L, 743L) */ ((var_1_22) != (var_1_12))) {
		/* 1061L, 216L, 720L, 746L) */ if (/* 1062L, 201L, 202L, 721L, 747L) */ ((var_1_10) <= (var_1_17))) {
			/* 1065L, 215L, 724L, 750L) */ var_1_23 = (
				/* 1068L, 214L, 727L, 753L) */ ((
					var_1_24
				) + (
					/* 1070L, 213L, 729L, 755L) */ (max (
						/* 1070L, 213L, 729L, 755L) */ (
							var_1_25
						) , (
							var_1_26
						)
					))
				))
			);
		}
	} else {
		/* 1073L, 221L, 732L, 758L) */ var_1_23 = (
			var_1_25
		);
	}


	// From: Req7Batch29Filler_PS_CO
	/* 1079L, 261L, 816L, 829L) */ if (/* 1080L, 244L, 245L, 817L, 830L) */ (! (/* 1081L, 243L, 246L, 818L, 831L) */ ((/* 1082L, 241L, 247L, 819L, 832L) */ ((var_1_9) - (var_1_22))) > (var_1_12))))) {
		/* 1086L, 260L, 823L, 836L) */ var_1_27 = (
			var_1_15
		);
	}


	// From: Req1Batch29Filler_PS_CO
	/* 940L, 21L, 268L, 288L) */ if (var_1_18) {
		/* 942L, 16L, 270L, 290L) */ var_1_1 = (
			/* 945L, 15L, 273L, 293L) */ ((
				/* 946L, 13L, 274L, 294L) */ ((
					/* 947L, 9L, 275L, 295L) */ ((
						-128
					) <= (
						var_1_27
					))
				) || (
					/* 950L, 12L, 278L, 298L) */ ((
						var_1_4
					) >= (
						var_1_5
					))
				))
			) && (
				var_1_6
			))
		);
	} else {
		/* 954L, 20L, 282L, 302L) */ var_1_1 = (
			var_1_7
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 0);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 1);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_9 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 32766);
	var_1_10 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 16383);
	var_1_12 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_12 >= -63);
	assume_abort_if_not(var_1_12 <= 63);
	var_1_13 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_13 >= -63);
	assume_abort_if_not(var_1_13 <= 63);
	var_1_14 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_14 >= -63);
	assume_abort_if_not(var_1_14 <= 63);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= 0);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= -128);
	assume_abort_if_not(var_1_19 <= 127);
	assume_abort_if_not(var_1_19 != 0);
	var_1_21 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= 16382);
	assume_abort_if_not(var_1_22 <= 32766);
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_26 >= -461168.6018427383000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_30 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 32766);
	var_1_35 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 32766);
	var_1_36 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_36 >= -32766);
	assume_abort_if_not(var_1_36 <= 32766);
	var_1_37 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 16383);
	var_1_38 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_38 >= 0);
	assume_abort_if_not(var_1_38 <= 16383);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 1);
	var_1_43 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 4294967295);
	assume_abort_if_not(var_1_43 != 0);
	var_1_44 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 4294967295);
	assume_abort_if_not(var_1_44 != 0);
	var_1_46 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_46 >= -461168.6018427383000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_27 = var_1_27;
}

int property(void) {
	if (var_1_18) {
	} else {
	}
	if (last_1_var_1_18) {
	} else {
		if (/* 588L, 58L, 62L, 471L, 505L, 916L, 1135L, 49L) */ ((last_1_var_1_27) >= (var_1_14))) {
		} else {
			if (var_1_7) {
			} else {
			}
		}
	}
	if (/* 615L, 98L, 102L, 567L, 585L, 1162L) */ ((var_1_4) == (var_1_5))) {
		if (/* 619L, 109L, 115L, 571L, 589L, 1166L) */ ((var_1_15) >= (/* 621L, 108L, 117L, 573L, 591L, 1168L) */ ((var_1_11) / (var_1_19))))) {
		}
	}
	if (/* 634L, 145L, 154L, 660L, 688L, 1181L) */ ((/* 635L, 141L, 155L, 661L, 689L, 1182L) */ (- (/* 636L, 140L, 156L, 662L, 690L, 1183L) */ (min (/* 636L, 140L, 156L, 662L, 690L, 1183L) */ (var_1_4) , (var_1_5)))))) > (/* 639L, 144L, 159L, 665L, 693L, 1186L) */ ((1.625) * (var_1_21))))) {
	} else {
	}
	if (/* 663L, 192L, 196L, 769L, 795L, 1210L) */ ((var_1_22) != (var_1_12))) {
		if (/* 667L, 201L, 205L, 773L, 799L, 1214L) */ ((var_1_10) <= (var_1_17))) {
		}
	} else {
	}
	if (/* 685L, 244L, 251L, 843L, 856L, 1232L) */ (! (/* 686L, 243L, 252L, 844L, 857L, 1233L) */ ((/* 687L, 241L, 253L, 845L, 858L, 1234L) */ ((var_1_9) - (var_1_22))) > (var_1_12))))) {
	}
	return /* 701L) */ ((
	/* 700L) */ ((
		/* 699L) */ ((
			/* 698L) */ ((
				/* 697L) */ ((
					/* 696L) */ ((
						/* 545L, 22L, 308L, 328L, 1092L) */ ((
							var_1_18
						) ? (
							/* 547L, 16L, 310L, 330L, 1094L) */ ((
								var_1_1
							) == (
								/* 547L, 16L, 310L, 330L, 1094L) */ ((unsigned char) (
									/* 550L, 15L, 313L, 333L, 1097L) */ ((
										/* 551L, 13L, 314L, 334L, 1098L) */ ((
											/* 552L, 9L, 315L, 335L, 1099L) */ ((
												-128
											) <= (
												var_1_27
											))
										) || (
											/* 555L, 12L, 318L, 338L, 1102L) */ ((
												var_1_4
											) >= (
												var_1_5
											))
										))
									) && (
										var_1_6
									))
								))
							))
						) : (
							/* 559L, 20L, 322L, 342L, 1106L) */ ((
								var_1_1
							) == (
								/* 559L, 20L, 322L, 342L, 1106L) */ ((unsigned char) (
									var_1_7
								))
							))
						))
					) && (
						/* 566L, 36L, 371L, 382L, 1113L) */ ((
							var_1_8
						) == (
							/* 566L, 36L, 371L, 382L, 1113L) */ ((signed short int) (
								/* 569L, 35L, 374L, 385L, 1116L) */ ((
									var_1_9
								) - (
									/* 571L, 34L, 376L, 387L, 1118L) */ ((
										2
									) + (
										var_1_10
									))
								))
							))
						))
					))
				) && (
					/* 576L, 89L, 460L, 494L, 936L, 1123L, 69L) */ ((
						last_1_var_1_18
					) ? (
						/* 579L, 55L, 462L, 496L, 912L, 1126L, 45L) */ ((
							var_1_11
						) == (
							/* 579L, 55L, 462L, 496L, 912L, 1126L, 45L) */ ((signed char) (
								/* 582L, 54L, 465L, 499L, 911L, 1129L, 44L) */ ((
									var_1_12
								) + (
									/* 584L, 53L, 467L, 501L, 910L, 1131L, 43L) */ (min (
										/* 584L, 53L, 467L, 501L, 910L, 1131L, 43L) */ (
											var_1_13
										) , (
											var_1_14
										)
									))
								))
							))
						))
					) : (
						/* 587L, 87L, 470L, 504L, 935L, 1134L, 68L) */ ((
							/* 588L, 58L, 62L, 471L, 505L, 916L, 1135L, 49L) */ ((
								last_1_var_1_27
							) >= (
								var_1_14
							))
						) ? (
							/* 592L, 72L, 474L, 508L, 924L, 1139L, 57L) */ ((
								var_1_11
							) == (
								/* 592L, 72L, 474L, 508L, 924L, 1139L, 57L) */ ((signed char) (
									/* 595L, 71L, 477L, 511L, 923L, 1142L, 56L) */ ((
										/* 596L, 69L, 478L, 512L, 921L, 1143L, 54L) */ ((
											var_1_15
										) + (
											var_1_16
										))
									) - (
										var_1_17
									))
								))
							))
						) : (
							/* 600L, 85L, 482L, 516L, 934L, 1147L, 67L) */ ((
								var_1_7
							) ? (
								/* 602L, 79L, 484L, 518L, 929L, 1149L, 62L) */ ((
									var_1_11
								) == (
									/* 602L, 79L, 484L, 518L, 929L, 1149L, 62L) */ ((signed char) (
										var_1_16
									))
								))
							) : (
								/* 606L, 83L, 488L, 522L, 933L, 1153L, 66L) */ ((
									var_1_11
								) == (
									/* 606L, 83L, 488L, 522L, 933L, 1153L, 66L) */ ((signed char) (
										var_1_12
									))
								))
							))
						))
					))
				))
			) && (
				/* 614L, 127L, 566L, 584L, 1161L) */ ((
					/* 615L, 98L, 102L, 567L, 585L, 1162L) */ ((
						var_1_4
					) == (
						var_1_5
					))
				) ? (
					/* 618L, 125L, 570L, 588L, 1165L) */ ((
						/* 619L, 109L, 115L, 571L, 589L, 1166L) */ ((
							var_1_15
						) >= (
							/* 621L, 108L, 117L, 573L, 591L, 1168L) */ ((
								var_1_11
							) / (
								var_1_19
							))
						))
					) ? (
						/* 624L, 123L, 576L, 594L, 1171L) */ ((
							var_1_18
						) == (
							/* 624L, 123L, 576L, 594L, 1171L) */ ((unsigned char) (
								var_1_7
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
			/* 633L, 177L, 659L, 687L, 1180L) */ ((
				/* 634L, 145L, 154L, 660L, 688L, 1181L) */ ((
					/* 635L, 141L, 155L, 661L, 689L, 1182L) */ (- (
						/* 636L, 140L, 156L, 662L, 690L, 1183L) */ (min (
							/* 636L, 140L, 156L, 662L, 690L, 1183L) */ (
								var_1_4
							) , (
								var_1_5
							)
						))
					))
				) > (
					/* 639L, 144L, 159L, 665L, 693L, 1186L) */ ((
						1.625
					) * (
						var_1_21
					))
				))
			) ? (
				/* 642L, 171L, 668L, 696L, 1189L) */ ((
					var_1_20
				) == (
					/* 642L, 171L, 668L, 696L, 1189L) */ ((signed short int) (
						/* 645L, 170L, 671L, 699L, 1192L) */ ((
							/* 646L, 168L, 672L, 700L, 1193L) */ ((
								var_1_22
							) - (
								/* 648L, 167L, 674L, 702L, 1195L) */ ((
									var_1_16
								) + (
									var_1_15
								))
							))
						) - (
							var_1_10
						))
					))
				))
			) : (
				/* 652L, 175L, 678L, 706L, 1199L) */ ((
					var_1_20
				) == (
					/* 652L, 175L, 678L, 706L, 1199L) */ ((signed short int) (
						var_1_19
					))
				))
			))
		))
	) && (
		/* 662L, 223L, 768L, 794L, 1209L) */ ((
			/* 663L, 192L, 196L, 769L, 795L, 1210L) */ ((
				var_1_22
			) != (
				var_1_12
			))
		) ? (
			/* 666L, 217L, 772L, 798L, 1213L) */ ((
				/* 667L, 201L, 205L, 773L, 799L, 1214L) */ ((
					var_1_10
				) <= (
					var_1_17
				))
			) ? (
				/* 670L, 215L, 776L, 802L, 1217L) */ ((
					var_1_23
				) == (
					/* 670L, 215L, 776L, 802L, 1217L) */ ((float) (
						/* 673L, 214L, 779L, 805L, 1220L) */ ((
							var_1_24
						) + (
							/* 675L, 213L, 781L, 807L, 1222L) */ (max (
								/* 675L, 213L, 781L, 807L, 1222L) */ (
									var_1_25
								) , (
									var_1_26
								)
							))
						))
					))
				))
			) : (
				1
			))
		) : (
			/* 678L, 221L, 784L, 810L, 1225L) */ ((
				var_1_23
			) == (
				/* 678L, 221L, 784L, 810L, 1225L) */ ((float) (
					var_1_25
				))
			))
		))
	))
) && (
	/* 684L, 262L, 842L, 855L, 1231L) */ ((
		/* 685L, 244L, 251L, 843L, 856L, 1232L) */ (! (
			/* 686L, 243L, 252L, 844L, 857L, 1233L) */ ((
				/* 687L, 241L, 253L, 845L, 858L, 1234L) */ ((
					var_1_9
				) - (
					var_1_22
				))
			) > (
				var_1_12
			))
		))
	) ? (
		/* 691L, 260L, 849L, 862L, 1238L) */ ((
			var_1_27
		) == (
			/* 691L, 260L, 849L, 862L, 1238L) */ ((unsigned long int) (
				var_1_15
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
