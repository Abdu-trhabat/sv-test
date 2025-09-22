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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch157Filler_PR_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -256;
double var_1_2 = 3.75;
double var_1_3 = 0.6;
signed long int var_1_4 = 200;
signed long int var_1_5 = 100;
signed char var_1_6 = -4;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
signed char var_1_9 = 1;
unsigned char var_1_10 = 8;
double var_1_11 = 10.925;
float var_1_12 = 25.25;
signed short int var_1_13 = 64;
signed short int var_1_14 = 4;
signed char var_1_15 = -4;
signed char var_1_16 = -50;
signed char var_1_17 = 10;
signed char var_1_18 = 32;
signed char var_1_19 = 32;
signed char var_1_20 = 5;
signed long int var_1_21 = -8;
unsigned long int var_1_22 = 4;
signed short int var_1_23 = -2;
signed short int var_1_24 = -25;
signed short int var_1_25 = 128;
unsigned long int var_1_26 = 8;
unsigned long int var_1_27 = 8;
unsigned long int var_1_28 = 128;
unsigned long int var_1_29 = 1;
signed long int var_1_30 = 128;
float var_1_31 = 0.6;
float var_1_32 = 64.75;
float var_1_33 = 64.2;
signed long int var_1_34 = -16;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 1166829650;
signed long int var_1_37 = 50;
unsigned short int var_1_38 = 128;
unsigned short int var_1_39 = 10;
unsigned short int var_1_40 = 50;
double var_1_41 = 99.8;
double var_1_42 = 0.75;
double var_1_43 = 16.4;
signed short int var_1_44 = -200;
signed short int var_1_45 = -256;
signed short int var_1_46 = -128;
unsigned short int var_1_47 = 32;
unsigned char var_1_48 = 10;
unsigned char var_1_49 = 1;
unsigned char var_1_50 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_21 = -8;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch157Filler_PR_CN
	/* 962L, 38L, 348L, 376L) */ if (/* 963L, 4L, 5L, 349L, 377L) */ ((var_1_2) < (var_1_3))) {
		/* 966L, 32L, 352L, 380L) */ if (/* 967L, 13L, 14L, 353L, 381L) */ ((var_1_3) <= (var_1_2))) {
			/* 970L, 27L, 356L, 384L) */ var_1_1 = (
				/* 973L, 26L, 359L, 387L) */ ((
					/* 974L, 24L, 360L, 388L) */ (max (
						/* 974L, 24L, 360L, 388L) */ (
							1
						) , (
							var_1_4
						)
					))
				) - (
					var_1_5
				))
			);
		} else {
			/* 978L, 31L, 364L, 392L) */ var_1_1 = (
				var_1_4
			);
		}
	} else {
		/* 982L, 37L, 368L, 396L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: CodeObject4
	/* 124L) */ if (/* 71L, 70L) */ ((/* 72L, 66L) */ (max (/* 72L, 66L) */ (var_1_31) , (var_1_32)))) <= (/* 75L, 69L) */ (max (/* 75L, 69L) */ (64.3f) , (var_1_33)))))) {
		/* 122L) */ if (/* 92L, 91L) */ ((/* 93L, 89L) */ ((var_1_23) & (/* 95L, 88L) */ ((var_1_26) ^ (var_1_28))))) == (var_1_29))) {
			/* 115L) */ var_1_30 = (
				/* 114L) */ ((
					/* 110L) */ (min (
						/* 110L) */ (
							var_1_24
						) , (
							var_1_23
						)
					))
				) + (
					/* 113L) */ ((
						var_1_25
					) + (
						-1
					))
				))
			);
		} else {
			/* 121L) */ var_1_30 = (
				/* 120L) */ (max (
					/* 120L) */ (
						var_1_23
					) , (
						var_1_25
					)
				))
			);
		}
	}


	// From: Req3Batch157Filler_PR_CN
	/* 1007L, 113L, 528L, 544L) */ if (/* 1008L, 94L, 95L, 529L, 545L) */ ((/* 1009L, 92L, 96L, 530L, 546L) */ ((/* 1010L, 90L, 97L, 531L, 547L) */ ((var_1_5) / (var_1_10))) < (var_1_1))) && (var_1_7))) {
		/* 1015L, 112L, 536L, 552L) */ var_1_9 = (
			32
		);
	}


	// From: Req4Batch157Filler_PR_CN
	/* 1021L, 128L, 590L, 596L) */ var_1_11 = (
		199.4
	);


	// From: CodeObject5
	/* 142L) */ if (/* 130L, 129L) */ (! (var_1_35))) {
		/* 141L) */ var_1_34 = (
			/* 140L) */ ((
				/* 138L) */ ((
					var_1_36
				) - (
					256
				))
			) - (
				var_1_37
			))
		);
	}


	// From: CodeObject6
	/* 175L) */ if (/* 153L, 152L) */ ((var_1_31) < (/* 155L, 151L) */ (min (/* 155L, 151L) */ (var_1_33) , (var_1_32)))))) {
		/* 168L) */ var_1_38 = (
			/* 167L) */ (max (
				/* 167L) */ (
					50
				) , (
					var_1_39
				)
			))
		);
	} else {
		/* 174L) */ var_1_38 = (
			/* 173L) */ (max (
				/* 173L) */ (
					var_1_39
				) , (
					var_1_40
				)
			))
		);
	}


	// From: CodeObject11
	/* 243L) */ var_1_50 = (
		var_1_49
	);


	// From: Req7Batch157Filler_PR_CN
	unsigned char stepLocal_2 = /* 1069L, 208L, 212L, 778L, 811L) */ ((/* 1070L, 205L, 213L, 779L, 812L) */ ((var_1_5) * (var_1_14))) <= (/* 1073L, 207L, 216L, 782L, 815L) */ (~ (100000000))));
	signed long int stepLocal_1 = /* 1064L, 229L, 233L, 787L, 820L) */ ((var_1_10) - (10));
	/* 1098L, 265L, 775L, 808L) */ if (/* 1077L, 209L, 210L, 776L, 809L) */ ((var_1_8) || (stepLocal_2))) {
		/* 1087L, 253L, 784L, 817L) */ if (/* 1079L, 230L, 231L, 785L, 818L) */ ((var_1_14) >= (stepLocal_1))) {
			/* 1086L, 251L, 790L, 823L) */ if (/* 1081L, 242L, 243L, 791L, 824L) */ (! (var_1_8))) {
				/* 1085L, 250L, 793L, 826L) */ var_1_15 = (
					var_1_16
				);
			}
		}
	} else {
		/* 1097L, 264L, 797L, 830L) */ var_1_15 = (
			/* 1096L, 263L, 800L, 833L) */ ((
				var_1_17
			) - (
				/* 1095L, 262L, 802L, 835L) */ ((
					/* 1093L, 260L, 803L, 836L) */ ((
						var_1_18
					) + (
						var_1_19
					))
				) - (
					var_1_20
				))
			))
		);
	}


	// From: CodeObject1
	/* 5L) */ var_1_23 = (
		var_1_24
	);


	// From: CodeObject10
	/* 235L) */ var_1_48 = (
		var_1_49
	);


	// From: Req8Batch157Filler_PR_CN
	/* 1104L, 274L, 908L, 915L) */ var_1_21 = (
		last_1_var_1_21
	);


	// From: CodeObject8
	/* 220L) */ if (/* 199L, 198L) */ ((var_1_27) >= (/* 201L, 197L) */ ((/* 202L, 195L) */ (abs (var_1_29))) % (var_1_36))))) {
		/* 219L) */ var_1_44 = (
			/* 218L) */ (abs (
				/* 217L) */ ((
					/* 215L) */ (max (
						/* 215L) */ (
							-10
						) , (
							var_1_45
						)
					))
				) + (
					var_1_46
				))
			))
		);
	}


	// From: Req9Batch157Filler_PR_CN
	/* 1111L, 284L, 936L, 942L) */ var_1_22 = (
		var_1_18
	);


	// From: CodeObject7
	/* 186L) */ var_1_41 = (
		/* 185L) */ (max (
			/* 185L) */ (
				var_1_42
			) , (
				var_1_43
			)
		))
	);


	// From: Req2Batch157Filler_PR_CN
	/* 991L, 74L, 461L, 478L) */ if (/* 992L, 52L, 53L, 462L, 479L) */ ((32.5) >= (var_1_11))) {
		/* 995L, 72L, 465L, 482L) */ if (/* 996L, 61L, 62L, 466L, 483L) */ ((var_1_7) && (var_1_8))) {
			/* 999L, 71L, 469L, 486L) */ var_1_6 = (
				-4
			);
		}
	}


	// From: CodeObject9
	/* 227L) */ var_1_47 = (
		16
	);


	// From: Req5Batch157Filler_PR_CN
	unsigned char stepLocal_0 = /* 1027L, 137L, 143L, 645L, 660L) */ ((/* 1028L, 135L, 144L, 646L, 661L) */ ((var_1_11) * (var_1_3))) > (var_1_2));
	/* 1041L, 164L, 643L, 658L) */ if (/* 1036L, 141L, 142L, 644L, 659L) */ ((stepLocal_0) && (/* 1035L, 140L, 148L, 650L, 665L) */ ((var_1_10) != (var_1_21))))) {
		/* 1040L, 163L, 653L, 668L) */ var_1_12 = (
			32.75f
		);
	}


	// From: CodeObject2
	/* 13L) */ var_1_25 = (
		var_1_24
	);


	// From: CodeObject3
	/* 60L) */ if (/* 23L, 22L) */ ((/* 24L, 20L) */ ((4) * (var_1_23))) >= (var_1_24))) {
		/* 52L) */ if (/* 38L, 37L) */ ((var_1_25) >= (/* 40L, 36L) */ ((var_1_24) + (var_1_23))))) {
			/* 51L) */ var_1_26 = (
				var_1_27
			);
		}
	} else {
		/* 59L) */ var_1_26 = (
			/* 58L) */ ((
				var_1_28
			) + (
				var_1_29
			))
		);
	}


	// From: Req6Batch157Filler_PR_CN
	/* 1045L, 196L, 703L, 721L) */ if (/* 1046L, 175L, 176L, 704L, 722L) */ ((/* 1047L, 173L, 177L, 705L, 723L) */ (- (16.75))) <= (var_1_11))) {
		/* 1050L, 189L, 708L, 726L) */ var_1_13 = (
			/* 1053L, 188L, 711L, 729L) */ ((
				var_1_10
			) - (
				var_1_14
			))
		);
	} else {
		/* 1056L, 195L, 714L, 732L) */ var_1_13 = (
			/* 1059L, 194L, 717L, 735L) */ (max (
				/* 1059L, 194L, 717L, 735L) */ (
					var_1_21
				) , (
					var_1_10
				)
			))
		);
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -1);
	assume_abort_if_not(var_1_4 <= 2147483646);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 2147483646);
	var_1_7 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 1);
	var_1_8 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_8 >= 0);
	assume_abort_if_not(var_1_8 <= 1);
	var_1_10 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 255);
	assume_abort_if_not(var_1_10 != 0);
	var_1_14 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 32766);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -127);
	assume_abort_if_not(var_1_16 <= 126);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -1);
	assume_abort_if_not(var_1_17 <= 126);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 31);
	assume_abort_if_not(var_1_18 <= 63);
	var_1_19 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_19 >= 32);
	assume_abort_if_not(var_1_19 <= 63);
	var_1_20 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 63);
	var_1_24 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_24 >= -32767);
	assume_abort_if_not(var_1_24 <= 32766);
	var_1_27 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 4294967294);
	var_1_28 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_36 >= 1073741822);
	assume_abort_if_not(var_1_36 <= 2147483646);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= 0);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 65534);
	var_1_40 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 65534);
	var_1_42 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_42 >= -922337.2036854766000e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854766000e+12F && var_1_42 >= 1.0e-20F ));
	var_1_43 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
	var_1_45 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_45 >= -16383);
	assume_abort_if_not(var_1_45 <= 16383);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -16383);
	assume_abort_if_not(var_1_46 <= 16383);
	var_1_49 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_49 >= 0);
	assume_abort_if_not(var_1_49 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 250L, 4L, 8L, 405L, 433L, 1120L) */ ((var_1_2) < (var_1_3))) {
		if (/* 254L, 13L, 17L, 409L, 437L, 1124L) */ ((var_1_3) <= (var_1_2))) {
		} else {
		}
	} else {
	}
	if (/* 279L, 52L, 56L, 496L, 513L, 1149L) */ ((32.5) >= (var_1_11))) {
		if (/* 283L, 61L, 65L, 500L, 517L, 1153L) */ ((var_1_7) && (var_1_8))) {
		}
	}
	if (/* 295L, 94L, 102L, 561L, 577L, 1165L) */ ((/* 296L, 92L, 103L, 562L, 578L, 1166L) */ ((/* 297L, 90L, 104L, 563L, 579L, 1167L) */ ((var_1_5) / (var_1_10))) < (var_1_1))) && (var_1_7))) {
	}
	if (/* 314L, 141L, 151L, 674L, 689L, 1184L) */ ((/* 315L, 137L, 152L, 675L, 690L, 1185L) */ ((/* 316L, 135L, 153L, 676L, 691L, 1186L) */ ((var_1_11) * (var_1_3))) > (var_1_2))) && (/* 320L, 140L, 157L, 680L, 695L, 1190L) */ ((var_1_10) != (var_1_21))))) {
	}
	if (/* 329L, 175L, 180L, 740L, 758L, 1199L) */ ((/* 330L, 173L, 181L, 741L, 759L, 1200L) */ (- (16.75))) <= (var_1_11))) {
	} else {
	}
	if (/* 347L, 209L, 218L, 842L, 875L, 1217L) */ ((var_1_8) || (/* 349L, 208L, 220L, 844L, 877L, 1219L) */ ((/* 350L, 205L, 221L, 845L, 878L, 1220L) */ ((var_1_5) * (var_1_14))) <= (/* 353L, 207L, 224L, 848L, 881L, 1223L) */ (~ (100000000))))))) {
		if (/* 356L, 230L, 236L, 851L, 884L, 1226L) */ ((var_1_14) >= (/* 358L, 229L, 238L, 853L, 886L, 1228L) */ ((var_1_10) - (10))))) {
			if (/* 362L, 242L, 245L, 857L, 890L, 1232L) */ (! (var_1_8))) {
			}
		}
	} else {
	}
	return /* 399L) */ ((
	/* 398L) */ ((
		/* 397L) */ ((
			/* 396L) */ ((
				/* 395L) */ ((
					/* 394L) */ ((
						/* 393L) */ ((
							/* 392L) */ ((
								/* 249L, 39L, 404L, 432L, 1119L) */ ((
									/* 250L, 4L, 8L, 405L, 433L, 1120L) */ ((
										var_1_2
									) < (
										var_1_3
									))
								) ? (
									/* 253L, 33L, 408L, 436L, 1123L) */ ((
										/* 254L, 13L, 17L, 409L, 437L, 1124L) */ ((
											var_1_3
										) <= (
											var_1_2
										))
									) ? (
										/* 257L, 27L, 412L, 440L, 1127L) */ ((
											var_1_1
										) == (
											/* 257L, 27L, 412L, 440L, 1127L) */ ((signed long int) (
												/* 260L, 26L, 415L, 443L, 1130L) */ ((
													/* 261L, 24L, 416L, 444L, 1131L) */ (max (
														/* 261L, 24L, 416L, 444L, 1131L) */ (
															1
														) , (
															var_1_4
														)
													))
												) - (
													var_1_5
												))
											))
										))
									) : (
										/* 265L, 31L, 420L, 448L, 1135L) */ ((
											var_1_1
										) == (
											/* 265L, 31L, 420L, 448L, 1135L) */ ((signed long int) (
												var_1_4
											))
										))
									))
								) : (
									/* 269L, 37L, 424L, 452L, 1139L) */ ((
										var_1_1
									) == (
										/* 269L, 37L, 424L, 452L, 1139L) */ ((signed long int) (
											var_1_4
										))
									))
								))
							) && (
								/* 278L, 75L, 495L, 512L, 1148L) */ ((
									/* 279L, 52L, 56L, 496L, 513L, 1149L) */ ((
										32.5
									) >= (
										var_1_11
									))
								) ? (
									/* 282L, 73L, 499L, 516L, 1152L) */ ((
										/* 283L, 61L, 65L, 500L, 517L, 1153L) */ ((
											var_1_7
										) && (
											var_1_8
										))
									) ? (
										/* 286L, 71L, 503L, 520L, 1156L) */ ((
											var_1_6
										) == (
											/* 286L, 71L, 503L, 520L, 1156L) */ ((signed char) (
												-4
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
							/* 294L, 114L, 560L, 576L, 1164L) */ ((
								/* 295L, 94L, 102L, 561L, 577L, 1165L) */ ((
									/* 296L, 92L, 103L, 562L, 578L, 1166L) */ ((
										/* 297L, 90L, 104L, 563L, 579L, 1167L) */ ((
											var_1_5
										) / (
											var_1_10
										))
									) < (
										var_1_1
									))
								) && (
									var_1_7
								))
							) ? (
								/* 302L, 112L, 568L, 584L, 1172L) */ ((
									var_1_9
								) == (
									/* 302L, 112L, 568L, 584L, 1172L) */ ((signed char) (
										32
									))
								))
							) : (
								1
							))
						))
					) && (
						/* 308L, 128L, 602L, 608L, 1178L) */ ((
							var_1_11
						) == (
							/* 308L, 128L, 602L, 608L, 1178L) */ ((double) (
								199.4
							))
						))
					))
				) && (
					/* 313L, 165L, 673L, 688L, 1183L) */ ((
						/* 314L, 141L, 151L, 674L, 689L, 1184L) */ ((
							/* 315L, 137L, 152L, 675L, 690L, 1185L) */ ((
								/* 316L, 135L, 153L, 676L, 691L, 1186L) */ ((
									var_1_11
								) * (
									var_1_3
								))
							) > (
								var_1_2
							))
						) && (
							/* 320L, 140L, 157L, 680L, 695L, 1190L) */ ((
								var_1_10
							) != (
								var_1_21
							))
						))
					) ? (
						/* 323L, 163L, 683L, 698L, 1193L) */ ((
							var_1_12
						) == (
							/* 323L, 163L, 683L, 698L, 1193L) */ ((float) (
								32.75f
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 328L, 197L, 739L, 757L, 1198L) */ ((
					/* 329L, 175L, 180L, 740L, 758L, 1199L) */ ((
						/* 330L, 173L, 181L, 741L, 759L, 1200L) */ (- (
							16.75
						))
					) <= (
						var_1_11
					))
				) ? (
					/* 333L, 189L, 744L, 762L, 1203L) */ ((
						var_1_13
					) == (
						/* 333L, 189L, 744L, 762L, 1203L) */ ((signed short int) (
							/* 336L, 188L, 747L, 765L, 1206L) */ ((
								var_1_10
							) - (
								var_1_14
							))
						))
					))
				) : (
					/* 339L, 195L, 750L, 768L, 1209L) */ ((
						var_1_13
					) == (
						/* 339L, 195L, 750L, 768L, 1209L) */ ((signed short int) (
							/* 342L, 194L, 753L, 771L, 1212L) */ (max (
								/* 342L, 194L, 753L, 771L, 1212L) */ (
									var_1_21
								) , (
									var_1_10
								)
							))
						))
					))
				))
			))
		) && (
			/* 346L, 266L, 841L, 874L, 1216L) */ ((
				/* 347L, 209L, 218L, 842L, 875L, 1217L) */ ((
					var_1_8
				) || (
					/* 349L, 208L, 220L, 844L, 877L, 1219L) */ ((
						/* 350L, 205L, 221L, 845L, 878L, 1220L) */ ((
							var_1_5
						) * (
							var_1_14
						))
					) <= (
						/* 353L, 207L, 224L, 848L, 881L, 1223L) */ (~ (
							100000000
						))
					))
				))
			) ? (
				/* 355L, 254L, 850L, 883L, 1225L) */ ((
					/* 356L, 230L, 236L, 851L, 884L, 1226L) */ ((
						var_1_14
					) >= (
						/* 358L, 229L, 238L, 853L, 886L, 1228L) */ ((
							var_1_10
						) - (
							10
						))
					))
				) ? (
					/* 361L, 252L, 856L, 889L, 1231L) */ ((
						/* 362L, 242L, 245L, 857L, 890L, 1232L) */ (! (
							var_1_8
						))
					) ? (
						/* 364L, 250L, 859L, 892L, 1234L) */ ((
							var_1_15
						) == (
							/* 364L, 250L, 859L, 892L, 1234L) */ ((signed char) (
								var_1_16
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			) : (
				/* 368L, 264L, 863L, 896L, 1238L) */ ((
					var_1_15
				) == (
					/* 368L, 264L, 863L, 896L, 1238L) */ ((signed char) (
						/* 371L, 263L, 866L, 899L, 1241L) */ ((
							var_1_17
						) - (
							/* 373L, 262L, 868L, 901L, 1243L) */ ((
								/* 374L, 260L, 869L, 902L, 1244L) */ ((
									var_1_18
								) + (
									var_1_19
								))
							) - (
								var_1_20
							))
						))
					))
				))
			))
		))
	) && (
		/* 380L, 274L, 922L, 929L, 1250L) */ ((
			var_1_21
		) == (
			/* 380L, 274L, 922L, 929L, 1250L) */ ((signed long int) (
				last_1_var_1_21
			))
		))
	))
) && (
	/* 387L, 284L, 948L, 954L, 1257L) */ ((
		var_1_22
	) == (
		/* 387L, 284L, 948L, 954L, 1257L) */ ((unsigned long int) (
			var_1_18
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
