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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch177Filler_PE_CN.c", 13, "reach_error"); }
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
unsigned long int var_1_1 = 10;
float var_1_2 = 10.5;
float var_1_3 = -0.6;
unsigned long int var_1_4 = 500;
unsigned long int var_1_5 = 4;
unsigned long int var_1_6 = 256;
signed long int var_1_7 = -5;
signed long int var_1_9 = 5;
signed long int var_1_10 = 256;
signed long int var_1_11 = 32;
unsigned char var_1_12 = 0;
double var_1_13 = 0.2;
double var_1_14 = 4.4;
unsigned char var_1_15 = 1;
unsigned long int var_1_16 = 4;
unsigned long int var_1_17 = 4187267237;
unsigned long int var_1_18 = 3893896959;
unsigned short int var_1_19 = 1;
unsigned short int var_1_20 = 100;
unsigned short int var_1_21 = 10000;
unsigned short int var_1_22 = 256;
unsigned short int var_1_23 = 32;
unsigned short int var_1_24 = 2;
unsigned short int var_1_25 = 2;
unsigned short int var_1_26 = 50;
unsigned char var_1_27 = 1;
signed long int var_1_28 = -1;
signed long int var_1_29 = 1;
signed long int var_1_30 = 2;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
signed long int var_1_34 = 5;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
double var_1_37 = 7.5;
double var_1_38 = 199.05;
unsigned char var_1_39 = 64;
unsigned char var_1_40 = 4;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
signed char var_1_43 = -16;
unsigned char var_1_44 = 25;
signed char var_1_45 = 4;
signed char var_1_46 = 100;
unsigned long int var_1_47 = 2;
unsigned short int var_1_48 = 16;
unsigned short int var_1_49 = 59233;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req1Batch177Filler_PE_CN
	/* 799L, 25L, 255L, 275L) */ if (/* 800L, 4L, 5L, 256L, 276L) */ ((var_1_2) < (var_1_3))) {
		/* 803L, 20L, 259L, 279L) */ var_1_1 = (
			/* 806L, 19L, 262L, 282L) */ ((
				3690899434u
			) - (
				/* 808L, 18L, 264L, 284L) */ ((
					var_1_4
				) + (
					/* 810L, 17L, 266L, 286L) */ (max (
						/* 810L, 17L, 266L, 286L) */ (
							var_1_5
						) , (
							var_1_6
						)
					))
				))
			))
		);
	} else {
		/* 813L, 24L, 269L, 289L) */ var_1_1 = (
			var_1_5
		);
	}


	// From: Req3Batch177Filler_PE_CN
	/* 845L, 103L, 426L, 440L) */ if (/* 846L, 82L, 83L, 427L, 441L) */ ((/* 847L, 80L, 84L, 428L, 442L) */ ((/* 848L, 77L, 85L, 429L, 443L) */ ((var_1_13) - (9.75))) / (/* 851L, 79L, 88L, 432L, 446L) */ (abs (var_1_14))))) > (var_1_3))) {
		/* 854L, 102L, 435L, 449L) */ var_1_12 = (
			var_1_15
		);
	}


	// From: Req4Batch177Filler_PE_CN
	/* 860L, 162L, 483L, 515L) */ if (/* 861L, 113L, 114L, 484L, 516L) */ ((var_1_2) <= (/* 863L, 112L, 116L, 486L, 518L) */ (- (/* 864L, 111L, 117L, 487L, 519L) */ (- (var_1_14))))))) {
		/* 866L, 141L, 489L, 521L) */ if (/* 867L, 126L, 127L, 490L, 522L) */ ((var_1_9) < (var_1_6))) {
			/* 870L, 140L, 493L, 525L) */ var_1_16 = (
				/* 873L, 139L, 496L, 528L) */ ((
					/* 874L, 137L, 497L, 529L) */ (max (
						/* 874L, 137L, 497L, 529L) */ (
							var_1_17
						) , (
							var_1_18
						)
					))
				) - (
					var_1_4
				))
			);
		}
	} else {
		/* 878L, 160L, 501L, 533L) */ if (/* 879L, 145L, 146L, 502L, 534L) */ ((var_1_2) != (var_1_14))) {
			/* 882L, 155L, 505L, 537L) */ var_1_16 = (
				var_1_11
			);
		} else {
			/* 886L, 159L, 509L, 541L) */ var_1_16 = (
				var_1_17
			);
		}
	}


	// From: Req5Batch177Filler_PE_CN
	/* 895L, 179L, 614L, 629L) */ var_1_19 = (
		/* 898L, 178L, 617L, 632L) */ ((
			/* 899L, 176L, 618L, 633L) */ ((
				var_1_20
			) + (
				/* 901L, 175L, 620L, 635L) */ ((
					var_1_21
				) - (
					var_1_22
				))
			))
		) + (
			var_1_23
		))
	);


	// From: Req6Batch177Filler_PE_CN
	/* 907L, 218L, 671L, 690L) */ if (/* 908L, 196L, 197L, 672L, 691L) */ ((/* 909L, 194L, 198L, 673L, 692L) */ ((var_1_22) < (var_1_18))) || (var_1_15))) {
		/* 913L, 213L, 677L, 696L) */ var_1_24 = (
			/* 916L, 212L, 680L, 699L) */ (min (
				/* 916L, 212L, 680L, 699L) */ (
					/* 917L, 210L, 681L, 700L) */ (abs (
						var_1_25
					))
				) , (
					var_1_23
				)
			))
		);
	} else {
		/* 920L, 217L, 684L, 703L) */ var_1_24 = (
			var_1_23
		);
	}


	// From: Req2Batch177Filler_PE_CN
	unsigned char stepLocal_0 = var_1_12;
	/* 841L, 69L, 334L, 357L) */ if (/* 824L, 37L, 38L, 335L, 358L) */ ((stepLocal_0) || (/* 823L, 36L, 40L, 337L, 360L) */ ((0) <= (var_1_5))))) {
		/* 830L, 58L, 340L, 363L) */ var_1_7 = (
			/* 829L, 57L, 343L, 366L) */ ((
				var_1_5
			) + (
				var_1_6
			))
		);
	} else {
		/* 840L, 68L, 346L, 369L) */ var_1_7 = (
			/* 839L, 67L, 349L, 372L) */ ((
				/* 837L, 65L, 350L, 373L) */ ((
					/* 835L, 63L, 351L, 374L) */ ((
						var_1_10
					) + (
						var_1_11
					))
				) + (
					var_1_5
				))
			) - (
				var_1_4
			))
		);
	}


	// From: Req7Batch177Filler_PE_CN
	unsigned long int stepLocal_2 = 32u;
	signed long int stepLocal_1 = var_1_7;
	/* 940L, 250L, 746L, 759L) */ if (/* 932L, 228L, 229L, 747L, 760L) */ ((stepLocal_2) > (var_1_11))) {
		/* 939L, 248L, 750L, 763L) */ if (/* 934L, 237L, 238L, 751L, 764L) */ ((stepLocal_1) > (var_1_1))) {
			/* 938L, 247L, 754L, 767L) */ var_1_26 = (
				var_1_23
			);
		}
	}


	// From: CodeObject1
	/* 30L) */ if (/* 8L, 7L) */ ((/* 9L, 4L) */ ((var_1_28) - (var_1_29))) <= (/* 12L, 6L) */ (~ (var_1_30))))) {
		/* 23L) */ var_1_27 = (
			var_1_31
		);
	} else {
		/* 29L) */ var_1_27 = (
			/* 28L) */ ((
				var_1_31
			) && (
				var_1_32
			))
		);
	}


	// From: CodeObject2
	/* 89L) */ if (/* 41L, 40L) */ ((500) <= (/* 43L, 39L) */ ((256) | (var_1_29))))) {
		/* 87L) */ if (/* 56L, 55L) */ ((/* 57L, 53L) */ ((var_1_29) ^ (var_1_28))) != (var_1_34))) {
			/* 81L) */ if (var_1_32) {
				/* 76L) */ var_1_33 = (
					/* 75L) */ ((
						var_1_27
					) && (
						/* 74L) */ ((
							var_1_35
						) || (
							var_1_36
						))
					))
				);
			} else {
				/* 80L) */ var_1_33 = (
					var_1_36
				);
			}
		} else {
			/* 86L) */ var_1_33 = (
				var_1_35
			);
		}
	}


	// From: CodeObject3
	/* 96L) */ var_1_37 = (
		var_1_38
	);


	// From: CodeObject4
	/* 104L) */ var_1_39 = (
		var_1_40
	);


	// From: CodeObject5
	/* 126L) */ if (/* 112L, 111L) */ ((-5) <= (var_1_34))) {
		/* 125L) */ var_1_41 = (
			/* 124L) */ ((
				/* 122L) */ ((
					var_1_35
				) && (
					var_1_36
				))
			) && (
				var_1_42
			))
		);
	}


	// From: CodeObject6
	/* 155L) */ if (/* 135L, 134L) */ ((var_1_40) > (/* 137L, 133L) */ ((var_1_39) / (var_1_44))))) {
		/* 150L) */ var_1_43 = (
			/* 149L) */ ((
				var_1_45
			) - (
				var_1_46
			))
		);
	} else {
		/* 154L) */ var_1_43 = (
			var_1_45
		);
	}


	// From: CodeObject7
	/* 168L) */ if (var_1_41) {
		/* 167L) */ var_1_47 = (
			/* 166L) */ ((
				2u
			) + (
				var_1_46
			))
		);
	}


	// From: CodeObject8
	/* 231L) */ if (/* 177L, 176L) */ ((var_1_34) < (/* 179L, 175L) */ ((var_1_46) | (var_1_30))))) {
		/* 192L) */ var_1_48 = (
			/* 191L) */ (max (
				/* 191L) */ (
					var_1_46
				) , (
					var_1_44
				)
			))
		);
	} else {
		/* 229L) */ if (var_1_31) {
			/* 214L) */ if (var_1_42) {
				/* 206L) */ var_1_48 = (
					/* 205L) */ (min (
						/* 205L) */ (
							/* 203L) */ (min (
								/* 203L) */ (
									var_1_44
								) , (
									var_1_46
								)
							))
						) , (
							var_1_39
						)
					))
				);
			} else {
				/* 213L) */ var_1_48 = (
					/* 212L) */ (abs (
						/* 211L) */ ((
							var_1_49
						) - (
							var_1_39
						))
					))
				);
			}
		} else {
			/* 227L) */ if (var_1_36) {
				/* 222L) */ var_1_48 = (
					var_1_40
				);
			} else {
				/* 226L) */ var_1_48 = (
					var_1_44
				);
			}
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_4 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_4 >= 0);
	assume_abort_if_not(var_1_4 <= 1073741824);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1073741823);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 1073741823);
	var_1_9 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_9 >= -1);
	assume_abort_if_not(var_1_9 <= 2147483646);
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 536870912);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 536870911);
	var_1_13 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
	var_1_14 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
	assume_abort_if_not(var_1_14 != 0.0F);
	var_1_15 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_15 >= 1);
	assume_abort_if_not(var_1_15 <= 1);
	var_1_17 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_17 >= 2147483647);
	assume_abort_if_not(var_1_17 <= 4294967294);
	var_1_18 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_18 >= 2147483647);
	assume_abort_if_not(var_1_18 <= 4294967294);
	var_1_20 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 16384);
	var_1_21 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_21 >= 8191);
	assume_abort_if_not(var_1_21 <= 16383);
	var_1_22 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_22 >= 0);
	assume_abort_if_not(var_1_22 <= 8191);
	var_1_23 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 32767);
	var_1_25 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 65534);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= -1);
	assume_abort_if_not(var_1_28 <= 2147483647);
	var_1_29 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 2147483647);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= -2147483648);
	assume_abort_if_not(var_1_30 <= 2147483647);
	var_1_31 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_31 >= 1);
	assume_abort_if_not(var_1_31 <= 1);
	var_1_32 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_32 >= 1);
	assume_abort_if_not(var_1_32 <= 1);
	var_1_34 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_34 >= -2147483648);
	assume_abort_if_not(var_1_34 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 0);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 0);
	var_1_38 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 254);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_44 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_44 >= 0);
	assume_abort_if_not(var_1_44 <= 255);
	assume_abort_if_not(var_1_44 != 0);
	var_1_45 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_45 >= -1);
	assume_abort_if_not(var_1_45 <= 126);
	var_1_46 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_46 >= 0);
	assume_abort_if_not(var_1_46 <= 126);
	var_1_49 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_49 >= 32767);
	assume_abort_if_not(var_1_49 <= 65534);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 237L, 4L, 8L, 296L, 316L, 947L) */ ((var_1_2) < (var_1_3))) {
	} else {
	}
	if (/* 256L, 37L, 43L, 381L, 404L, 966L) */ ((var_1_12) || (/* 258L, 36L, 45L, 383L, 406L, 968L) */ ((0) <= (var_1_5))))) {
	} else {
	}
	if (/* 279L, 82L, 91L, 455L, 469L, 989L) */ ((/* 280L, 80L, 92L, 456L, 470L, 990L) */ ((/* 281L, 77L, 93L, 457L, 471L, 991L) */ ((var_1_13) - (9.75))) / (/* 284L, 79L, 96L, 460L, 474L, 994L) */ (abs (var_1_14))))) > (var_1_3))) {
	}
	if (/* 294L, 113L, 119L, 548L, 580L, 1004L) */ ((var_1_2) <= (/* 296L, 112L, 121L, 550L, 582L, 1006L) */ (- (/* 297L, 111L, 122L, 551L, 583L, 1007L) */ (- (var_1_14))))))) {
		if (/* 300L, 126L, 130L, 554L, 586L, 1010L) */ ((var_1_9) < (var_1_6))) {
		}
	} else {
		if (/* 312L, 145L, 149L, 566L, 598L, 1022L) */ ((var_1_2) != (var_1_14))) {
		} else {
		}
	}
	if (/* 341L, 196L, 202L, 710L, 729L, 1051L) */ ((/* 342L, 194L, 203L, 711L, 730L, 1052L) */ ((var_1_22) < (var_1_18))) || (var_1_15))) {
	} else {
	}
	if (/* 359L, 228L, 232L, 773L, 786L, 1069L) */ ((32u) > (var_1_11))) {
		if (/* 363L, 237L, 241L, 777L, 790L, 1073L) */ ((var_1_7) > (var_1_1))) {
		}
	}
	return /* 376L) */ ((
	/* 375L) */ ((
		/* 374L) */ ((
			/* 373L) */ ((
				/* 372L) */ ((
					/* 371L) */ ((
						/* 236L, 26L, 295L, 315L, 946L) */ ((
							/* 237L, 4L, 8L, 296L, 316L, 947L) */ ((
								var_1_2
							) < (
								var_1_3
							))
						) ? (
							/* 240L, 20L, 299L, 319L, 950L) */ ((
								var_1_1
							) == (
								/* 240L, 20L, 299L, 319L, 950L) */ ((unsigned long int) (
									/* 243L, 19L, 302L, 322L, 953L) */ ((
										3690899434u
									) - (
										/* 245L, 18L, 304L, 324L, 955L) */ ((
											var_1_4
										) + (
											/* 247L, 17L, 306L, 326L, 957L) */ (max (
												/* 247L, 17L, 306L, 326L, 957L) */ (
													var_1_5
												) , (
													var_1_6
												)
											))
										))
									))
								))
							))
						) : (
							/* 250L, 24L, 309L, 329L, 960L) */ ((
								var_1_1
							) == (
								/* 250L, 24L, 309L, 329L, 960L) */ ((unsigned long int) (
									var_1_5
								))
							))
						))
					) && (
						/* 255L, 70L, 380L, 403L, 965L) */ ((
							/* 256L, 37L, 43L, 381L, 404L, 966L) */ ((
								var_1_12
							) || (
								/* 258L, 36L, 45L, 383L, 406L, 968L) */ ((
									0
								) <= (
									var_1_5
								))
							))
						) ? (
							/* 261L, 58L, 386L, 409L, 971L) */ ((
								var_1_7
							) == (
								/* 261L, 58L, 386L, 409L, 971L) */ ((signed long int) (
									/* 264L, 57L, 389L, 412L, 974L) */ ((
										var_1_5
									) + (
										var_1_6
									))
								))
							))
						) : (
							/* 267L, 68L, 392L, 415L, 977L) */ ((
								var_1_7
							) == (
								/* 267L, 68L, 392L, 415L, 977L) */ ((signed long int) (
									/* 270L, 67L, 395L, 418L, 980L) */ ((
										/* 271L, 65L, 396L, 419L, 981L) */ ((
											/* 272L, 63L, 397L, 420L, 982L) */ ((
												var_1_10
											) + (
												var_1_11
											))
										) + (
											var_1_5
										))
									) - (
										var_1_4
									))
								))
							))
						))
					))
				) && (
					/* 278L, 104L, 454L, 468L, 988L) */ ((
						/* 279L, 82L, 91L, 455L, 469L, 989L) */ ((
							/* 280L, 80L, 92L, 456L, 470L, 990L) */ ((
								/* 281L, 77L, 93L, 457L, 471L, 991L) */ ((
									var_1_13
								) - (
									9.75
								))
							) / (
								/* 284L, 79L, 96L, 460L, 474L, 994L) */ (abs (
									var_1_14
								))
							))
						) > (
							var_1_3
						))
					) ? (
						/* 287L, 102L, 463L, 477L, 997L) */ ((
							var_1_12
						) == (
							/* 287L, 102L, 463L, 477L, 997L) */ ((unsigned char) (
								var_1_15
							))
						))
					) : (
						1
					))
				))
			) && (
				/* 293L, 163L, 547L, 579L, 1003L) */ ((
					/* 294L, 113L, 119L, 548L, 580L, 1004L) */ ((
						var_1_2
					) <= (
						/* 296L, 112L, 121L, 550L, 582L, 1006L) */ (- (
							/* 297L, 111L, 122L, 551L, 583L, 1007L) */ (- (
								var_1_14
							))
						))
					))
				) ? (
					/* 299L, 142L, 553L, 585L, 1009L) */ ((
						/* 300L, 126L, 130L, 554L, 586L, 1010L) */ ((
							var_1_9
						) < (
							var_1_6
						))
					) ? (
						/* 303L, 140L, 557L, 589L, 1013L) */ ((
							var_1_16
						) == (
							/* 303L, 140L, 557L, 589L, 1013L) */ ((unsigned long int) (
								/* 306L, 139L, 560L, 592L, 1016L) */ ((
									/* 307L, 137L, 561L, 593L, 1017L) */ (max (
										/* 307L, 137L, 561L, 593L, 1017L) */ (
											var_1_17
										) , (
											var_1_18
										)
									))
								) - (
									var_1_4
								))
							))
						))
					) : (
						1
					))
				) : (
					/* 311L, 161L, 565L, 597L, 1021L) */ ((
						/* 312L, 145L, 149L, 566L, 598L, 1022L) */ ((
							var_1_2
						) != (
							var_1_14
						))
					) ? (
						/* 315L, 155L, 569L, 601L, 1025L) */ ((
							var_1_16
						) == (
							/* 315L, 155L, 569L, 601L, 1025L) */ ((unsigned long int) (
								var_1_11
							))
						))
					) : (
						/* 319L, 159L, 573L, 605L, 1029L) */ ((
							var_1_16
						) == (
							/* 319L, 159L, 573L, 605L, 1029L) */ ((unsigned long int) (
								var_1_17
							))
						))
					))
				))
			))
		) && (
			/* 328L, 179L, 644L, 659L, 1038L) */ ((
				var_1_19
			) == (
				/* 328L, 179L, 644L, 659L, 1038L) */ ((unsigned short int) (
					/* 331L, 178L, 647L, 662L, 1041L) */ ((
						/* 332L, 176L, 648L, 663L, 1042L) */ ((
							var_1_20
						) + (
							/* 334L, 175L, 650L, 665L, 1044L) */ ((
								var_1_21
							) - (
								var_1_22
							))
						))
					) + (
						var_1_23
					))
				))
			))
		))
	) && (
		/* 340L, 219L, 709L, 728L, 1050L) */ ((
			/* 341L, 196L, 202L, 710L, 729L, 1051L) */ ((
				/* 342L, 194L, 203L, 711L, 730L, 1052L) */ ((
					var_1_22
				) < (
					var_1_18
				))
			) || (
				var_1_15
			))
		) ? (
			/* 346L, 213L, 715L, 734L, 1056L) */ ((
				var_1_24
			) == (
				/* 346L, 213L, 715L, 734L, 1056L) */ ((unsigned short int) (
					/* 349L, 212L, 718L, 737L, 1059L) */ (min (
						/* 349L, 212L, 718L, 737L, 1059L) */ (
							/* 350L, 210L, 719L, 738L, 1060L) */ (abs (
								var_1_25
							))
						) , (
							var_1_23
						)
					))
				))
			))
		) : (
			/* 353L, 217L, 722L, 741L, 1063L) */ ((
				var_1_24
			) == (
				/* 353L, 217L, 722L, 741L, 1063L) */ ((unsigned short int) (
					var_1_23
				))
			))
		))
	))
) && (
	/* 358L, 251L, 772L, 785L, 1068L) */ ((
		/* 359L, 228L, 232L, 773L, 786L, 1069L) */ ((
			32u
		) > (
			var_1_11
		))
	) ? (
		/* 362L, 249L, 776L, 789L, 1072L) */ ((
			/* 363L, 237L, 241L, 777L, 790L, 1073L) */ ((
				var_1_7
			) > (
				var_1_1
			))
		) ? (
			/* 366L, 247L, 780L, 793L, 1076L) */ ((
				var_1_26
			) == (
				/* 366L, 247L, 780L, 793L, 1076L) */ ((unsigned short int) (
					var_1_23
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
