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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10Filler_PR_CN.c", 13, "reach_error"); }
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
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
signed char var_1_18 = 100;
unsigned long int var_1_19 = 32;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 2;
float var_1_23 = 100000.5;
float var_1_24 = 31.9;
float var_1_25 = -0.6;
unsigned short int var_1_26 = 32;
float var_1_27 = 24.5;
double var_1_28 = 10000000000.5;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
double var_1_31 = 64.25;
signed char var_1_32 = -10;
signed char var_1_33 = -4;
unsigned long int var_1_34 = 4;
signed char var_1_35 = 100;
double var_1_36 = 199.5;
double var_1_37 = 7.6;
signed char var_1_38 = 64;
signed char var_1_39 = 10;
signed char var_1_40 = 16;
unsigned short int var_1_41 = 64;
unsigned short int var_1_42 = 16;
unsigned short int var_1_43 = 16;
double var_1_44 = 16.5;

// Calibration values

// Last'ed variables
unsigned short int last_1_var_1_1 = 4;

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch10Filler_PR_CN
	/* 12L, 64L, 333L, 347L, 752L, 805L) */ var_1_8 = (
		/* 11L, 63L, 336L, 350L, 751L, 808L) */ ((
			/* 9L, 61L, 337L, 351L, 749L, 809L) */ ((
				/* 4L, 57L, 338L, 352L, 744L, 810L) */ ((
					var_1_7
				) >= (
					var_1_5
				))
			) && (
				/* 8L, 60L, 341L, 355L, 748L, 813L) */ ((
					var_1_4
				) >= (
					last_1_var_1_1
				))
			))
		) || (
			var_1_9
		))
	);


	// From: CodeObject3
	/* 150L) */ if (/* 134L, 133L) */ ((/* 135L, 131L) */ ((var_1_25) <= (var_1_27))) && (var_1_30))) {
		/* 149L) */ var_1_32 = (
			/* 148L) */ (max (
				/* 148L) */ (
					var_1_33
				) , (
					-100
				)
			))
		);
	}


	// From: Req6Batch10Filler_PR_CN
	/* 905L, 218L, 673L, 690L) */ if (/* 906L, 200L, 201L, 674L, 691L) */ ((var_1_19) > (var_1_18))) {
		/* 909L, 213L, 677L, 694L) */ var_1_20 = (
			/* 912L, 212L, 680L, 697L) */ ((
				var_1_8
			) || (
				/* 914L, 211L, 682L, 699L) */ (! (
					var_1_21
				))
			))
		);
	} else {
		/* 916L, 217L, 684L, 701L) */ var_1_20 = (
			var_1_21
		);
	}


	// From: Req1Batch10Filler_PR_CN
	unsigned short int stepLocal_1 = var_1_6;
	unsigned char stepLocal_0 = var_1_20;
	/* 799L, 44L, 224L, 251L) */ if (/* 777L, 4L, 5L, 225L, 252L) */ ((var_1_8) && (stepLocal_0))) {
		/* 789L, 22L, 228L, 255L) */ var_1_1 = (
			/* 788L, 21L, 231L, 258L) */ ((
				/* 784L, 17L, 232L, 259L) */ ((
					/* 782L, 15L, 233L, 260L) */ (min (
						/* 782L, 15L, 233L, 260L) */ (
							56892
						) , (
							var_1_4
						)
					))
				) - (
					var_1_5
				))
			) - (
				/* 787L, 20L, 237L, 264L) */ (max (
					/* 787L, 20L, 237L, 264L) */ (
						var_1_6
					) , (
						var_1_7
					)
				))
			))
		);
	} else {
		/* 798L, 42L, 240L, 267L) */ if (/* 793L, 27L, 28L, 241L, 268L) */ ((/* 792L, 25L, 29L, 242L, 269L) */ (max (/* 792L, 25L, 29L, 242L, 269L) */ (var_1_7) , (var_1_5)))) < (stepLocal_1))) {
			/* 797L, 41L, 246L, 273L) */ var_1_1 = (
				var_1_5
			);
		}
	}


	// From: CodeObject2
	/* 125L) */ if (/* 110L, 109L) */ ((var_1_29) && (/* 112L, 108L) */ (! (/* 113L, 107L) */ (! (var_1_30))))))) {
		/* 124L) */ var_1_28 = (
			/* 123L) */ (abs (
				var_1_31
			))
		);
	}


	// From: CodeObject4
	/* 157L) */ var_1_34 = (
		var_1_22
	);


	// From: CodeObject6
	/* 234L) */ if (/* 196L, 195L) */ ((var_1_40) >= (/* 198L, 194L) */ (max (/* 198L, 194L) */ (/* 199L, 192L) */ ((-1) ^ (32))) , (var_1_32)))))) {
		/* 219L) */ var_1_41 = (
			/* 218L) */ ((
				45623
			) - (
				/* 217L) */ (max (
					/* 217L) */ (
						/* 215L) */ ((
							var_1_40
						) + (
							var_1_42
						))
					) , (
						var_1_43
					)
				))
			))
		);
	} else {
		/* 232L) */ if (/* 222L, 221L) */ (! (var_1_29))) {
			/* 231L) */ var_1_41 = (
				/* 230L) */ (min (
					/* 230L) */ (
						var_1_42
					) , (
						2
					)
				))
			);
		}
	}


	// From: CodeObject7
	/* 264L) */ if (/* 245L, 244L) */ ((/* 246L, 240L) */ ((var_1_43) & (var_1_26))) > (/* 249L, 243L) */ ((var_1_33) * (32))))) {
		/* 263L) */ var_1_44 = (
			/* 262L) */ (abs (
				var_1_31
			))
		);
	}


	// From: Req4Batch10Filler_PR_CN
	/* 857L, 136L, 509L, 524L) */ if (var_1_20) {
		/* 859L, 135L, 511L, 526L) */ var_1_14 = (
			/* 862L, 134L, 514L, 529L) */ ((
				/* 863L, 128L, 515L, 530L) */ (abs (
					var_1_4
				))
			) - (
				/* 865L, 133L, 517L, 532L) */ (max (
					/* 865L, 133L, 517L, 532L) */ (
						var_1_5
					) , (
						/* 867L, 132L, 519L, 534L) */ ((
							var_1_16
						) - (
							var_1_11
						))
					)
				))
			))
		);
	}


	// From: CodeObject1
	/* 101L) */ if (/* 35L, 34L) */ ((var_1_23) <= (var_1_24))) {
		/* 99L) */ if (/* 47L, 46L) */ ((/* 48L, 43L) */ ((var_1_24) + (var_1_23))) < (/* 51L, 45L) */ (abs (var_1_25))))) {
			/* 97L) */ if (/* 64L, 63L) */ ((var_1_23) <= (/* 66L, 62L) */ (min (/* 66L, 62L) */ (var_1_25) , (var_1_24)))))) {
				/* 77L) */ var_1_22 = (
					var_1_26
				);
			} else {
				/* 95L) */ if (/* 81L, 80L) */ ((var_1_23) != (var_1_27))) {
					/* 90L) */ var_1_22 = (
						var_1_26
					);
				} else {
					/* 94L) */ var_1_22 = (
						1
					);
				}
			}
		}
	}


	// From: Req5Batch10Filler_PR_CN
	signed long int stepLocal_5 = /* 875L, 148L, 154L, 570L, 596L) */ (max (/* 875L, 148L, 154L, 570L, 596L) */ (var_1_13) , (/* 877L, 147L, 156L, 572L, 598L) */ (~ (var_1_5)))));
	unsigned short int stepLocal_4 = var_1_14;
	/* 899L, 192L, 568L, 594L) */ if (/* 883L, 152L, 153L, 569L, 595L) */ ((stepLocal_5) >= (/* 882L, 151L, 158L, 574L, 600L) */ (min (/* 882L, 151L, 158L, 574L, 600L) */ (var_1_18) , (var_1_14)))))) {
		/* 894L, 186L, 577L, 603L) */ if (/* 885L, 171L, 172L, 578L, 604L) */ ((stepLocal_4) <= (var_1_11))) {
			/* 889L, 181L, 581L, 607L) */ var_1_17 = (
				var_1_5
			);
		} else {
			/* 893L, 185L, 585L, 611L) */ var_1_17 = (
				var_1_6
			);
		}
	} else {
		/* 898L, 191L, 589L, 615L) */ var_1_17 = (
			var_1_19
		);
	}


	// From: CodeObject5
	/* 185L) */ if (/* 167L, 166L) */ ((var_1_36) <= (/* 169L, 165L) */ ((var_1_25) / (var_1_37))))) {
		/* 184L) */ var_1_35 = (
			/* 183L) */ ((
				/* 181L) */ (min (
					/* 181L) */ (
						var_1_38
					) , (
						var_1_39
					)
				))
			) - (
				var_1_40
			))
		);
	}


	// From: Req3Batch10Filler_PR_CN
	unsigned char stepLocal_3 = var_1_9;
	unsigned long int stepLocal_2 = var_1_17;
	/* 851L, 116L, 388L, 418L) */ if (/* 826L, 73L, 74L, 389L, 419L) */ ((stepLocal_2) < (var_1_6))) {
		/* 846L, 110L, 392L, 422L) */ if (/* 830L, 84L, 85L, 393L, 423L) */ ((/* 829L, 82L, 86L, 394L, 424L) */ ((var_1_6) != (var_1_5))) || (stepLocal_3))) {
			/* 841L, 105L, 398L, 428L) */ var_1_10 = (
				/* 840L, 104L, 401L, 431L) */ ((
					/* 837L, 101L, 402L, 432L) */ ((
						/* 835L, 99L, 403L, 433L) */ ((
							10000
						) - (
							var_1_11
						))
					) - (
						var_1_5
					))
				) + (
					/* 839L, 103L, 407L, 437L) */ (abs (
						var_1_12
					))
				))
			);
		} else {
			/* 845L, 109L, 409L, 439L) */ var_1_10 = (
				var_1_4
			);
		}
	} else {
		/* 850L, 115L, 413L, 443L) */ var_1_10 = (
			var_1_13
		);
	}
}



void updateVariables(void) {
	var_1_4 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_4 >= 49150);
	assume_abort_if_not(var_1_4 <= 65534);
	var_1_5 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 16383);
	var_1_6 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 32767);
	var_1_7 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_7 >= 0);
	assume_abort_if_not(var_1_7 <= 32767);
	var_1_9 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_9 >= 1);
	assume_abort_if_not(var_1_9 <= 1);
	var_1_11 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 8191);
	var_1_12 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_12 >= -16383);
	assume_abort_if_not(var_1_12 <= 16383);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_16 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_16 >= 16383);
	assume_abort_if_not(var_1_16 <= 32767);
	var_1_18 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 127);
	var_1_19 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_19 >= 0);
	assume_abort_if_not(var_1_19 <= 4294967294);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 0);
	var_1_23 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
	var_1_24 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
	var_1_26 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_26 >= 0);
	assume_abort_if_not(var_1_26 <= 65534);
	var_1_27 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
	var_1_29 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 1);
	var_1_30 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_30 >= 0);
	assume_abort_if_not(var_1_30 <= 1);
	var_1_31 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
	var_1_33 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_33 >= -127);
	assume_abort_if_not(var_1_33 <= 126);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
	assume_abort_if_not(var_1_37 != 0.0F);
	var_1_38 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_38 >= -1);
	assume_abort_if_not(var_1_38 <= 126);
	var_1_39 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_39 >= -1);
	assume_abort_if_not(var_1_39 <= 126);
	var_1_40 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_40 >= 0);
	assume_abort_if_not(var_1_40 <= 126);
	var_1_42 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 16383);
	var_1_43 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_43 >= 0);
	assume_abort_if_not(var_1_43 <= 32767);
}



void updateLastVariables(void) {
	last_1_var_1_1 = var_1_1;
}

int property(void) {
	if (/* 271L, 4L, 8L, 279L, 306L, 922L) */ ((var_1_8) && (var_1_20))) {
	} else {
		if (/* 287L, 27L, 33L, 295L, 322L, 938L) */ ((/* 288L, 25L, 34L, 296L, 323L, 939L) */ (max (/* 288L, 25L, 34L, 296L, 323L, 939L) */ (var_1_7) , (var_1_5)))) < (var_1_6))) {
		}
	}
	if (/* 313L, 73L, 77L, 449L, 479L, 964L) */ ((var_1_17) < (var_1_6))) {
		if (/* 317L, 84L, 90L, 453L, 483L, 968L) */ ((/* 318L, 82L, 91L, 454L, 484L, 969L) */ ((var_1_6) != (var_1_5))) || (var_1_9))) {
		} else {
		}
	} else {
	}
	if (var_1_20) {
	}
	if (/* 358L, 152L, 161L, 621L, 647L, 1009L) */ ((/* 359L, 148L, 162L, 622L, 648L, 1010L) */ (max (/* 359L, 148L, 162L, 622L, 648L, 1010L) */ (var_1_13) , (/* 361L, 147L, 164L, 624L, 650L, 1012L) */ (~ (var_1_5)))))) >= (/* 363L, 151L, 166L, 626L, 652L, 1014L) */ (min (/* 363L, 151L, 166L, 626L, 652L, 1014L) */ (var_1_18) , (var_1_14)))))) {
		if (/* 367L, 171L, 175L, 630L, 656L, 1018L) */ ((var_1_14) <= (var_1_11))) {
		} else {
		}
	} else {
	}
	if (/* 385L, 200L, 204L, 708L, 725L, 1036L) */ ((var_1_19) > (var_1_18))) {
	} else {
	}
	return /* 404L) */ ((
	/* 403L) */ ((
		/* 402L) */ ((
			/* 401L) */ ((
				/* 400L) */ ((
					/* 270L, 45L, 278L, 305L, 921L) */ ((
						/* 271L, 4L, 8L, 279L, 306L, 922L) */ ((
							var_1_8
						) && (
							var_1_20
						))
					) ? (
						/* 274L, 22L, 282L, 309L, 925L) */ ((
							var_1_1
						) == (
							/* 274L, 22L, 282L, 309L, 925L) */ ((unsigned short int) (
								/* 277L, 21L, 285L, 312L, 928L) */ ((
									/* 278L, 17L, 286L, 313L, 929L) */ ((
										/* 279L, 15L, 287L, 314L, 930L) */ (min (
											/* 279L, 15L, 287L, 314L, 930L) */ (
												56892
											) , (
												var_1_4
											)
										))
									) - (
										var_1_5
									))
								) - (
									/* 283L, 20L, 291L, 318L, 934L) */ (max (
										/* 283L, 20L, 291L, 318L, 934L) */ (
											var_1_6
										) , (
											var_1_7
										)
									))
								))
							))
						))
					) : (
						/* 286L, 43L, 294L, 321L, 937L) */ ((
							/* 287L, 27L, 33L, 295L, 322L, 938L) */ ((
								/* 288L, 25L, 34L, 296L, 323L, 939L) */ (max (
									/* 288L, 25L, 34L, 296L, 323L, 939L) */ (
										var_1_7
									) , (
										var_1_5
									)
								))
							) < (
								var_1_6
							))
						) ? (
							/* 292L, 41L, 300L, 327L, 943L) */ ((
								var_1_1
							) == (
								/* 292L, 41L, 300L, 327L, 943L) */ ((unsigned short int) (
									var_1_5
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 298L, 64L, 361L, 375L, 767L, 949L, 27L) */ ((
						var_1_8
					) == (
						/* 298L, 64L, 361L, 375L, 767L, 949L, 27L) */ ((unsigned char) (
							/* 301L, 63L, 364L, 378L, 766L, 952L, 26L) */ ((
								/* 302L, 61L, 365L, 379L, 764L, 953L, 24L) */ ((
									/* 303L, 57L, 366L, 380L, 759L, 954L, 19L) */ ((
										var_1_7
									) >= (
										var_1_5
									))
								) && (
									/* 306L, 60L, 369L, 383L, 763L, 957L, 23L) */ ((
										var_1_4
									) >= (
										last_1_var_1_1
									))
								))
							) || (
								var_1_9
							))
						))
					))
				))
			) && (
				/* 312L, 117L, 448L, 478L, 963L) */ ((
					/* 313L, 73L, 77L, 449L, 479L, 964L) */ ((
						var_1_17
					) < (
						var_1_6
					))
				) ? (
					/* 316L, 111L, 452L, 482L, 967L) */ ((
						/* 317L, 84L, 90L, 453L, 483L, 968L) */ ((
							/* 318L, 82L, 91L, 454L, 484L, 969L) */ ((
								var_1_6
							) != (
								var_1_5
							))
						) || (
							var_1_9
						))
					) ? (
						/* 322L, 105L, 458L, 488L, 973L) */ ((
							var_1_10
						) == (
							/* 322L, 105L, 458L, 488L, 973L) */ ((signed short int) (
								/* 325L, 104L, 461L, 491L, 976L) */ ((
									/* 326L, 101L, 462L, 492L, 977L) */ ((
										/* 327L, 99L, 463L, 493L, 978L) */ ((
											10000
										) - (
											var_1_11
										))
									) - (
										var_1_5
									))
								) + (
									/* 331L, 103L, 467L, 497L, 982L) */ (abs (
										var_1_12
									))
								))
							))
						))
					) : (
						/* 333L, 109L, 469L, 499L, 984L) */ ((
							var_1_10
						) == (
							/* 333L, 109L, 469L, 499L, 984L) */ ((signed short int) (
								var_1_4
							))
						))
					))
				) : (
					/* 337L, 115L, 473L, 503L, 988L) */ ((
						var_1_10
					) == (
						/* 337L, 115L, 473L, 503L, 988L) */ ((signed short int) (
							var_1_13
						))
					))
				))
			))
		) && (
			/* 343L, 137L, 539L, 554L, 994L) */ ((
				var_1_20
			) ? (
				/* 345L, 135L, 541L, 556L, 996L) */ ((
					var_1_14
				) == (
					/* 345L, 135L, 541L, 556L, 996L) */ ((unsigned short int) (
						/* 348L, 134L, 544L, 559L, 999L) */ ((
							/* 349L, 128L, 545L, 560L, 1000L) */ (abs (
								var_1_4
							))
						) - (
							/* 351L, 133L, 547L, 562L, 1002L) */ (max (
								/* 351L, 133L, 547L, 562L, 1002L) */ (
									var_1_5
								) , (
									/* 353L, 132L, 549L, 564L, 1004L) */ ((
										var_1_16
									) - (
										var_1_11
									))
								)
							))
						))
					))
				))
			) : (
				1
			))
		))
	) && (
		/* 357L, 193L, 620L, 646L, 1008L) */ ((
			/* 358L, 152L, 161L, 621L, 647L, 1009L) */ ((
				/* 359L, 148L, 162L, 622L, 648L, 1010L) */ (max (
					/* 359L, 148L, 162L, 622L, 648L, 1010L) */ (
						var_1_13
					) , (
						/* 361L, 147L, 164L, 624L, 650L, 1012L) */ (~ (
							var_1_5
						))
					)
				))
			) >= (
				/* 363L, 151L, 166L, 626L, 652L, 1014L) */ (min (
					/* 363L, 151L, 166L, 626L, 652L, 1014L) */ (
						var_1_18
					) , (
						var_1_14
					)
				))
			))
		) ? (
			/* 366L, 187L, 629L, 655L, 1017L) */ ((
				/* 367L, 171L, 175L, 630L, 656L, 1018L) */ ((
					var_1_14
				) <= (
					var_1_11
				))
			) ? (
				/* 370L, 181L, 633L, 659L, 1021L) */ ((
					var_1_17
				) == (
					/* 370L, 181L, 633L, 659L, 1021L) */ ((unsigned long int) (
						var_1_5
					))
				))
			) : (
				/* 374L, 185L, 637L, 663L, 1025L) */ ((
					var_1_17
				) == (
					/* 374L, 185L, 637L, 663L, 1025L) */ ((unsigned long int) (
						var_1_6
					))
				))
			))
		) : (
			/* 378L, 191L, 641L, 667L, 1029L) */ ((
				var_1_17
			) == (
				/* 378L, 191L, 641L, 667L, 1029L) */ ((unsigned long int) (
					var_1_19
				))
			))
		))
	))
) && (
	/* 384L, 219L, 707L, 724L, 1035L) */ ((
		/* 385L, 200L, 204L, 708L, 725L, 1036L) */ ((
			var_1_19
		) > (
			var_1_18
		))
	) ? (
		/* 388L, 213L, 711L, 728L, 1039L) */ ((
			var_1_20
		) == (
			/* 388L, 213L, 711L, 728L, 1039L) */ ((unsigned char) (
				/* 391L, 212L, 714L, 731L, 1042L) */ ((
					var_1_8
				) || (
					/* 393L, 211L, 716L, 733L, 1044L) */ (! (
						var_1_21
					))
				))
			))
		))
	) : (
		/* 395L, 217L, 718L, 735L, 1046L) */ ((
			var_1_20
		) == (
			/* 395L, 217L, 718L, 735L, 1046L) */ ((unsigned char) (
				var_1_21
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
