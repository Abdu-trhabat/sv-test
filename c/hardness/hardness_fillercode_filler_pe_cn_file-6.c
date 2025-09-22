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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch6Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned char var_1_21 = 0;
signed short int var_1_22 = 8;
signed short int var_1_23 = -200;
signed long int var_1_24 = 0;
unsigned short int var_1_25 = 32;
signed long int var_1_26 = 10;
signed short int var_1_27 = 0;
signed short int var_1_28 = -128;
signed short int var_1_29 = 16;
signed short int var_1_30 = 10;
unsigned char var_1_31 = 1;
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
	// From: Req5Batch6Filler_PE_CN
	/* 24L, 174L, 633L, 657L, 977L, 1099L) */ if (/* 8L, 131L, 132L, 634L, 658L, 961L, 1100L) */ ((/* 6L, 129L, 133L, 635L, 659L, 959L, 1101L) */ (max (/* 6L, 129L, 133L, 635L, 659L, 959L, 1101L) */ (/* 1L, 125L, 134L, 636L, 660L, 954L, 1102L) */ (- (var_1_15))) , (/* 5L, 128L, 136L, 638L, 662L, 958L, 1104L) */ ((last_1_var_1_12) * (var_1_6)))))) < (var_1_5))) {
		/* 23L, 172L, 642L, 666L, 976L, 1109L) */ if (/* 14L, 152L, 153L, 643L, 667L, 967L, 1110L) */ ((var_1_11) != (/* 13L, 151L, 155L, 645L, 669L, 966L, 1112L) */ (min (/* 13L, 151L, 155L, 645L, 669L, 966L, 1112L) */ (last_1_var_1_8) , (var_1_10)))))) {
			/* 22L, 170L, 648L, 672L, 975L, 1116L) */ if (last_1_var_1_17) {
				/* 21L, 169L, 650L, 674L, 974L, 1119L) */ var_1_16 = (
					last_1_var_1_8
				);
			}
		}
	}


	// From: Req2Batch6Filler_PE_CN
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


	// From: Req3Batch6Filler_PE_CN
	signed long int stepLocal_1 = /* 1054L, 65L, 71L, 492L, 505L) */ ((var_1_8) - (var_1_11));
	/* 1066L, 85L, 487L, 500L) */ if (/* 1061L, 66L, 67L, 488L, 501L) */ ((/* 1060L, 62L, 68L, 489L, 502L) */ (min (/* 1060L, 62L, 68L, 489L, 502L) */ (var_1_16) , (var_1_9)))) >= (stepLocal_1))) {
		/* 1065L, 84L, 495L, 508L) */ var_1_12 = (
			var_1_7
		);
	}


	// From: Req6Batch6Filler_PE_CN
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


	// From: Req4Batch6Filler_PE_CN
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


	// From: Req7Batch6Filler_PE_CN
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


	// From: Req1Batch6Filler_PE_CN
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


	// From: CodeObject1
	/* 81L) */ if (var_1_21) {
		/* 79L) */ if (/* 69L, 68L) */ ((var_1_22) <= (var_1_23))) {
			/* 78L) */ var_1_20 = (
				10
			);
		}
	}


	// From: CodeObject2
	/* 114L) */ if (/* 94L, 93L) */ ((/* 95L, 90L) */ (min (/* 95L, 90L) */ (var_1_23) , (/* 97L, 89L) */ ((8) ^ (var_1_22)))))) >= (/* 100L, 92L) */ (abs (var_1_26))))) {
		/* 113L) */ var_1_25 = (
			8
		);
	}


	// From: CodeObject3
	/* 166L) */ if (/* 124L, 123L) */ ((var_1_23) >= (/* 126L, 122L) */ ((/* 127L, 120L) */ (abs (var_1_28))) - (var_1_29))))) {
		/* 164L) */ if (/* 139L, 138L) */ ((var_1_23) != (var_1_29))) {
			/* 148L) */ var_1_27 = (
				var_1_30
			);
		} else {
			/* 162L) */ if (/* 152L, 151L) */ ((var_1_21) || (var_1_31))) {
				/* 161L) */ var_1_27 = (
					var_1_30
				);
			}
		}
	}


	// From: CodeObject4
	/* 173L) */ var_1_32 = (
		var_1_25
	);


	// From: CodeObject5
	/* 193L) */ if (var_1_21) {
		/* 185L) */ var_1_33 = (
			/* 184L) */ (abs (
				10000000u
			))
		);
	} else {
		/* 192L) */ var_1_33 = (
			/* 191L) */ (max (
				/* 191L) */ (
					/* 189L) */ (abs (
						var_1_25
					))
				) , (
					var_1_29
				)
			))
		);
	}


	// From: CodeObject6
	/* 219L) */ if (/* 203L, 202L) */ ((var_1_25) > (/* 205L, 201L) */ ((var_1_24) + (var_1_33))))) {
		/* 218L) */ var_1_34 = (
			/* 217L) */ (max (
				/* 217L) */ (
					var_1_35
				) , (
					var_1_36
				)
			))
		);
	}


	// From: CodeObject7
	/* 272L) */ if (/* 230L, 229L) */ ((var_1_25) > (/* 232L, 228L) */ (min (/* 232L, 228L) */ (var_1_27) , (/* 234L, 227L) */ (max (/* 234L, 227L) */ (var_1_29) , (var_1_24))))))))) {
		/* 270L) */ if (/* 250L, 249L) */ ((-256) != (/* 252L, 248L) */ (max (/* 252L, 248L) */ (10000000) , (var_1_34)))))) {
			/* 269L) */ var_1_37 = (
				/* 268L) */ ((
					/* 265L) */ (abs (
						/* 264L) */ ((
							var_1_35
						) + (
							var_1_34
						))
					))
				) + (
					/* 267L) */ (abs (
						64
					))
				))
			);
		}
	}


	// From: CodeObject8
	/* 297L) */ if (/* 279L, 278L) */ ((var_1_23) > (var_1_26))) {
		/* 290L) */ var_1_38 = (
			/* 289L) */ (min (
				/* 289L) */ (
					16
				) , (
					var_1_39
				)
			))
		);
	} else {
		/* 296L) */ var_1_38 = (
			/* 295L) */ (max (
				/* 295L) */ (
					var_1_39
				) , (
					-4
				)
			))
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
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_22 >= -32768);
	assume_abort_if_not(var_1_22 <= 32767);
	var_1_23 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_23 >= -32768);
	assume_abort_if_not(var_1_23 <= 32767);
	assume_abort_if_not(var_1_23 != 0);
	var_1_24 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_24 >= -2147483648);
	assume_abort_if_not(var_1_24 <= 2147483647);
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
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1);
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
		if (/* 310L, 7L, 11L, 384L, 407L, 1162L) */ ((var_1_3) >= (var_1_4))) {
		} else {
		}
	} else {
	}
	if (/* 348L, 66L, 74L, 514L, 527L, 1200L) */ ((/* 349L, 62L, 75L, 515L, 528L, 1201L) */ (min (/* 349L, 62L, 75L, 515L, 528L, 1201L) */ (var_1_16) , (var_1_9)))) >= (/* 352L, 65L, 78L, 518L, 531L, 1204L) */ ((var_1_8) - (var_1_11))))) {
	}
	if (/* 361L, 93L, 97L, 586L, 609L, 1213L) */ ((var_1_8) < (var_1_11))) {
	} else {
	}
	if (/* 386L, 131L, 140L, 682L, 706L, 989L, 1238L, 36L) */ ((/* 387L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (max (/* 387L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (/* 388L, 125L, 142L, 684L, 708L, 982L, 1240L, 29L) */ (- (var_1_15))) , (/* 390L, 128L, 144L, 686L, 710L, 986L, 1242L, 33L) */ ((last_1_var_1_12) * (var_1_6)))))) < (var_1_5))) {
		if (/* 396L, 152L, 158L, 691L, 715L, 995L, 1248L, 42L) */ ((var_1_11) != (/* 398L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (min (/* 398L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (last_1_var_1_8) , (var_1_10)))))) {
			if (last_1_var_1_17) {
			}
		}
	}
	if (var_1_17) {
		if (/* 428L, 212L, 221L, 882L, 902L, 1280L) */ ((var_1_7) > (/* 430L, 211L, 223L, 884L, 904L, 1282L) */ ((/* 431L, 207L, 224L, 885L, 905L, 1283L) */ (abs (var_1_5))) * (/* 433L, 210L, 226L, 887L, 907L, 1285L) */ ((var_1_12) * (63.375))))))) {
		}
	} else {
	}
	return /* 450L) */ ((
	/* 449L) */ ((
		/* 448L) */ ((
			/* 447L) */ ((
				/* 446L) */ ((
					/* 445L) */ ((
						/* 307L, 33L, 381L, 404L, 1159L) */ ((
							var_1_19
						) ? (
							/* 309L, 27L, 383L, 406L, 1161L) */ ((
								/* 310L, 7L, 11L, 384L, 407L, 1162L) */ ((
									var_1_3
								) >= (
									var_1_4
								))
							) ? (
								/* 313L, 19L, 387L, 410L, 1165L) */ ((
									var_1_1
								) == (
									/* 313L, 19L, 387L, 410L, 1165L) */ ((double) (
										/* 316L, 18L, 390L, 413L, 1168L) */ ((
											var_1_5
										) + (
											var_1_6
										))
									))
								))
							) : (
								/* 319L, 25L, 393L, 416L, 1171L) */ ((
									var_1_1
								) == (
									/* 319L, 25L, 393L, 416L, 1171L) */ ((double) (
										/* 322L, 24L, 396L, 419L, 1174L) */ ((
											4.125
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							/* 325L, 31L, 399L, 422L, 1177L) */ ((
								var_1_1
							) == (
								/* 325L, 31L, 399L, 422L, 1177L) */ ((double) (
									var_1_5
								))
							))
						))
					) && (
						/* 331L, 50L, 458L, 473L, 950L, 1183L) */ ((
							var_1_8
						) == (
							/* 331L, 50L, 458L, 473L, 950L, 1183L) */ ((signed long int) (
								/* 334L, 49L, 461L, 476L, 949L, 1186L) */ ((
									/* 335L, 44L, 462L, 477L, 943L, 1187L) */ ((
										/* 336L, 42L, 463L, 478L, 940L, 1188L) */ ((
											var_1_9
										) + (
											var_1_10
										))
									) - (
										last_1_var_1_16
									))
								) - (
									/* 341L, 48L, 467L, 482L, 948L, 1193L) */ ((
										var_1_11
									) - (
										/* 343L, 47L, 469L, 484L, 947L, 1195L) */ (abs (
											last_1_var_1_16
										))
									))
								))
							))
						))
					))
				) && (
					/* 347L, 86L, 513L, 526L, 1199L) */ ((
						/* 348L, 66L, 74L, 514L, 527L, 1200L) */ ((
							/* 349L, 62L, 75L, 515L, 528L, 1201L) */ (min (
								/* 349L, 62L, 75L, 515L, 528L, 1201L) */ (
									var_1_16
								) , (
									var_1_9
								)
							))
						) >= (
							/* 352L, 65L, 78L, 518L, 531L, 1204L) */ ((
								var_1_8
							) - (
								var_1_11
							))
						))
					) ? (
						/* 355L, 84L, 521L, 534L, 1207L) */ ((
							var_1_12
						) == (
							/* 355L, 84L, 521L, 534L, 1207L) */ ((float) (
								var_1_7
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 360L, 119L, 585L, 608L, 1212L) */ ((
					/* 361L, 93L, 97L, 586L, 609L, 1213L) */ ((
						var_1_8
					) < (
						var_1_11
					))
				) ? (
					/* 364L, 109L, 589L, 612L, 1216L) */ ((
						var_1_13
					) == (
						/* 364L, 109L, 589L, 612L, 1216L) */ ((float) (
							/* 367L, 108L, 592L, 615L, 1219L) */ ((
								/* 368L, 106L, 593L, 616L, 1220L) */ ((
									7.386826171811256E18f
								) - (
									/* 370L, 105L, 595L, 618L, 1222L) */ ((
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
					/* 374L, 117L, 599L, 622L, 1226L) */ ((
						var_1_13
					) == (
						/* 374L, 117L, 599L, 622L, 1226L) */ ((float) (
							/* 377L, 116L, 602L, 625L, 1229L) */ ((
								var_1_15
							) + (
								/* 379L, 115L, 604L, 627L, 1231L) */ (min (
									/* 379L, 115L, 604L, 627L, 1231L) */ (
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
			/* 385L, 175L, 681L, 705L, 1005L, 1237L, 52L) */ ((
				/* 386L, 131L, 140L, 682L, 706L, 989L, 1238L, 36L) */ ((
					/* 387L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (max (
						/* 387L, 129L, 141L, 683L, 707L, 987L, 1239L, 34L) */ (
							/* 388L, 125L, 142L, 684L, 708L, 982L, 1240L, 29L) */ (- (
								var_1_15
							))
						) , (
							/* 390L, 128L, 144L, 686L, 710L, 986L, 1242L, 33L) */ ((
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
				/* 395L, 173L, 690L, 714L, 1004L, 1247L, 51L) */ ((
					/* 396L, 152L, 158L, 691L, 715L, 995L, 1248L, 42L) */ ((
						var_1_11
					) != (
						/* 398L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (min (
							/* 398L, 151L, 160L, 693L, 717L, 994L, 1250L, 41L) */ (
								last_1_var_1_8
							) , (
								var_1_10
							)
						))
					))
				) ? (
					/* 402L, 171L, 696L, 720L, 1003L, 1254L, 50L) */ ((
						last_1_var_1_17
					) ? (
						/* 405L, 169L, 698L, 722L, 1002L, 1257L, 49L) */ ((
							var_1_16
						) == (
							/* 405L, 169L, 698L, 722L, 1002L, 1257L, 49L) */ ((signed long int) (
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
		/* 412L, 195L, 812L, 826L, 1264L) */ ((
			var_1_17
		) == (
			/* 412L, 195L, 812L, 826L, 1264L) */ ((unsigned char) (
				/* 415L, 194L, 815L, 829L, 1267L) */ ((
					/* 416L, 192L, 816L, 830L, 1268L) */ ((
						/* 417L, 188L, 817L, 831L, 1269L) */ ((
							var_1_3
						) * (
							var_1_9
						))
					) >= (
						/* 420L, 191L, 820L, 834L, 1272L) */ (max (
							/* 420L, 191L, 820L, 834L, 1272L) */ (
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
	/* 425L, 240L, 879L, 899L, 1277L) */ ((
		var_1_17
	) ? (
		/* 427L, 234L, 881L, 901L, 1279L) */ ((
			/* 428L, 212L, 221L, 882L, 902L, 1280L) */ ((
				var_1_7
			) > (
				/* 430L, 211L, 223L, 884L, 904L, 1282L) */ ((
					/* 431L, 207L, 224L, 885L, 905L, 1283L) */ (abs (
						var_1_5
					))
				) * (
					/* 433L, 210L, 226L, 887L, 907L, 1285L) */ ((
						var_1_12
					) * (
						63.375
					))
				))
			))
		) ? (
			/* 436L, 232L, 890L, 910L, 1288L) */ ((
				var_1_19
			) == (
				/* 436L, 232L, 890L, 910L, 1288L) */ ((unsigned char) (
					var_1_18
				))
			))
		) : (
			1
		))
	) : (
		/* 440L, 238L, 894L, 914L, 1292L) */ ((
			var_1_19
		) == (
			/* 440L, 238L, 894L, 914L, 1292L) */ ((unsigned char) (
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
