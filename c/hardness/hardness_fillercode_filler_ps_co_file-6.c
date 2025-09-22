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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Filler_PS_CO.c", 13, "reach_error"); }
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
double var_1_1 = 100.25;
unsigned char var_1_3 = 8;
unsigned char var_1_4 = 0;
double var_1_5 = 1.9;
double var_1_6 = 7.5;
double var_1_7 = 64.25;
signed long int var_1_8 = 2;
signed long int var_1_9 = 1000000000;
signed long int var_1_10 = 1000000000;
signed long int var_1_11 = 1957998270;
float var_1_12 = 50.25;
float var_1_13 = 9.8;
float var_1_14 = 25.5;
float var_1_15 = 3.5;
signed long int var_1_16 = -500;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 1;
unsigned char var_1_19 = 0;
signed long int var_1_20 = -4;
signed short int var_1_23 = -200;
unsigned short int var_1_25 = 32;
signed long int var_1_26 = 10;
signed short int var_1_27 = 0;
signed short int var_1_28 = -128;
signed short int var_1_29 = 16;
signed short int var_1_30 = 10;
unsigned long int var_1_32 = 32;
unsigned long int var_1_33 = 5;
unsigned char var_1_34 = 1;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 10;
unsigned short int var_1_37 = 256;
signed char var_1_38 = -128;
signed char var_1_39 = -8;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_8 = 2;
float last_1_var_1_12 = 50.25;
signed long int last_1_var_1_16 = -500;
unsigned char last_1_var_1_17 = 1;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 307L, 81L) */ if (var_1_17) {
		/* 309L, 79L) */ if (/* 310L, 68L, 69L) */ ((var_1_16) <= (var_1_23))) {
			/* 313L, 78L) */ var_1_20 = (
				10
			);
		}
	}


	// From: CodeObject2
	/* 317L, 114L) */ if (/* 318L, 93L, 94L) */ ((/* 319L, 90L, 95L) */ (min (/* 319L, 90L, 95L) */ (var_1_23) , (/* 321L, 89L, 97L) */ ((8) ^ (var_1_8)))))) >= (/* 324L, 92L, 100L) */ (abs (var_1_26))))) {
		/* 326L, 113L) */ var_1_25 = (
			8
		);
	}


	// From: CodeObject3
	/* 330L, 166L) */ if (/* 331L, 123L, 124L) */ ((var_1_23) >= (/* 333L, 122L, 126L) */ ((/* 334L, 120L, 127L) */ (abs (var_1_28))) - (var_1_29))))) {
		/* 337L, 164L) */ if (/* 338L, 138L, 139L) */ ((var_1_23) != (var_1_29))) {
			/* 341L, 148L) */ var_1_27 = (
				var_1_30
			);
		} else {
			/* 345L, 162L) */ if (/* 346L, 151L, 152L) */ ((var_1_19) || (var_1_17))) {
				/* 349L, 161L) */ var_1_27 = (
					var_1_30
				);
			}
		}
	}


	// From: CodeObject4
	/* 354L, 173L) */ var_1_32 = (
		var_1_8
	);


	// From: CodeObject5
	/* 358L, 193L) */ if (var_1_17) {
		/* 360L, 185L) */ var_1_33 = (
			/* 363L, 184L) */ (abs (
				10000000u
			))
		);
	} else {
		/* 365L, 192L) */ var_1_33 = (
			/* 368L, 191L) */ (max (
				/* 368L, 191L) */ (
					/* 369L, 189L) */ (abs (
						var_1_16
					))
				) , (
					var_1_29
				)
			))
		);
	}


	// From: CodeObject6
	/* 372L, 219L) */ if (/* 373L, 202L, 203L) */ ((var_1_8) > (/* 375L, 201L, 205L) */ ((var_1_16) + (var_1_33))))) {
		/* 378L, 218L) */ var_1_34 = (
			/* 381L, 217L) */ (max (
				/* 381L, 217L) */ (
					var_1_35
				) , (
					var_1_36
				)
			))
		);
	}


	// From: CodeObject7
	/* 384L, 272L) */ if (/* 385L, 229L, 230L) */ ((var_1_16) > (/* 387L, 228L, 232L) */ (min (/* 387L, 228L, 232L) */ (var_1_8) , (/* 389L, 227L, 234L) */ (max (/* 389L, 227L, 234L) */ (var_1_29) , (var_1_16))))))))) {
		/* 392L, 270L) */ if (/* 393L, 249L, 250L) */ ((-256) != (/* 395L, 248L, 252L) */ (max (/* 395L, 248L, 252L) */ (10000000) , (var_1_8)))))) {
			/* 398L, 269L) */ var_1_37 = (
				/* 401L, 268L) */ ((
					/* 402L, 265L) */ (abs (
						/* 403L, 264L) */ ((
							var_1_35
						) + (
							var_1_8
						))
					))
				) + (
					/* 406L, 267L) */ (abs (
						64
					))
				))
			);
		}
	}


	// From: CodeObject8
	/* 412L, 297L) */ if (/* 413L, 278L, 279L) */ ((var_1_23) > (var_1_26))) {
		/* 416L, 290L) */ var_1_38 = (
			/* 419L, 289L) */ (min (
				/* 419L, 289L) */ (
					16
				) , (
					var_1_39
				)
			))
		);
	} else {
		/* 422L, 296L) */ var_1_38 = (
			/* 425L, 295L) */ (max (
				/* 425L, 295L) */ (
					var_1_39
				) , (
					-4
				)
			))
		);
	}


	// From: Req5Batch6Filler_PS_CO
	/* 24L, 174L, 633L, 657L, 977L, 1099L) */ if (/* 8L, 131L, 132L, 634L, 658L, 961L, 1100L) */ ((/* 6L, 129L, 133L, 635L, 659L, 959L, 1101L) */ (max (/* 6L, 129L, 133L, 635L, 659L, 959L, 1101L) */ (/* 1L, 125L, 134L, 636L, 660L, 954L, 1102L) */ (- (var_1_15))) , (/* 5L, 128L, 136L, 638L, 662L, 958L, 1104L) */ ((last_1_var_1_12) * (var_1_6)))))) < (var_1_5))) {
		/* 23L, 172L, 642L, 666L, 976L, 1109L) */ if (/* 14L, 152L, 153L, 643L, 667L, 967L, 1110L) */ ((var_1_11) != (/* 13L, 151L, 155L, 645L, 669L, 966L, 1112L) */ (min (/* 13L, 151L, 155L, 645L, 669L, 966L, 1112L) */ (last_1_var_1_8) , (var_1_10)))))) {
			/* 22L, 170L, 648L, 672L, 975L, 1116L) */ if (last_1_var_1_17) {
				/* 21L, 169L, 650L, 674L, 974L, 1119L) */ var_1_16 = (
					last_1_var_1_8
				);
			}
		}
	}


	// From: Req2Batch6Filler_PS_CO
	/* 1037L, 50L, 428L, 443L, 933L) */ var_1_8 = (
		/* 1040L, 49L, 431L, 446L, 932L) */ ((
			/* 1041L, 44L, 432L, 447L, 926L) */ ((
				/* 1042L, 42L, 433L, 448L, 923L) */ ((
					var_1_9
				) + (
					var_1_10
				))
			) - (
				last_1_var_1_16
			))
		) - (
			/* 1047L, 48L, 437L, 452L, 931L) */ ((
				var_1_11
			) - (
				/* 1049L, 47L, 439L, 454L, 930L) */ (abs (
					last_1_var_1_16
				))
			))
		))
	);


	// From: Req3Batch6Filler_PS_CO
	signed long int stepLocal_1 = /* 1054L, 65L, 71L, 492L, 505L) */ ((var_1_8) - (var_1_11));
	/* 1066L, 85L, 487L, 500L) */ if (/* 1061L, 66L, 67L, 488L, 501L) */ ((/* 1060L, 62L, 68L, 489L, 502L) */ (min (/* 1060L, 62L, 68L, 489L, 502L) */ (var_1_16) , (var_1_9)))) >= (stepLocal_1))) {
		/* 1065L, 84L, 495L, 508L) */ var_1_12 = (
			var_1_7
		);
	}


	// From: Req6Batch6Filler_PS_CO
	/* 1126L, 195L, 784L, 798L) */ var_1_17 = (
		/* 1129L, 194L, 787L, 801L) */ ((
			/* 1130L, 192L, 788L, 802L) */ ((
				/* 1131L, 188L, 789L, 803L) */ ((
					var_1_3
				) * (
					var_1_9
				))
			) >= (
				/* 1134L, 191L, 792L, 806L) */ (max (
					/* 1134L, 191L, 792L, 806L) */ (
						var_1_16
					) , (
						var_1_8
					)
				))
			))
		) || (
			var_1_18
		))
	);


	// From: Req4Batch6Filler_PS_CO
	signed long int stepLocal_2 = var_1_8;
	/* 1093L, 118L, 539L, 562L) */ if (/* 1074L, 93L, 94L, 540L, 563L) */ ((stepLocal_2) < (var_1_11))) {
		/* 1084L, 109L, 543L, 566L) */ var_1_13 = (
			/* 1083L, 108L, 546L, 569L) */ ((
				/* 1081L, 106L, 547L, 570L) */ ((
					7.386826171811256E18f
				) - (
					/* 1080L, 105L, 549L, 572L) */ ((
						var_1_14
					) + (
						var_1_15
					))
				))
			) - (
				5.4f
			))
		);
	} else {
		/* 1092L, 117L, 553L, 576L) */ var_1_13 = (
			/* 1091L, 116L, 556L, 579L) */ ((
				var_1_15
			) + (
				/* 1090L, 115L, 558L, 581L) */ (min (
					/* 1090L, 115L, 558L, 581L) */ (
						var_1_14
					) , (
						var_1_5
					)
				))
			))
		);
	}


	// From: Req7Batch6Filler_PS_CO
	/* 1139L, 239L, 839L, 859L) */ if (var_1_17) {
		/* 1141L, 233L, 841L, 861L) */ if (/* 1142L, 212L, 213L, 842L, 862L) */ ((var_1_7) > (/* 1144L, 211L, 215L, 844L, 864L) */ ((/* 1145L, 207L, 216L, 845L, 865L) */ (abs (var_1_5))) * (/* 1147L, 210L, 218L, 847L, 867L) */ ((var_1_12) * (63.375))))))) {
			/* 1150L, 232L, 850L, 870L) */ var_1_19 = (
				var_1_18
			);
		}
	} else {
		/* 1154L, 238L, 854L, 874L) */ var_1_19 = (
			var_1_18
		);
	}


	// From: Req1Batch6Filler_PS_CO
	unsigned char stepLocal_0 = var_1_4;
	/* 1032L, 32L, 335L, 358L) */ if (var_1_19) {
		/* 1027L, 26L, 337L, 360L) */ if (/* 1014L, 7L, 8L, 338L, 361L) */ ((var_1_3) >= (stepLocal_0))) {
			/* 1020L, 19L, 341L, 364L) */ var_1_1 = (
				/* 1019L, 18L, 344L, 367L) */ ((
					var_1_5
				) + (
					var_1_6
				))
			);
		} else {
			/* 1026L, 25L, 347L, 370L) */ var_1_1 = (
				/* 1025L, 24L, 350L, 373L) */ ((
					4.125
				) - (
					var_1_7
				))
			);
		}
	} else {
		/* 1031L, 31L, 353L, 376L) */ var_1_1 = (
			var_1_5
		);
	}
}



void updateVariables(void) {
	var_1_3 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 255);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	var_1_5 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_5 >= -461168.6018427383000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 4611686.018427383000e+12F && var_1_5 >= 1.0e-20F ));
	var_1_6 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= 536870911);
	assume_abort_if_not(var_1_9 <= 1073741823);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 536870911);
	assume_abort_if_not(var_1_10 <= 1073741823);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 1073741823);
	assume_abort_if_not(var_1_11 <= 2147483646);
	var_1_14 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 2305843.009213691400e+12F && var_1_14 >= 1.0e-20F ));
	var_1_15 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32768);
	assume_abort_if_not(var_1_23 <= 32767);
	assume_abort_if_not(var_1_23 != 0);
	var_1_26 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_26 >= -2147483647);
	assume_abort_if_not(var_1_26 <= 2147483647);
	var_1_28 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_28 >= -32767);
	assume_abort_if_not(var_1_28 <= 32767);
	var_1_29 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 32767);
	var_1_30 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_30 >= -32767);
	assume_abort_if_not(var_1_30 <= 32766);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 254);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 254);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -127);
	assume_abort_if_not(var_1_39 <= 126);
}



void updateLastVariables(void) {
	last_1_var_1_8 = var_1_8;
	last_1_var_1_12 = var_1_12;
	last_1_var_1_16 = var_1_16;
	last_1_var_1_17 = var_1_17;
}

int property(void) {
	if (var_1_19) {
		if (/* 431L, 7L, 11L, 384L, 407L, 1162L) */ ((var_1_3) >= (var_1_4))) {
		} else {
		}
	} else {
	}
	if (/* 469L, 66L, 74L, 514L, 527L, 1200L) */ ((/* 470L, 62L, 75L, 515L, 528L, 1201L) */ (min (/* 470L, 62L, 75L, 515L, 528L, 1201L) */ (var_1_16) , (var_1_9)))) >= (/* 473L, 65L, 78L, 518L, 531L, 1204L) */ ((var_1_8) - (var_1_11))))) {
	}
	if (/* 482L, 93L, 97L, 586L, 609L, 1213L) */ ((var_1_8) < (var_1_11))) {
	} else {
	}
	if (/* 507L, 131L, 140L, 682L, 706L, 989L, 1238L, 36L) */ ((/* 508L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (max (/* 508L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (/* 509L, 125L, 142L, 684L, 708L, 982L, 1240L, 29L) */ (- (var_1_15))) , (/* 511L, 128L, 144L, 686L, 710L, 986L, 1242L, 33L) */ ((last_1_var_1_12) * (var_1_6)))))) < (var_1_5))) {
		if (/* 517L, 152L, 158L, 691L, 715L, 995L, 1248L, 42L) */ ((var_1_11) != (/* 519L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (min (/* 519L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (last_1_var_1_8) , (var_1_10)))))) {
			if (last_1_var_1_17) {
			}
		}
	}
	if (var_1_17) {
		if (/* 549L, 212L, 221L, 882L, 902L, 1280L) */ ((var_1_7) > (/* 551L, 211L, 223L, 884L, 904L, 1282L) */ ((/* 552L, 207L, 224L, 885L, 905L, 1283L) */ (abs (var_1_5))) * (/* 554L, 210L, 226L, 887L, 907L, 1285L) */ ((var_1_12) * (63.375))))))) {
		}
	} else {
	}
	return /* 571L) */ ((
	/* 570L) */ ((
		/* 569L) */ ((
			/* 568L) */ ((
				/* 567L) */ ((
					/* 566L) */ ((
						/* 428L, 33L, 381L, 404L, 1159L) */ ((
							var_1_19
						) ? (
							/* 430L, 27L, 383L, 406L, 1161L) */ ((
								/* 431L, 7L, 11L, 384L, 407L, 1162L) */ ((
									var_1_3
								) >= (
									var_1_4
								))
							) ? (
								/* 434L, 19L, 387L, 410L, 1165L) */ ((
									var_1_1
								) == (
									/* 434L, 19L, 387L, 410L, 1165L) */ ((double) (
										/* 437L, 18L, 390L, 413L, 1168L) */ ((
											var_1_5
										) + (
											var_1_6
										))
									))
								))
							) : (
								/* 440L, 25L, 393L, 416L, 1171L) */ ((
									var_1_1
								) == (
									/* 440L, 25L, 393L, 416L, 1171L) */ ((double) (
										/* 443L, 24L, 396L, 419L, 1174L) */ ((
											4.125
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 446L, 31L, 399L, 422L, 1177L) */ ((
								var_1_1
							) == (
								/* 446L, 31L, 399L, 422L, 1177L) */ ((double) (
									var_1_5
								))
							))
						))
					) && (
						/* 452L, 50L, 458L, 473L, 950L, 1183L) */ ((
							var_1_8
						) == (
							/* 452L, 50L, 458L, 473L, 950L, 1183L) */ ((signed long int) (
								/* 455L, 49L, 461L, 476L, 949L, 1186L) */ ((
									/* 456L, 44L, 462L, 477L, 943L, 1187L) */ ((
										/* 457L, 42L, 463L, 478L, 940L, 1188L) */ ((
											var_1_9
										) + (
											var_1_10
										))
									) - (
										last_1_var_1_16
									))
								) - (
									/* 462L, 48L, 467L, 482L, 948L, 1193L) */ ((
										var_1_11
									) - (
										/* 464L, 47L, 469L, 484L, 947L, 1195L) */ (abs (
											last_1_var_1_16
										))
									))
								))
							))
						))
					))
				) && (
					/* 468L, 86L, 513L, 526L, 1199L) */ ((
						/* 469L, 66L, 74L, 514L, 527L, 1200L) */ ((
							/* 470L, 62L, 75L, 515L, 528L, 1201L) */ (min (
								/* 470L, 62L, 75L, 515L, 528L, 1201L) */ (
									var_1_16
								) , (
									var_1_9
								)
							))
						) >= (
							/* 473L, 65L, 78L, 518L, 531L, 1204L) */ ((
								var_1_8
							) - (
								var_1_11
							))
						))
					) ? (
						/* 476L, 84L, 521L, 534L, 1207L) */ ((
							var_1_12
						) == (
							/* 476L, 84L, 521L, 534L, 1207L) */ ((float) (
								var_1_7
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 481L, 119L, 585L, 608L, 1212L) */ ((
					/* 482L, 93L, 97L, 586L, 609L, 1213L) */ ((
						var_1_8
					) < (
						var_1_11
					))
				) ? (
					/* 485L, 109L, 589L, 612L, 1216L) */ ((
						var_1_13
					) == (
						/* 485L, 109L, 589L, 612L, 1216L) */ ((float) (
							/* 488L, 108L, 592L, 615L, 1219L) */ ((
								/* 489L, 106L, 593L, 616L, 1220L) */ ((
									7.386826171811256E18f
								) - (
									/* 491L, 105L, 595L, 618L, 1222L) */ ((
										var_1_14
									) + (
										var_1_15
									))
								))
							) - (
								5.4f
							))
						))
					))
				) : (
					/* 495L, 117L, 599L, 622L, 1226L) */ ((
						var_1_13
					) == (
						/* 495L, 117L, 599L, 622L, 1226L) */ ((float) (
							/* 498L, 116L, 602L, 625L, 1229L) */ ((
								var_1_15
							) + (
								/* 500L, 115L, 604L, 627L, 1231L) */ (min (
									/* 500L, 115L, 604L, 627L, 1231L) */ (
										var_1_14
									) , (
										var_1_5
									)
								))
							))
						))
					))
				))
			))
		) && (
			/* 506L, 175L, 681L, 705L, 1005L, 1237L, 52L) */ ((
				/* 507L, 131L, 140L, 682L, 706L, 989L, 1238L, 36L) */ ((
					/* 508L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (max (
						/* 508L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (
							/* 509L, 125L, 142L, 684L, 708L, 982L, 1240L, 29L) */ (- (
								var_1_15
							))
						) , (
							/* 511L, 128L, 144L, 686L, 710L, 986L, 1242L, 33L) */ ((
								last_1_var_1_12
							) * (
								var_1_6
							))
						)
					))
				) < (
					var_1_5
				))
			) ? (
				/* 516L, 173L, 690L, 714L, 1004L, 1247L, 51L) */ ((
					/* 517L, 152L, 158L, 691L, 715L, 995L, 1248L, 42L) */ ((
						var_1_11
					) != (
						/* 519L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (min (
							/* 519L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (
								last_1_var_1_8
							) , (
								var_1_10
							)
						))
					))
				) ? (
					/* 523L, 171L, 696L, 720L, 1003L, 1254L, 50L) */ ((
						last_1_var_1_17
					) ? (
						/* 526L, 169L, 698L, 722L, 1002L, 1257L, 49L) */ ((
							var_1_16
						) == (
							/* 526L, 169L, 698L, 722L, 1002L, 1257L, 49L) */ ((signed long int) (
								last_1_var_1_8
							))
						))
					) : (
						1
					))
				) : (
					1
				))
			) : (
				1
			))
		))
	) && (
		/* 533L, 195L, 812L, 826L, 1264L) */ ((
			var_1_17
		) == (
			/* 533L, 195L, 812L, 826L, 1264L) */ ((unsigned char) (
				/* 536L, 194L, 815L, 829L, 1267L) */ ((
					/* 537L, 192L, 816L, 830L, 1268L) */ ((
						/* 538L, 188L, 817L, 831L, 1269L) */ ((
							var_1_3
						) * (
							var_1_9
						))
					) >= (
						/* 541L, 191L, 820L, 834L, 1272L) */ (max (
							/* 541L, 191L, 820L, 834L, 1272L) */ (
								var_1_16
							) , (
								var_1_8
							)
						))
					))
				) || (
					var_1_18
				))
			))
		))
	))
) && (
	/* 546L, 240L, 879L, 899L, 1277L) */ ((
		var_1_17
	) ? (
		/* 548L, 234L, 881L, 901L, 1279L) */ ((
			/* 549L, 212L, 221L, 882L, 902L, 1280L) */ ((
				var_1_7
			) > (
				/* 551L, 211L, 223L, 884L, 904L, 1282L) */ ((
					/* 552L, 207L, 224L, 885L, 905L, 1283L) */ (abs (
						var_1_5
					))
				) * (
					/* 554L, 210L, 226L, 887L, 907L, 1285L) */ ((
						var_1_12
					) * (
						63.375
					))
				))
			))
		) ? (
			/* 557L, 232L, 890L, 910L, 1288L) */ ((
				var_1_19
			) == (
				/* 557L, 232L, 890L, 910L, 1288L) */ ((unsigned char) (
					var_1_18
				))
			))
		) : (
			1
		))
	) : (
		/* 561L, 238L, 894L, 914L, 1292L) */ ((
			var_1_19
		) == (
			/* 561L, 238L, 894L, 914L, 1292L) */ ((unsigned char) (
				var_1_18
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
