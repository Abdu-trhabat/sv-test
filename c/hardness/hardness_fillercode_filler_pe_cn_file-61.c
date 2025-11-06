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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch61Filler_PE_CN.c", 13, "reach_error"); }
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
double var_1_1 = 8.5;
unsigned long int var_1_2 = 100;
unsigned long int var_1_3 = 4;
unsigned long int var_1_4 = 1;
unsigned long int var_1_5 = 50;
unsigned long int var_1_6 = 4;
float var_1_7 = 15.8;
float var_1_8 = 64.25;
signed long int var_1_9 = -50;
signed long int var_1_10 = 10;
signed long int var_1_11 = -5;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 3207304078;
unsigned long int var_1_15 = 50;
unsigned long int var_1_16 = 25;
unsigned char var_1_17 = 1;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 8;
unsigned char var_1_20 = 25;
unsigned char var_1_21 = 16;
unsigned char var_1_22 = 1;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
signed char var_1_26 = -4;
unsigned short int var_1_27 = 100;
unsigned long int var_1_28 = 2;
unsigned long int var_1_29 = 2;
unsigned long int var_1_30 = 1;
signed long int var_1_31 = 25;
unsigned short int var_1_32 = 100;
signed long int var_1_33 = -100000;
double var_1_34 = 1.5;
unsigned char var_1_35 = 1;
double var_1_36 = 50.5;
double var_1_37 = 1.9;
unsigned long int var_1_38 = 10000;
unsigned char var_1_39 = 1;
signed long int var_1_40 = -25;
unsigned char var_1_41 = 0;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 1;
signed short int var_1_45 = -32;
signed short int var_1_46 = 128;
signed short int var_1_47 = 1;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: Req2Batch61Filler_PE_CN
	unsigned long int stepLocal_0 = var_1_3;
	/* 847L, 49L, 329L, 340L) */ if (/* 840L, 36L, 37L, 330L, 341L) */ ((stepLocal_0) < (var_1_2))) {
		/* 846L, 48L, 333L, 344L) */ var_1_4 = (
			/* 845L, 47L, 336L, 347L) */ (max (
				/* 845L, 47L, 336L, 347L) */ (
					var_1_5
				) , (
					var_1_6
				)
			))
		);
	}


	// From: Req3Batch61Filler_PE_CN
	unsigned long int stepLocal_3 = var_1_4;
	unsigned long int stepLocal_2 = /* 855L, 58L, 62L, 376L, 405L) */ (max (/* 855L, 58L, 62L, 376L, 405L) */ (var_1_4) , (var_1_5)));
	unsigned long int stepLocal_1 = var_1_4;
	/* 884L, 115L, 373L, 402L) */ if (/* 863L, 59L, 60L, 374L, 403L) */ ((var_1_4) <= (stepLocal_2))) {
		/* 879L, 109L, 379L, 408L) */ if (/* 865L, 77L, 78L, 380L, 409L) */ ((stepLocal_3) < (var_1_5))) {
			/* 874L, 103L, 383L, 412L) */ if (/* 869L, 88L, 89L, 384L, 413L) */ ((stepLocal_1) >= (/* 868L, 87L, 91L, 386L, 415L) */ ((var_1_4) ^ (4u))))) {
				/* 873L, 102L, 389L, 418L) */ var_1_7 = (
					var_1_8
				);
			}
		} else {
			/* 878L, 108L, 393L, 422L) */ var_1_7 = (
				var_1_8
			);
		}
	} else {
		/* 883L, 114L, 397L, 426L) */ var_1_7 = (
			var_1_8
		);
	}


	// From: Req4Batch61Filler_PE_CN
	unsigned long int stepLocal_4 = var_1_4;
	/* 906L, 145L, 489L, 505L) */ if (/* 896L, 125L, 126L, 490L, 506L) */ ((stepLocal_4) >= (/* 895L, 124L, 128L, 492L, 508L) */ ((4256310412u) - (128u))))) {
		/* 905L, 144L, 495L, 511L) */ var_1_9 = (
			/* 904L, 143L, 498L, 514L) */ ((
				/* 902L, 141L, 499L, 515L) */ (abs (
					/* 901L, 140L, 500L, 516L) */ ((
						var_1_10
					) + (
						var_1_11
					))
				))
			) + (
				var_1_12
			))
		);
	}


	// From: Req5Batch61Filler_PE_CN
	/* 911L, 202L, 554L, 580L) */ if (/* 912L, 157L, 158L, 555L, 581L) */ ((var_1_4) >= (/* 914L, 156L, 160L, 557L, 583L) */ ((var_1_14) - (/* 916L, 155L, 162L, 559L, 585L) */ (min (/* 916L, 155L, 162L, 559L, 585L) */ (var_1_15) , (var_1_16)))))))) {
		/* 919L, 196L, 562L, 588L) */ if (/* 920L, 177L, 178L, 563L, 589L) */ ((var_1_16) < (var_1_9))) {
			/* 923L, 187L, 566L, 592L) */ var_1_13 = (
				var_1_17
			);
		} else {
			/* 927L, 195L, 570L, 596L) */ var_1_13 = (
				var_1_18
			);
		}
	} else {
		/* 931L, 201L, 574L, 600L) */ var_1_13 = (
			var_1_18
		);
	}


	// From: Req6Batch61Filler_PE_CN
	/* 939L, 218L, 660L, 673L) */ var_1_19 = (
		/* 942L, 217L, 663L, 676L) */ ((
			var_1_20
		) + (
			/* 944L, 216L, 665L, 678L) */ ((
				10
			) + (
				/* 946L, 215L, 667L, 680L) */ (abs (
					var_1_21
				))
			))
		))
	);


	// From: Req8Batch61Filler_PE_CN
	/* 966L, 254L, 774L, 780L) */ var_1_26 = (
		var_1_21
	);


	// From: Req9Batch61Filler_PE_CN
	/* 972L, 264L, 798L, 804L) */ var_1_27 = (
		var_1_21
	);


	// From: Req1Batch61Filler_PE_CN
	/* 822L, 26L, 270L, 285L) */ if (/* 823L, 7L, 8L, 271L, 286L) */ ((/* 824L, 5L, 9L, 272L, 287L) */ ((var_1_4) / (/* 826L, 4L, 11L, 274L, 289L) */ (abs (64u))))) == (var_1_4))) {
		/* 829L, 25L, 277L, 292L) */ var_1_1 = (
			/* 832L, 24L, 280L, 295L) */ ((
				8.8
			) - (
				255.2
			))
		);
	}


	// From: Req7Batch61Filler_PE_CN
	/* 949L, 245L, 709L, 725L) */ if (var_1_18) {
		/* 951L, 244L, 711L, 727L) */ var_1_22 = (
			/* 954L, 243L, 714L, 730L) */ ((
				/* 955L, 237L, 715L, 731L) */ ((
					/* 956L, 235L, 716L, 732L) */ (- (
						var_1_1
					))
				) <= (
					var_1_8
				))
			) && (
				/* 959L, 242L, 719L, 735L) */ ((
					var_1_23
				) || (
					/* 961L, 241L, 721L, 737L) */ ((
						var_1_24
					) || (
						var_1_25
					))
				))
			))
		);
	}


	// From: CodeObject1
	/* 5L) */ var_1_28 = (
		var_1_29
	);


	// From: CodeObject2
	/* 95L) */ if (/* 13L, 12L) */ ((var_1_29) != (var_1_28))) {
		/* 89L) */ if (/* 29L, 28L) */ ((/* 30L, 23L) */ (~ (var_1_28))) != (/* 32L, 27L) */ (abs (/* 33L, 26L) */ (min (/* 33L, 26L) */ (var_1_31) , (var_1_29)))))))) {
			/* 83L) */ if (/* 46L, 45L) */ ((var_1_29) < (5u))) {
				/* 81L) */ if (/* 61L, 60L) */ ((/* 62L, 57L) */ (min (/* 62L, 57L) */ (32) , (/* 64L, 56L) */ ((50983) - (var_1_32)))))) >= (/* 67L, 59L) */ (abs (var_1_33))))) {
					/* 80L) */ var_1_30 = (
						var_1_32
					);
				}
			}
		} else {
			/* 88L) */ var_1_30 = (
				var_1_32
			);
		}
	} else {
		/* 94L) */ var_1_30 = (
			16u
		);
	}


	// From: CodeObject3
	/* 108L) */ if (var_1_35) {
		/* 107L) */ var_1_34 = (
			/* 106L) */ ((
				var_1_36
			) - (
				var_1_37
			))
		);
	}


	// From: CodeObject4
	/* 138L) */ if (/* 117L, 116L) */ ((var_1_28) >= (var_1_31))) {
		/* 136L) */ if (/* 126L, 125L) */ ((var_1_30) > (var_1_31))) {
			/* 135L) */ var_1_38 = (
				var_1_32
			);
		}
	}


	// From: CodeObject5
	/* 216L) */ if (/* 150L, 149L) */ ((var_1_31) < (/* 152L, 148L) */ ((/* 153L, 144L) */ (abs (var_1_32))) & (/* 155L, 147L) */ ((var_1_33) % (var_1_40))))))) {
		/* 214L) */ if (/* 169L, 168L) */ ((var_1_36) < (var_1_37))) {
			/* 179L) */ var_1_39 = (
				/* 178L) */ (! (
					var_1_41
				))
			);
		} else {
			/* 212L) */ if (var_1_35) {
				/* 188L) */ var_1_39 = (
					/* 187L) */ ((
						var_1_41
					) && (
						var_1_42
					))
				);
			} else {
				/* 210L) */ if (/* 192L, 191L) */ ((var_1_40) <= (var_1_28))) {
					/* 201L) */ var_1_39 = (
						var_1_42
					);
				} else {
					/* 209L) */ var_1_39 = (
						/* 208L) */ ((
							/* 206L) */ ((
								var_1_42
							) || (
								var_1_41
							))
						) && (
							var_1_43
						))
					);
				}
			}
		}
	}


	// From: CodeObject6
	/* 234L) */ if (/* 223L, 222L) */ ((var_1_40) > (var_1_32))) {
		/* 233L) */ var_1_44 = (
			/* 232L) */ (! (
				var_1_42
			))
		);
	}


	// From: CodeObject7
	/* 241L) */ var_1_45 = (
		var_1_46
	);


	// From: CodeObject8
	/* 249L) */ var_1_47 = (
		var_1_46
	);
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_2 >= 0);
	assume_abort_if_not(var_1_2 <= 4294967295);
	var_1_3 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_3 >= 0);
	assume_abort_if_not(var_1_3 <= 4294967295);
	var_1_5 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 4294967294);
	var_1_6 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_6 >= 0);
	assume_abort_if_not(var_1_6 <= 4294967294);
	var_1_8 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
	var_1_10 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_10 >= -536870911);
	assume_abort_if_not(var_1_10 <= 536870912);
	var_1_11 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_11 >= -536870911);
	assume_abort_if_not(var_1_11 <= 536870911);
	var_1_12 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_12 >= -1073741823);
	assume_abort_if_not(var_1_12 <= 1073741823);
	var_1_14 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_14 >= 2147483647);
	assume_abort_if_not(var_1_14 <= 4294967295);
	var_1_15 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 2147483647);
	var_1_16 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 2147483647);
	var_1_17 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_17 >= 1);
	assume_abort_if_not(var_1_17 <= 1);
	var_1_18 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_18 >= 1);
	assume_abort_if_not(var_1_18 <= 1);
	var_1_20 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_20 >= 0);
	assume_abort_if_not(var_1_20 <= 127);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 63);
	var_1_23 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_23 >= 0);
	assume_abort_if_not(var_1_23 <= 0);
	var_1_24 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_24 >= 0);
	assume_abort_if_not(var_1_24 <= 0);
	var_1_25 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_25 >= 0);
	assume_abort_if_not(var_1_25 <= 0);
	var_1_29 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_29 >= 0);
	assume_abort_if_not(var_1_29 <= 4294967294);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= -2147483648);
	assume_abort_if_not(var_1_31 <= 2147483647);
	assume_abort_if_not(var_1_31 != 0);
	var_1_32 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_32 >= 0);
	assume_abort_if_not(var_1_32 <= 32767);
	var_1_33 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_33 >= -2147483647);
	assume_abort_if_not(var_1_33 <= 2147483647);
	var_1_35 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_35 >= 0);
	assume_abort_if_not(var_1_35 <= 1);
	var_1_36 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
	var_1_37 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
	var_1_40 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_40 >= -2147483648);
	assume_abort_if_not(var_1_40 <= 2147483647);
	assume_abort_if_not(var_1_40 != 0);
	var_1_41 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_41 >= 1);
	assume_abort_if_not(var_1_41 <= 1);
	var_1_42 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_42 >= 0);
	assume_abort_if_not(var_1_42 <= 0);
	var_1_43 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_43 >= 1);
	assume_abort_if_not(var_1_43 <= 1);
	var_1_46 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_46 >= -32767);
	assume_abort_if_not(var_1_46 <= 32766);
}



void updateLastVariables(void) {
}

int property(void) {
	if (/* 254L, 7L, 14L, 301L, 316L, 979L) */ ((/* 255L, 5L, 15L, 302L, 317L, 980L) */ ((var_1_4) / (/* 257L, 4L, 17L, 304L, 319L, 982L) */ (abs (64u))))) == (var_1_4))) {
	}
	if (/* 268L, 36L, 40L, 352L, 363L, 993L) */ ((var_1_3) < (var_1_2))) {
	}
	if (/* 279L, 59L, 65L, 432L, 461L, 1004L) */ ((var_1_4) <= (/* 281L, 58L, 67L, 434L, 463L, 1006L) */ (max (/* 281L, 58L, 67L, 434L, 463L, 1006L) */ (var_1_4) , (var_1_5)))))) {
		if (/* 285L, 77L, 81L, 438L, 467L, 1010L) */ ((var_1_4) < (var_1_5))) {
			if (/* 289L, 88L, 94L, 442L, 471L, 1014L) */ ((var_1_4) >= (/* 291L, 87L, 96L, 444L, 473L, 1016L) */ ((var_1_4) ^ (4u))))) {
			}
		} else {
		}
	} else {
	}
	if (/* 308L, 125L, 131L, 522L, 538L, 1033L) */ ((var_1_4) >= (/* 310L, 124L, 133L, 524L, 540L, 1035L) */ ((4256310412u) - (128u))))) {
	}
	if (/* 325L, 157L, 165L, 607L, 633L, 1050L) */ ((var_1_4) >= (/* 327L, 156L, 167L, 609L, 635L, 1052L) */ ((var_1_14) - (/* 329L, 155L, 169L, 611L, 637L, 1054L) */ (min (/* 329L, 155L, 169L, 611L, 637L, 1054L) */ (var_1_15) , (var_1_16)))))))) {
		if (/* 333L, 177L, 181L, 615L, 641L, 1058L) */ ((var_1_16) < (var_1_9))) {
		} else {
		}
	} else {
	}
	if (var_1_18) {
	}
	return /* 397L) */ ((
	/* 396L) */ ((
		/* 395L) */ ((
			/* 394L) */ ((
				/* 393L) */ ((
					/* 392L) */ ((
						/* 391L) */ ((
							/* 390L) */ ((
								/* 253L, 27L, 300L, 315L, 978L) */ ((
									/* 254L, 7L, 14L, 301L, 316L, 979L) */ ((
										/* 255L, 5L, 15L, 302L, 317L, 980L) */ ((
											var_1_4
										) / (
											/* 257L, 4L, 17L, 304L, 319L, 982L) */ (abs (
												64u
											))
										))
									) == (
										var_1_4
									))
								) ? (
									/* 260L, 25L, 307L, 322L, 985L) */ ((
										var_1_1
									) == (
										/* 260L, 25L, 307L, 322L, 985L) */ ((double) (
											/* 263L, 24L, 310L, 325L, 988L) */ ((
												8.8
											) - (
												255.2
											))
										))
									))
								) : (
									1
								))
							) && (
								/* 267L, 50L, 351L, 362L, 992L) */ ((
									/* 268L, 36L, 40L, 352L, 363L, 993L) */ ((
										var_1_3
									) < (
										var_1_2
									))
								) ? (
									/* 271L, 48L, 355L, 366L, 996L) */ ((
										var_1_4
									) == (
										/* 271L, 48L, 355L, 366L, 996L) */ ((unsigned long int) (
											/* 274L, 47L, 358L, 369L, 999L) */ (max (
												/* 274L, 47L, 358L, 369L, 999L) */ (
													var_1_5
												) , (
													var_1_6
												)
											))
										))
									))
								) : (
									1
								))
							))
						) && (
							/* 278L, 116L, 431L, 460L, 1003L) */ ((
								/* 279L, 59L, 65L, 432L, 461L, 1004L) */ ((
									var_1_4
								) <= (
									/* 281L, 58L, 67L, 434L, 463L, 1006L) */ (max (
										/* 281L, 58L, 67L, 434L, 463L, 1006L) */ (
											var_1_4
										) , (
											var_1_5
										)
									))
								))
							) ? (
								/* 284L, 110L, 437L, 466L, 1009L) */ ((
									/* 285L, 77L, 81L, 438L, 467L, 1010L) */ ((
										var_1_4
									) < (
										var_1_5
									))
								) ? (
									/* 288L, 104L, 441L, 470L, 1013L) */ ((
										/* 289L, 88L, 94L, 442L, 471L, 1014L) */ ((
											var_1_4
										) >= (
											/* 291L, 87L, 96L, 444L, 473L, 1016L) */ ((
												var_1_4
											) ^ (
												4u
											))
										))
									) ? (
										/* 294L, 102L, 447L, 476L, 1019L) */ ((
											var_1_7
										) == (
											/* 294L, 102L, 447L, 476L, 1019L) */ ((float) (
												var_1_8
											))
										))
									) : (
										1
									))
								) : (
									/* 298L, 108L, 451L, 480L, 1023L) */ ((
										var_1_7
									) == (
										/* 298L, 108L, 451L, 480L, 1023L) */ ((float) (
											var_1_8
										))
									))
								))
							) : (
								/* 302L, 114L, 455L, 484L, 1027L) */ ((
									var_1_7
								) == (
									/* 302L, 114L, 455L, 484L, 1027L) */ ((float) (
										var_1_8
									))
								))
							))
						))
					) && (
						/* 307L, 146L, 521L, 537L, 1032L) */ ((
							/* 308L, 125L, 131L, 522L, 538L, 1033L) */ ((
								var_1_4
							) >= (
								/* 310L, 124L, 133L, 524L, 540L, 1035L) */ ((
									4256310412u
								) - (
									128u
								))
							))
						) ? (
							/* 313L, 144L, 527L, 543L, 1038L) */ ((
								var_1_9
							) == (
								/* 313L, 144L, 527L, 543L, 1038L) */ ((signed long int) (
									/* 316L, 143L, 530L, 546L, 1041L) */ ((
										/* 317L, 141L, 531L, 547L, 1042L) */ (abs (
											/* 318L, 140L, 532L, 548L, 1043L) */ ((
												var_1_10
											) + (
												var_1_11
											))
										))
									) + (
										var_1_12
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 324L, 203L, 606L, 632L, 1049L) */ ((
						/* 325L, 157L, 165L, 607L, 633L, 1050L) */ ((
							var_1_4
						) >= (
							/* 327L, 156L, 167L, 609L, 635L, 1052L) */ ((
								var_1_14
							) - (
								/* 329L, 155L, 169L, 611L, 637L, 1054L) */ (min (
									/* 329L, 155L, 169L, 611L, 637L, 1054L) */ (
										var_1_15
									) , (
										var_1_16
									)
								))
							))
						))
					) ? (
						/* 332L, 197L, 614L, 640L, 1057L) */ ((
							/* 333L, 177L, 181L, 615L, 641L, 1058L) */ ((
								var_1_16
							) < (
								var_1_9
							))
						) ? (
							/* 336L, 187L, 618L, 644L, 1061L) */ ((
								var_1_13
							) == (
								/* 336L, 187L, 618L, 644L, 1061L) */ ((unsigned char) (
									var_1_17
								))
							))
						) : (
							/* 340L, 195L, 622L, 648L, 1065L) */ ((
								var_1_13
							) == (
								/* 340L, 195L, 622L, 648L, 1065L) */ ((unsigned char) (
									var_1_18
								))
							))
						))
					) : (
						/* 344L, 201L, 626L, 652L, 1069L) */ ((
							var_1_13
						) == (
							/* 344L, 201L, 626L, 652L, 1069L) */ ((unsigned char) (
								var_1_18
							))
						))
					))
				))
			) && (
				/* 352L, 218L, 686L, 699L, 1077L) */ ((
					var_1_19
				) == (
					/* 352L, 218L, 686L, 699L, 1077L) */ ((unsigned char) (
						/* 355L, 217L, 689L, 702L, 1080L) */ ((
							var_1_20
						) + (
							/* 357L, 216L, 691L, 704L, 1082L) */ ((
								10
							) + (
								/* 359L, 215L, 693L, 706L, 1084L) */ (abs (
									var_1_21
								))
							))
						))
					))
				))
			))
		) && (
			/* 362L, 246L, 741L, 757L, 1087L) */ ((
				var_1_18
			) ? (
				/* 364L, 244L, 743L, 759L, 1089L) */ ((
					var_1_22
				) == (
					/* 364L, 244L, 743L, 759L, 1089L) */ ((unsigned char) (
						/* 367L, 243L, 746L, 762L, 1092L) */ ((
							/* 368L, 237L, 747L, 763L, 1093L) */ ((
								/* 369L, 235L, 748L, 764L, 1094L) */ (- (
									var_1_1
								))
							) <= (
								var_1_8
							))
						) && (
							/* 372L, 242L, 751L, 767L, 1097L) */ ((
								var_1_23
							) || (
								/* 374L, 241L, 753L, 769L, 1099L) */ ((
									var_1_24
								) || (
									var_1_25
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
		/* 379L, 254L, 786L, 792L, 1104L) */ ((
			var_1_26
		) == (
			/* 379L, 254L, 786L, 792L, 1104L) */ ((signed char) (
				var_1_21
			))
		))
	))
) && (
	/* 385L, 264L, 810L, 816L, 1110L) */ ((
		var_1_27
	) == (
		/* 385L, 264L, 810L, 816L, 1110L) */ ((unsigned short int) (
			var_1_21
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
