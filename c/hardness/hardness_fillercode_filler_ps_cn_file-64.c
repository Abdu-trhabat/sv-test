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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch64Filler_PS_CN.c", 13, "reach_error"); }
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
signed long int var_1_1 = -2;
signed long int var_1_4 = -100;
signed long int var_1_5 = -1;
signed long int var_1_6 = 128;
signed long int var_1_7 = 32;
signed long int var_1_8 = -10;
signed long int var_1_9 = 200;
signed char var_1_10 = -32;
unsigned char var_1_11 = 4;
signed long int var_1_12 = 4;
signed long int var_1_13 = 1731242407;
signed long int var_1_14 = 0;
signed char var_1_15 = 8;
signed char var_1_16 = -25;
signed char var_1_17 = -16;
unsigned long int var_1_18 = 0;
signed short int var_1_19 = 256;
signed short int var_1_20 = 28075;
signed short int var_1_21 = 25;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
signed char var_1_24 = 1;
signed char var_1_25 = 10;
unsigned long int var_1_26 = 64;
float var_1_28 = 127.75;
signed char var_1_29 = -25;
signed char var_1_30 = 1;
signed long int var_1_31 = 25;
float var_1_32 = 9.5;
float var_1_33 = 256.5;
unsigned long int var_1_34 = 0;
unsigned long int var_1_35 = 200;
signed long int var_1_36 = 4;
signed long int var_1_37 = 4;
unsigned long int var_1_38 = 128;
unsigned long int var_1_39 = 16;
unsigned char var_1_40 = 128;
signed char var_1_41 = 8;
unsigned char var_1_42 = 0;
unsigned short int var_1_43 = 256;
signed long int var_1_44 = 5;
unsigned char var_1_45 = 1;
unsigned char var_1_46 = 0;
signed short int var_1_47 = 16;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_1 = -2;
unsigned long int last_1_var_1_26 = 64;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 24L) */ if (/* 7L, 6L) */ ((/* 8L, 4L) */ ((var_1_29) + (var_1_30))) < (var_1_31))) {
		/* 23L) */ var_1_28 = (
			/* 22L) */ (min (
				/* 22L) */ (
					var_1_32
				) , (
					/* 21L) */ (abs (
						var_1_33
					))
				)
			))
		);
	}


	// From: CodeObject2
	/* 33L) */ var_1_34 = (
		var_1_35
	);


	// From: CodeObject3
	/* 56L) */ if (/* 41L, 40L) */ ((var_1_34) < (var_1_31))) {
		/* 55L) */ var_1_36 = (
			/* 54L) */ (abs (
				/* 53L) */ (max (
					/* 53L) */ (
						var_1_30
					) , (
						/* 52L) */ (min (
							/* 52L) */ (
								var_1_29
							) , (
								var_1_37
							)
						))
					)
				))
			))
		);
	}


	// From: CodeObject4
	/* 104L) */ if (/* 63L, 62L) */ ((var_1_34) > (var_1_36))) {
		/* 98L) */ if (/* 74L, 73L) */ ((/* 75L, 71L) */ (max (/* 75L, 71L) */ (32) , (var_1_35)))) <= (var_1_36))) {
			/* 88L) */ var_1_38 = (
				/* 87L) */ (abs (
					var_1_39
				))
			);
		} else {
			/* 97L) */ var_1_38 = (
				/* 96L) */ (abs (
					/* 95L) */ (min (
						/* 95L) */ (
							128u
						) , (
							/* 94L) */ (min (
								/* 94L) */ (
									var_1_39
								) , (
									var_1_35
								)
							))
						)
					))
				))
			);
		}
	} else {
		/* 103L) */ var_1_38 = (
			var_1_35
		);
	}


	// From: CodeObject5
	/* 151L) */ if (/* 111L, 110L) */ ((var_1_35) <= (100u))) {
		/* 145L) */ if (/* 125L, 124L) */ ((/* 126L, 120L) */ ((var_1_41) - (/* 128L, 119L) */ (abs (-2))))) == (/* 130L, 123L) */ ((var_1_30) + (-4))))) {
			/* 144L) */ var_1_40 = (
				var_1_42
			);
		}
	} else {
		/* 150L) */ var_1_40 = (
			16
		);
	}


	// From: CodeObject6
	/* 163L) */ var_1_43 = (
		/* 162L) */ (abs (
			var_1_40
		))
	);


	// From: CodeObject7
	/* 208L) */ if (/* 171L, 170L) */ ((var_1_32) > (var_1_28))) {
		/* 186L) */ var_1_44 = (
			/* 185L) */ ((
				/* 180L) */ (abs (
					var_1_43
				))
			) - (
				/* 184L) */ (min (
					/* 184L) */ (
						var_1_42
					) , (
						/* 183L) */ (abs (
							var_1_29
						))
					)
				))
			))
		);
	} else {
		/* 206L) */ if (/* 190L, 189L) */ ((var_1_32) <= (var_1_33))) {
			/* 201L) */ var_1_44 = (
				/* 200L) */ ((
					var_1_42
				) - (
					var_1_40
				))
			);
		} else {
			/* 205L) */ var_1_44 = (
				var_1_30
			);
		}
	}


	// From: CodeObject8
	/* 215L) */ var_1_45 = (
		var_1_46
	);


	// From: CodeObject9
	/* 223L) */ var_1_47 = (
		var_1_40
	);


	// From: Req2Batch64Filler_PS_CN
	signed long int stepLocal_0 = /* 939L, 73L, 79L, 494L, 519L) */ ((var_1_12) - (/* 941L, 72L, 81L, 496L, 521L) */ ((var_1_13) - (var_1_14))));
	/* 963L, 107L, 489L, 514L) */ if (/* 948L, 74L, 75L, 490L, 515L) */ ((/* 947L, 68L, 76L, 491L, 516L) */ ((var_1_4) >> (var_1_11))) < (stepLocal_0))) {
		/* 956L, 100L, 499L, 524L) */ var_1_10 = (
			/* 955L, 99L, 502L, 527L) */ ((
				var_1_11
			) + (
				/* 954L, 98L, 504L, 529L) */ (min (
					/* 954L, 98L, 504L, 529L) */ (
						var_1_15
					) , (
						var_1_16
					)
				))
			))
		);
	} else {
		/* 962L, 106L, 507L, 532L) */ var_1_10 = (
			/* 961L, 105L, 510L, 535L) */ ((
				var_1_17
			) + (
				var_1_11
			))
		);
	}


	// From: Req3Batch64Filler_PS_CN
	/* 970L, 128L, 592L, 606L) */ if (/* 971L, 115L, 116L, 593L, 607L) */ ((var_1_10) != (var_1_8))) {
		/* 974L, 127L, 596L, 610L) */ var_1_18 = (
			/* 977L, 126L, 599L, 613L) */ (min (
				/* 977L, 126L, 599L, 613L) */ (
					var_1_14
				) , (
					var_1_13
				)
			))
		);
	}


	// From: Req4Batch64Filler_PS_CN
	/* 983L, 147L, 647L, 658L) */ var_1_19 = (
		/* 986L, 146L, 650L, 661L) */ ((
			/* 987L, 144L, 651L, 662L) */ ((
				var_1_20
			) - (
				var_1_11
			))
		) - (
			var_1_21
		))
	);


	// From: Req6Batch64Filler_PS_CN
	signed long int stepLocal_1 = /* 1006L, 195L, 199L, 743L, 766L) */ ((/* 1007L, 193L, 200L, 744L, 767L) */ ((var_1_11) - (var_1_25))) + (var_1_17));
	/* 1028L, 226L, 741L, 764L) */ if (/* 1013L, 197L, 198L, 742L, 765L) */ ((stepLocal_1) > (var_1_21))) {
		/* 1019L, 217L, 749L, 772L) */ var_1_24 = (
			/* 1018L, 216L, 752L, 775L) */ (max (
				/* 1018L, 216L, 752L, 775L) */ (
					var_1_11
				) , (
					var_1_16
				)
			))
		);
	} else {
		/* 1027L, 225L, 755L, 778L) */ var_1_24 = (
			/* 1026L, 224L, 758L, 781L) */ (max (
				/* 1026L, 224L, 758L, 781L) */ (
					/* 1023L, 221L, 759L, 782L) */ (abs (
						var_1_15
					))
				) , (
					/* 1025L, 223L, 761L, 784L) */ (abs (
						var_1_16
					))
				)
			))
		);
	}


	// From: Req1Batch64Filler_PS_CN
	/* 903L, 56L, 343L, 380L) */ if (/* 904L, 4L, 5L, 344L, 381L) */ ((-8) <= (last_1_var_1_1))) {
		/* 908L, 35L, 348L, 385L) */ if (/* 909L, 16L, 17L, 349L, 386L) */ ((last_1_var_1_1) == (var_1_18))) {
			/* 913L, 34L, 353L, 390L) */ var_1_1 = (
				/* 916L, 33L, 356L, 393L) */ ((
					/* 917L, 29L, 357L, 394L) */ (min (
						/* 917L, 29L, 357L, 394L) */ (
							/* 918L, 27L, 358L, 395L) */ ((
								var_1_4
							) + (
								var_1_5
							))
						) , (
							var_1_6
						)
					))
				) + (
					/* 922L, 32L, 362L, 399L) */ ((
						var_1_7
					) + (
						var_1_8
					))
				))
			);
		}
	} else {
		/* 925L, 54L, 365L, 402L) */ if (/* 926L, 39L, 40L, 366L, 403L) */ ((128) < (var_1_5))) {
			/* 929L, 49L, 369L, 406L) */ var_1_1 = (
				var_1_8
			);
		} else {
			/* 933L, 53L, 373L, 410L) */ var_1_1 = (
				var_1_9
			);
		}
	}


	// From: Req7Batch64Filler_PS_CN
	/* 1033L, 265L, 834L, 851L) */ if (/* 1034L, 239L, 240L, 835L, 852L) */ ((/* 1035L, 237L, 241L, 836L, 853L) */ ((var_1_18) * (var_1_1))) < (last_1_var_1_26))) {
		/* 1040L, 263L, 841L, 858L) */ if (/* 1041L, 252L, 253L, 842L, 859L) */ ((var_1_24) < (var_1_11))) {
			/* 1044L, 262L, 845L, 862L) */ var_1_26 = (
				64u
			);
		}
	}


	// From: Req5Batch64Filler_PS_CN
	/* 993L, 183L, 690L, 703L) */ if (/* 994L, 166L, 167L, 691L, 704L) */ (! (/* 995L, 165L, 168L, 692L, 705L) */ ((/* 996L, 163L, 169L, 693L, 706L) */ ((64) * (var_1_26))) < (var_1_26))))) {
		/* 1000L, 182L, 697L, 710L) */ var_1_22 = (
			var_1_23
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_4 >= -536870911);
	assume_abort_if_not(var_1_4 <= 536870912);
	var_1_5 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_5 >= -536870911);
	assume_abort_if_not(var_1_5 <= 536870911);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= -1073741823);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_7 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_7 >= -536870911);
	assume_abort_if_not(var_1_7 <= 536870912);
	var_1_8 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_8 >= -536870911);
	assume_abort_if_not(var_1_8 <= 536870911);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -2147483647);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_11 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_11 >= 1);
	assume_abort_if_not(var_1_11 <= 30);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1);
	assume_abort_if_not(var_1_12 <= 2147483647);
	var_1_13 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_13 >= 1073741823);
	assume_abort_if_not(var_1_13 <= 2147483647);
	var_1_14 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_14 >= 0);
	assume_abort_if_not(var_1_14 <= 1073741823);
	var_1_15 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_15 >= -63);
	assume_abort_if_not(var_1_15 <= 63);
	var_1_16 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_16 >= -63);
	assume_abort_if_not(var_1_16 <= 63);
	var_1_17 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_17 >= -63);
	assume_abort_if_not(var_1_17 <= 63);
	var_1_20 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_20 >= 16382);
	assume_abort_if_not(var_1_20 <= 32766);
	var_1_21 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 32766);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 127);
	var_1_29 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_29 >= -128);
	assume_abort_if_not(var_1_29 <= 127);
	var_1_30 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_30 >= -128);
	assume_abort_if_not(var_1_30 <= 127);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	var_1_32 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 4294967294);
	var_1_37 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_37 >= -2147483646);
	assume_abort_if_not(var_1_37 <= 2147483646);
	var_1_39 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 4294967294);
	var_1_41 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_41 >= -1);
	assume_abort_if_not(var_1_41 <= 127);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
	var_1_46 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 0);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
	last_1_var_1_26 = var_1_26;
}

int property(void) {
	if (/* 229L, 4L, 8L, 418L, 455L, 1052L) */ ((-8) <= (last_1_var_1_1))) {
		if (/* 234L, 16L, 20L, 423L, 460L, 1057L) */ ((last_1_var_1_1) == (var_1_18))) {
		}
	} else {
		if (/* 251L, 39L, 43L, 440L, 477L, 1074L) */ ((128) < (var_1_5))) {
		} else {
		}
	}
	if (/* 264L, 74L, 84L, 540L, 565L, 1087L) */ ((/* 265L, 68L, 85L, 541L, 566L, 1088L) */ ((var_1_4) >> (var_1_11))) < (/* 268L, 73L, 88L, 544L, 569L, 1091L) */ ((var_1_12) - (/* 270L, 72L, 90L, 546L, 571L, 1093L) */ ((var_1_13) - (var_1_14))))))) {
	} else {
	}
	if (/* 292L, 115L, 119L, 621L, 635L, 1115L) */ ((var_1_10) != (var_1_8))) {
	}
	if (/* 315L, 166L, 173L, 717L, 730L, 1138L) */ (! (/* 316L, 165L, 174L, 718L, 731L, 1139L) */ ((/* 317L, 163L, 175L, 719L, 732L, 1140L) */ ((64) * (var_1_26))) < (var_1_26))))) {
	}
	if (/* 327L, 197L, 205L, 788L, 811L, 1150L) */ ((/* 328L, 195L, 206L, 789L, 812L, 1151L) */ ((/* 329L, 193L, 207L, 790L, 813L, 1152L) */ ((var_1_11) - (var_1_25))) + (var_1_17))) > (var_1_21))) {
	} else {
	}
	if (/* 351L, 239L, 245L, 869L, 886L, 1174L) */ ((/* 352L, 237L, 246L, 870L, 887L, 1175L) */ ((var_1_18) * (var_1_1))) < (last_1_var_1_26))) {
		if (/* 358L, 252L, 256L, 876L, 893L, 1181L) */ ((var_1_24) < (var_1_11))) {
		}
	}
	return /* 371L) */ ((
	/* 370L) */ ((
		/* 369L) */ ((
			/* 368L) */ ((
				/* 367L) */ ((
					/* 366L) */ ((
						/* 228L, 57L, 417L, 454L, 1051L) */ ((
							/* 229L, 4L, 8L, 418L, 455L, 1052L) */ ((
								-8
							) <= (
								last_1_var_1_1
							))
						) ? (
							/* 233L, 36L, 422L, 459L, 1056L) */ ((
								/* 234L, 16L, 20L, 423L, 460L, 1057L) */ ((
									last_1_var_1_1
								) == (
									var_1_18
								))
							) ? (
								/* 238L, 34L, 427L, 464L, 1061L) */ ((
									var_1_1
								) == (
									/* 238L, 34L, 427L, 464L, 1061L) */ ((signed long int) (
										/* 241L, 33L, 430L, 467L, 1064L) */ ((
											/* 242L, 29L, 431L, 468L, 1065L) */ (min (
												/* 242L, 29L, 431L, 468L, 1065L) */ (
													/* 243L, 27L, 432L, 469L, 1066L) */ ((
														var_1_4
													) + (
														var_1_5
													))
												) , (
													var_1_6
												)
											))
										) + (
											/* 247L, 32L, 436L, 473L, 1070L) */ ((
												var_1_7
											) + (
												var_1_8
											))
										))
									))
								))
							) : (
								1
							))
						) : (
							/* 250L, 55L, 439L, 476L, 1073L) */ ((
								/* 251L, 39L, 43L, 440L, 477L, 1074L) */ ((
									128
								) < (
									var_1_5
								))
							) ? (
								/* 254L, 49L, 443L, 480L, 1077L) */ ((
									var_1_1
								) == (
									/* 254L, 49L, 443L, 480L, 1077L) */ ((signed long int) (
										var_1_8
									))
								))
							) : (
								/* 258L, 53L, 447L, 484L, 1081L) */ ((
									var_1_1
								) == (
									/* 258L, 53L, 447L, 484L, 1081L) */ ((signed long int) (
										var_1_9
									))
								))
							))
						))
					) && (
						/* 263L, 108L, 539L, 564L, 1086L) */ ((
							/* 264L, 74L, 84L, 540L, 565L, 1087L) */ ((
								/* 265L, 68L, 85L, 541L, 566L, 1088L) */ ((
									var_1_4
								) >> (
									var_1_11
								))
							) < (
								/* 268L, 73L, 88L, 544L, 569L, 1091L) */ ((
									var_1_12
								) - (
									/* 270L, 72L, 90L, 546L, 571L, 1093L) */ ((
										var_1_13
									) - (
										var_1_14
									))
								))
							))
						) ? (
							/* 273L, 100L, 549L, 574L, 1096L) */ ((
								var_1_10
							) == (
								/* 273L, 100L, 549L, 574L, 1096L) */ ((signed char) (
									/* 276L, 99L, 552L, 577L, 1099L) */ ((
										var_1_11
									) + (
										/* 278L, 98L, 554L, 579L, 1101L) */ (min (
											/* 278L, 98L, 554L, 579L, 1101L) */ (
												var_1_15
											) , (
												var_1_16
											)
										))
									))
								))
							))
						) : (
							/* 281L, 106L, 557L, 582L, 1104L) */ ((
								var_1_10
							) == (
								/* 281L, 106L, 557L, 582L, 1104L) */ ((signed char) (
									/* 284L, 105L, 560L, 585L, 1107L) */ ((
										var_1_17
									) + (
										var_1_11
									))
								))
							))
						))
					))
				) && (
					/* 291L, 129L, 620L, 634L, 1114L) */ ((
						/* 292L, 115L, 119L, 621L, 635L, 1115L) */ ((
							var_1_10
						) != (
							var_1_8
						))
					) ? (
						/* 295L, 127L, 624L, 638L, 1118L) */ ((
							var_1_18
						) == (
							/* 295L, 127L, 624L, 638L, 1118L) */ ((unsigned long int) (
								/* 298L, 126L, 627L, 641L, 1121L) */ (min (
									/* 298L, 126L, 627L, 641L, 1121L) */ (
										var_1_14
									) , (
										var_1_13
									)
								))
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 304L, 147L, 669L, 680L, 1127L) */ ((
					var_1_19
				) == (
					/* 304L, 147L, 669L, 680L, 1127L) */ ((signed short int) (
						/* 307L, 146L, 672L, 683L, 1130L) */ ((
							/* 308L, 144L, 673L, 684L, 1131L) */ ((
								var_1_20
							) - (
								var_1_11
							))
						) - (
							var_1_21
						))
					))
				))
			))
		) && (
			/* 314L, 184L, 716L, 729L, 1137L) */ ((
				/* 315L, 166L, 173L, 717L, 730L, 1138L) */ (! (
					/* 316L, 165L, 174L, 718L, 731L, 1139L) */ ((
						/* 317L, 163L, 175L, 719L, 732L, 1140L) */ ((
							64
						) * (
							var_1_26
						))
					) < (
						var_1_26
					))
				))
			) ? (
				/* 321L, 182L, 723L, 736L, 1144L) */ ((
					var_1_22
				) == (
					/* 321L, 182L, 723L, 736L, 1144L) */ ((unsigned char) (
						var_1_23
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 326L, 227L, 787L, 810L, 1149L) */ ((
			/* 327L, 197L, 205L, 788L, 811L, 1150L) */ ((
				/* 328L, 195L, 206L, 789L, 812L, 1151L) */ ((
					/* 329L, 193L, 207L, 790L, 813L, 1152L) */ ((
						var_1_11
					) - (
						var_1_25
					))
				) + (
					var_1_17
				))
			) > (
				var_1_21
			))
		) ? (
			/* 334L, 217L, 795L, 818L, 1157L) */ ((
				var_1_24
			) == (
				/* 334L, 217L, 795L, 818L, 1157L) */ ((signed char) (
					/* 337L, 216L, 798L, 821L, 1160L) */ (max (
						/* 337L, 216L, 798L, 821L, 1160L) */ (
							var_1_11
						) , (
							var_1_16
						)
					))
				))
			))
		) : (
			/* 340L, 225L, 801L, 824L, 1163L) */ ((
				var_1_24
			) == (
				/* 340L, 225L, 801L, 824L, 1163L) */ ((signed char) (
					/* 343L, 224L, 804L, 827L, 1166L) */ (max (
						/* 343L, 224L, 804L, 827L, 1166L) */ (
							/* 344L, 221L, 805L, 828L, 1167L) */ (abs (
								var_1_15
							))
						) , (
							/* 346L, 223L, 807L, 830L, 1169L) */ (abs (
								var_1_16
							))
						)
					))
				))
			))
		))
	))
) && (
	/* 350L, 266L, 868L, 885L, 1173L) */ ((
		/* 351L, 239L, 245L, 869L, 886L, 1174L) */ ((
			/* 352L, 237L, 246L, 870L, 887L, 1175L) */ ((
				var_1_18
			) * (
				var_1_1
			))
		) < (
			last_1_var_1_26
		))
	) ? (
		/* 357L, 264L, 875L, 892L, 1180L) */ ((
			/* 358L, 252L, 256L, 876L, 893L, 1181L) */ ((
				var_1_24
			) < (
				var_1_11
			))
		) ? (
			/* 361L, 262L, 879L, 896L, 1184L) */ ((
				var_1_26
			) == (
				/* 361L, 262L, 879L, 896L, 1184L) */ ((unsigned long int) (
					64u
				))
			))
		) : (
			1
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
