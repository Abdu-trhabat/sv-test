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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch148Filler_PR_CN.c", 13, "reach_error"); }
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
signed short int var_1_1 = 0;
unsigned char var_1_2 = 1;
unsigned char var_1_4 = 10;
signed long int var_1_6 = 256;
double var_1_7 = 99999.875;
double var_1_8 = 3.6;
double var_1_9 = 15.6;
unsigned char var_1_10 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
double var_1_14 = 15.5;
double var_1_15 = 15.5;
double var_1_16 = 31.6;
unsigned char var_1_17 = 1;
signed long int var_1_18 = 5;
signed long int var_1_19 = 1000000000;
signed long int var_1_20 = 128;
unsigned char var_1_21 = 25;
unsigned char var_1_22 = 32;
unsigned char var_1_23 = 50;
double var_1_24 = 64.44;
double var_1_25 = 1.25;
double var_1_26 = 9.8;
double var_1_27 = 8.125;
signed short int var_1_28 = 2;
signed short int var_1_29 = 128;
signed long int var_1_30 = 1;
unsigned long int var_1_31 = 2;
unsigned long int var_1_32 = 4;
unsigned long int var_1_33 = 5;
unsigned char var_1_34 = 0;
unsigned long int var_1_35 = 32;
unsigned long int var_1_36 = 8;
signed long int var_1_37 = -256;
signed long int var_1_38 = 256;
unsigned long int var_1_39 = 10;
double var_1_40 = 3.6;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 2;
unsigned long int var_1_43 = 5;
signed short int var_1_44 = -128;
signed long int var_1_45 = -32;
unsigned char var_1_46 = 0;
signed short int var_1_47 = 5;

// Calibration values

// Last'ed variables
signed long int last_1_var_1_18 = 5;
unsigned char last_1_var_1_21 = 25;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch148Filler_PR_CN
	/* 20L, 38L, 265L, 286L, 959L, 989L) */ if (/* 10L, 11L, 12L, 266L, 287L, 949L, 990L) */ ((/* 3L, 5L, 13L, 267L, 288L, 942L, 991L) */ ((last_1_var_1_21) / (var_1_4))) >= (/* 9L, 10L, 16L, 270L, 291L, 948L, 995L) */ (min (/* 9L, 10L, 16L, 270L, 291L, 948L, 995L) */ (last_1_var_1_18) , (/* 8L, 9L, 18L, 272L, 293L, 947L, 998L) */ ((32) - (var_1_6)))))))) {
		/* 15L, 33L, 275L, 296L, 954L, 1001L) */ var_1_1 = (
			last_1_var_1_21
		);
	} else {
		/* 19L, 37L, 279L, 300L, 958L, 1006L) */ var_1_1 = (
			var_1_4
		);
	}


	// From: Req11Batch148Filler_PR_CN
	/* 1151L, 258L, 916L, 922L) */ var_1_30 = (
		var_1_1
	);


	// From: CodeObject2
	/* 83L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject8
	/* 269L) */ var_1_46 = (
		0
	);


	// From: Req2Batch148Filler_PR_CN
	/* 1012L, 56L, 348L, 359L) */ var_1_7 = (
		/* 1015L, 55L, 351L, 362L) */ ((
			var_1_8
		) + (
			/* 1017L, 54L, 353L, 364L) */ (min (
				/* 1017L, 54L, 353L, 364L) */ (
					/* 1018L, 52L, 354L, 365L) */ (abs (
						99.4
					))
				) , (
					var_1_9
				)
			))
		))
	);


	// From: CodeObject5
	/* 223L) */ if (/* 177L, 176L) */ ((var_1_37) > (var_1_33))) {
		/* 217L) */ if (/* 188L, 187L) */ ((/* 189L, 185L) */ (min (/* 189L, 185L) */ (8.5f) , (16.4f)))) > (var_1_40))) {
			/* 215L) */ if (/* 201L, 200L) */ ((var_1_42) <= (var_1_32))) {
				/* 214L) */ var_1_43 = (
					/* 213L) */ (abs (
						/* 212L) */ (max (
							/* 212L) */ (
								/* 210L) */ (abs (
									var_1_42
								))
							) , (
								var_1_35
							)
						))
					))
				);
			}
		}
	} else {
		/* 222L) */ var_1_43 = (
			var_1_42
		);
	}


	// From: Req4Batch148Filler_PR_CN
	/* 1040L, 107L, 514L, 529L) */ var_1_14 = (
		/* 1043L, 106L, 517L, 532L) */ ((
			/* 1044L, 101L, 518L, 533L) */ (max (
				/* 1044L, 101L, 518L, 533L) */ (
					var_1_8
				) , (
					var_1_9
				)
			))
		) + (
			/* 1047L, 105L, 521L, 536L) */ ((
				var_1_15
			) + (
				/* 1049L, 104L, 523L, 538L) */ (abs (
					var_1_16
				))
			))
		))
	);


	// From: Req5Batch148Filler_PR_CN
	/* 1056L, 122L, 575L, 585L) */ var_1_17 = (
		/* 1059L, 121L, 578L, 588L) */ (! (
			var_1_13
		))
	);


	// From: Req8Batch148Filler_PR_CN
	signed long int stepLocal_2 = var_1_20;
	/* 1134L, 227L, 775L, 798L) */ if (/* 1115L, 202L, 203L, 776L, 799L) */ ((stepLocal_2) == (var_1_6))) {
		/* 1123L, 216L, 779L, 802L) */ var_1_24 = (
			/* 1122L, 215L, 782L, 805L) */ ((
				var_1_25
			) - (
				/* 1121L, 214L, 784L, 807L) */ ((
					var_1_26
				) + (
					var_1_27
				))
			))
		);
	} else {
		/* 1133L, 226L, 787L, 810L) */ var_1_24 = (
			/* 1132L, 225L, 790L, 813L) */ (max (
				/* 1132L, 225L, 790L, 813L) */ (
					/* 1128L, 221L, 791L, 814L) */ ((
						var_1_9
					) + (
						var_1_8
					))
				) , (
					/* 1131L, 224L, 794L, 817L) */ ((
						var_1_27
					) + (
						var_1_26
					))
				)
			))
		);
	}


	// From: CodeObject4
	/* 170L) */ if (/* 132L, 131L) */ ((var_1_39) >= (/* 134L, 130L) */ (max (/* 134L, 130L) */ (var_1_32) , (/* 136L, 129L) */ ((var_1_36) >> (16)))))))) {
		/* 168L) */ if (/* 152L, 151L) */ ((/* 153L, 147L) */ (- (var_1_37))) > (/* 155L, 150L) */ ((var_1_36) + (var_1_39))))) {
			/* 167L) */ var_1_41 = (
				var_1_42
			);
		}
	}


	// From: CodeObject6
	/* 243L) */ if (/* 231L, 230L) */ ((var_1_35) >= (/* 233L, 229L) */ (abs (var_1_39))))) {
		/* 242L) */ var_1_44 = (
			var_1_42
		);
	}


	// From: Req9Batch148Filler_PR_CN
	/* 1139L, 238L, 868L, 874L) */ var_1_28 = (
		var_1_4
	);


	// From: CodeObject7
	/* 262L) */ if (var_1_34) {
		/* 254L) */ var_1_45 = (
			/* 253L) */ (abs (
				var_1_44
			))
		);
	} else {
		/* 261L) */ var_1_45 = (
			/* 260L) */ (abs (
				/* 259L) */ ((
					var_1_44
				) + (
					var_1_41
				))
			))
		);
	}


	// From: Req10Batch148Filler_PR_CN
	/* 1145L, 248L, 892L, 898L) */ var_1_29 = (
		var_1_23
	);


	// From: CodeObject1
	/* 76L) */ if (/* 54L, 53L) */ ((/* 55L, 51L) */ (abs (var_1_32))) < (var_1_33))) {
		/* 74L) */ if (var_1_34) {
			/* 73L) */ var_1_31 = (
				/* 72L) */ ((
					/* 70L) */ (max (
						/* 70L) */ (
							var_1_35
						) , (
							/* 69L) */ (abs (
								5u
							))
						)
					))
				) + (
					var_1_36
				))
			);
		}
	}


	// From: Req6Batch148Filler_PR_CN
	signed long int stepLocal_0 = var_1_6;
	/* 1084L, 160L, 611L, 633L) */ if (/* 1066L, 137L, 138L, 612L, 634L) */ ((stepLocal_0) != (var_1_29))) {
		/* 1072L, 149L, 615L, 637L) */ var_1_18 = (
			/* 1071L, 148L, 618L, 640L) */ ((
				-500
			) + (
				var_1_4
			))
		);
	} else {
		/* 1083L, 159L, 621L, 643L) */ var_1_18 = (
			/* 1082L, 158L, 624L, 646L) */ ((
				var_1_4
			) - (
				/* 1081L, 157L, 626L, 648L) */ ((
					last_1_var_1_18
				) + (
					/* 1080L, 156L, 629L, 651L) */ ((
						var_1_19
					) - (
						var_1_20
					))
				))
			))
		);
	}


	// From: Req3Batch148Filler_PR_CN
	/* 1024L, 87L, 453L, 468L) */ if (/* 1025L, 65L, 66L, 454L, 469L) */ ((var_1_29) > (var_1_18))) {
		/* 1028L, 85L, 457L, 472L) */ if (/* 1029L, 74L, 75L, 458L, 473L) */ ((var_1_2) || (var_1_12))) {
			/* 1032L, 84L, 461L, 476L) */ var_1_10 = (
				var_1_13
			);
		}
	}


	// From: Req7Batch148Filler_PR_CN
	signed long int stepLocal_1 = var_1_30;
	/* 1107L, 196L, 699L, 718L) */ if (/* 1093L, 168L, 169L, 700L, 719L) */ ((var_1_8) < (var_1_14))) {
		/* 1102L, 190L, 703L, 722L) */ if (/* 1095L, 177L, 178L, 704L, 723L) */ ((var_1_28) <= (stepLocal_1))) {
			/* 1101L, 189L, 707L, 726L) */ var_1_21 = (
				/* 1100L, 188L, 710L, 729L) */ (max (
					/* 1100L, 188L, 710L, 729L) */ (
						var_1_22
					) , (
						var_1_23
					)
				))
			);
		}
	} else {
		/* 1106L, 195L, 713L, 732L) */ var_1_21 = (
			var_1_22
		);
	}


	// From: CodeObject3
	/* 120L) */ if (/* 92L, 91L) */ ((/* 93L, 89L) */ (abs (4.2))) <= (var_1_40))) {
		/* 118L) */ if (/* 103L, 102L) */ ((var_1_31) > (8u))) {
			/* 112L) */ var_1_39 = (
				var_1_35
			);
		} else {
			/* 117L) */ var_1_39 = (
				/* 116L) */ (abs (
					var_1_36
				))
			);
		}
	}


	// From: CodeObject9
	/* 277L) */ var_1_47 = (
		var_1_41
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 1);
	var_1_4 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 255);
	assume_abort_if_not(var_1_4 != 0);
	var_1_6 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 2147483647);
	var_1_8 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
	var_1_12 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 1);
	var_1_13 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_13 >= 0);
	assume_abort_if_not(var_1_13 <= 0);
	var_1_15 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_15 >= -230584.3009213691400e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 2305843.009213691400e+12F && var_1_15 >= 1.0e-20F ));
	var_1_16 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_16 >= -230584.3009213691400e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 2305843.009213691400e+12F && var_1_16 >= 1.0e-20F ));
	var_1_19 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_19 >= 536870911);
	assume_abort_if_not(var_1_19 <= 1073741823);
	var_1_20 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 536870911);
	var_1_22 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 254);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 254);
	var_1_25 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
	var_1_27 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_32 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 4294967295);
	var_1_33 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_33 >= 0);
	assume_abort_if_not(var_1_33 <= 4294967295);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 0);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_35 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 2147483647);
	var_1_36 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 2147483647);
	var_1_38 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_38 >= -2147483647);
	assume_abort_if_not(var_1_38 <= 2147483646);
	var_1_40 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 254);
}



void updateLastVariables(void) {
	last_1_var_1_18 = var_1_18;
	last_1_var_1_21 = var_1_21;
}

int property(void) {
	if (/* 283L, 11L, 21L, 308L, 329L, 973L, 1159L, 34L) */ ((/* 284L, 5L, 22L, 309L, 330L, 966L, 1160L, 27L) */ ((last_1_var_1_21) / (var_1_4))) >= (/* 288L, 10L, 25L, 312L, 333L, 972L, 1164L, 33L) */ (min (/* 288L, 10L, 25L, 312L, 333L, 972L, 1164L, 33L) */ (last_1_var_1_18) , (/* 291L, 9L, 27L, 314L, 335L, 971L, 1167L, 32L) */ ((32) - (var_1_6)))))))) {
	} else {
	}
	if (/* 318L, 65L, 69L, 484L, 499L, 1194L) */ ((var_1_29) > (var_1_18))) {
		if (/* 322L, 74L, 78L, 488L, 503L, 1198L) */ ((var_1_2) || (var_1_12))) {
		}
	}
	if (/* 356L, 137L, 141L, 656L, 678L, 1232L) */ ((var_1_6) != (var_1_29))) {
	} else {
	}
	if (/* 378L, 168L, 172L, 738L, 757L, 1254L) */ ((var_1_8) < (var_1_14))) {
		if (/* 382L, 177L, 181L, 742L, 761L, 1258L) */ ((var_1_28) <= (var_1_30))) {
		}
	} else {
	}
	if (/* 397L, 202L, 206L, 822L, 845L, 1273L) */ ((var_1_20) == (var_1_6))) {
	} else {
	}
	return /* 446L) */ ((
	/* 445L) */ ((
		/* 444L) */ ((
			/* 443L) */ ((
				/* 442L) */ ((
					/* 441L) */ ((
						/* 440L) */ ((
							/* 439L) */ ((
								/* 438L) */ ((
									/* 437L) */ ((
										/* 282L, 39L, 307L, 328L, 983L, 1158L, 44L) */ ((
											/* 283L, 11L, 21L, 308L, 329L, 973L, 1159L, 34L) */ ((
												/* 284L, 5L, 22L, 309L, 330L, 966L, 1160L, 27L) */ ((
													last_1_var_1_21
												) / (
													var_1_4
												))
											) >= (
												/* 288L, 10L, 25L, 312L, 333L, 972L, 1164L, 33L) */ (min (
													/* 288L, 10L, 25L, 312L, 333L, 972L, 1164L, 33L) */ (
														last_1_var_1_18
													) , (
														/* 291L, 9L, 27L, 314L, 335L, 971L, 1167L, 32L) */ ((
															32
														) - (
															var_1_6
														))
													)
												))
											))
										) ? (
											/* 294L, 33L, 317L, 338L, 978L, 1170L, 39L) */ ((
												var_1_1
											) == (
												/* 294L, 33L, 317L, 338L, 978L, 1170L, 39L) */ ((signed short int) (
													last_1_var_1_21
												))
											))
										) : (
											/* 299L, 37L, 321L, 342L, 982L, 1175L, 43L) */ ((
												var_1_1
											) == (
												/* 299L, 37L, 321L, 342L, 982L, 1175L, 43L) */ ((signed short int) (
													var_1_4
												))
											))
										))
									) && (
										/* 305L, 56L, 370L, 381L, 1181L) */ ((
											var_1_7
										) == (
											/* 305L, 56L, 370L, 381L, 1181L) */ ((double) (
												/* 308L, 55L, 373L, 384L, 1184L) */ ((
													var_1_8
												) + (
													/* 310L, 54L, 375L, 386L, 1186L) */ (min (
														/* 310L, 54L, 375L, 386L, 1186L) */ (
															/* 311L, 52L, 376L, 387L, 1187L) */ (abs (
																99.4
															))
														) , (
															var_1_9
														)
													))
												))
											))
										))
									))
								) && (
									/* 317L, 88L, 483L, 498L, 1193L) */ ((
										/* 318L, 65L, 69L, 484L, 499L, 1194L) */ ((
											var_1_29
										) > (
											var_1_18
										))
									) ? (
										/* 321L, 86L, 487L, 502L, 1197L) */ ((
											/* 322L, 74L, 78L, 488L, 503L, 1198L) */ ((
												var_1_2
											) || (
												var_1_12
											))
										) ? (
											/* 325L, 84L, 491L, 506L, 1201L) */ ((
												var_1_10
											) == (
												/* 325L, 84L, 491L, 506L, 1201L) */ ((unsigned char) (
													var_1_13
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
								/* 333L, 107L, 544L, 559L, 1209L) */ ((
									var_1_14
								) == (
									/* 333L, 107L, 544L, 559L, 1209L) */ ((double) (
										/* 336L, 106L, 547L, 562L, 1212L) */ ((
											/* 337L, 101L, 548L, 563L, 1213L) */ (max (
												/* 337L, 101L, 548L, 563L, 1213L) */ (
													var_1_8
												) , (
													var_1_9
												)
											))
										) + (
											/* 340L, 105L, 551L, 566L, 1216L) */ ((
												var_1_15
											) + (
												/* 342L, 104L, 553L, 568L, 1218L) */ (abs (
													var_1_16
												))
											))
										))
									))
								))
							))
						) && (
							/* 349L, 122L, 595L, 605L, 1225L) */ ((
								var_1_17
							) == (
								/* 349L, 122L, 595L, 605L, 1225L) */ ((unsigned char) (
									/* 352L, 121L, 598L, 608L, 1228L) */ (! (
										var_1_13
									))
								))
							))
						))
					) && (
						/* 355L, 161L, 655L, 677L, 1231L) */ ((
							/* 356L, 137L, 141L, 656L, 678L, 1232L) */ ((
								var_1_6
							) != (
								var_1_29
							))
						) ? (
							/* 359L, 149L, 659L, 681L, 1235L) */ ((
								var_1_18
							) == (
								/* 359L, 149L, 659L, 681L, 1235L) */ ((signed long int) (
									/* 362L, 148L, 662L, 684L, 1238L) */ ((
										-500
									) + (
										var_1_4
									))
								))
							))
						) : (
							/* 365L, 159L, 665L, 687L, 1241L) */ ((
								var_1_18
							) == (
								/* 365L, 159L, 665L, 687L, 1241L) */ ((signed long int) (
									/* 368L, 158L, 668L, 690L, 1244L) */ ((
										var_1_4
									) - (
										/* 370L, 157L, 670L, 692L, 1246L) */ ((
											last_1_var_1_18
										) + (
											/* 373L, 156L, 673L, 695L, 1249L) */ ((
												var_1_19
											) - (
												var_1_20
											))
										))
									))
								))
							))
						))
					))
				) && (
					/* 377L, 197L, 737L, 756L, 1253L) */ ((
						/* 378L, 168L, 172L, 738L, 757L, 1254L) */ ((
							var_1_8
						) < (
							var_1_14
						))
					) ? (
						/* 381L, 191L, 741L, 760L, 1257L) */ ((
							/* 382L, 177L, 181L, 742L, 761L, 1258L) */ ((
								var_1_28
							) <= (
								var_1_30
							))
						) ? (
							/* 385L, 189L, 745L, 764L, 1261L) */ ((
								var_1_21
							) == (
								/* 385L, 189L, 745L, 764L, 1261L) */ ((unsigned char) (
									/* 388L, 188L, 748L, 767L, 1264L) */ (max (
										/* 388L, 188L, 748L, 767L, 1264L) */ (
											var_1_22
										) , (
											var_1_23
										)
									))
								))
							))
						) : (
							1
						))
					) : (
						/* 391L, 195L, 751L, 770L, 1267L) */ ((
							var_1_21
						) == (
							/* 391L, 195L, 751L, 770L, 1267L) */ ((unsigned char) (
								var_1_22
							))
						))
					))
				))
			) && (
				/* 396L, 228L, 821L, 844L, 1272L) */ ((
					/* 397L, 202L, 206L, 822L, 845L, 1273L) */ ((
						var_1_20
					) == (
						var_1_6
					))
				) ? (
					/* 400L, 216L, 825L, 848L, 1276L) */ ((
						var_1_24
					) == (
						/* 400L, 216L, 825L, 848L, 1276L) */ ((double) (
							/* 403L, 215L, 828L, 851L, 1279L) */ ((
								var_1_25
							) - (
								/* 405L, 214L, 830L, 853L, 1281L) */ ((
									var_1_26
								) + (
									var_1_27
								))
							))
						))
					))
				) : (
					/* 408L, 226L, 833L, 856L, 1284L) */ ((
						var_1_24
					) == (
						/* 408L, 226L, 833L, 856L, 1284L) */ ((double) (
							/* 411L, 225L, 836L, 859L, 1287L) */ (max (
								/* 411L, 225L, 836L, 859L, 1287L) */ (
									/* 412L, 221L, 837L, 860L, 1288L) */ ((
										var_1_9
									) + (
										var_1_8
									))
								) , (
									/* 415L, 224L, 840L, 863L, 1291L) */ ((
										var_1_27
									) + (
										var_1_26
									))
								)
							))
						))
					))
				))
			))
		) && (
			/* 420L, 238L, 880L, 886L, 1296L) */ ((
				var_1_28
			) == (
				/* 420L, 238L, 880L, 886L, 1296L) */ ((signed short int) (
					var_1_4
				))
			))
		))
	) && (
		/* 426L, 248L, 904L, 910L, 1302L) */ ((
			var_1_29
		) == (
			/* 426L, 248L, 904L, 910L, 1302L) */ ((signed short int) (
				var_1_23
			))
		))
	))
) && (
	/* 432L, 258L, 928L, 934L, 1308L) */ ((
		var_1_30
	) == (
		/* 432L, 258L, 928L, 934L, 1308L) */ ((signed long int) (
			var_1_1
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
