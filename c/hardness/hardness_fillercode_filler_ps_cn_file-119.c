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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch119Filler_PS_CN.c", 13, "reach_error"); }
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
double var_1_1 = 1.875;
double var_1_2 = 0.75;
double var_1_3 = 255.75;
float var_1_4 = 9999999999999.25;
unsigned char var_1_5 = 1;
float var_1_6 = 0.0;
float var_1_7 = 15.9;
signed short int var_1_8 = -256;
float var_1_9 = 127.25;
unsigned long int var_1_10 = 8;
unsigned long int var_1_11 = 1;
unsigned long int var_1_12 = 0;
signed short int var_1_13 = -16;
signed short int var_1_14 = -64;
signed short int var_1_15 = 16;
signed short int var_1_16 = 32;
unsigned short int var_1_17 = 1;
unsigned short int var_1_18 = 4;
unsigned short int var_1_19 = 33881;
double var_1_20 = 0.19999999999999996;
unsigned char var_1_21 = 0;
double var_1_22 = 63.75;
signed long int var_1_23 = 1;
signed char var_1_24 = 32;
signed char var_1_25 = 1;
signed long int var_1_26 = 0;
unsigned char var_1_27 = 1;
signed long int var_1_28 = 8;
signed long int var_1_29 = 64;
signed long int var_1_30 = 1912172090;
signed long int var_1_31 = 50;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 0;
signed long int var_1_35 = 128;
unsigned char var_1_36 = 64;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 128;
unsigned char var_1_39 = 50;
signed long int var_1_40 = -2;

// Calibration values

// Last'ed variables

// Additional functions


void initially(void) {
}



void step(void) {
	// From: CodeObject1
	/* 5L) */ var_1_24 = (
		var_1_25
	);


	// From: CodeObject2
	/* 25L) */ if (var_1_27) {
		/* 18L) */ var_1_26 = (
			/* 17L) */ ((
				25
			) - (
				var_1_28
			))
		);
	} else {
		/* 24L) */ var_1_26 = (
			/* 23L) */ (min (
				/* 23L) */ (
					var_1_25
				) , (
					var_1_24
				)
			))
		);
	}


	// From: CodeObject3
	/* 45L) */ if (/* 33L, 32L) */ (! (var_1_27))) {
		/* 44L) */ var_1_29 = (
			/* 43L) */ ((
				/* 41L) */ ((
					var_1_30
				) - (
					var_1_31
				))
			) - (
				var_1_28
			))
		);
	}


	// From: CodeObject4
	/* 109L) */ if (/* 52L, 51L) */ ((var_1_24) < (var_1_30))) {
		/* 83L) */ if (/* 61L, 60L) */ ((var_1_31) > (var_1_26))) {
			/* 76L) */ var_1_32 = (
				/* 75L) */ ((
					/* 73L) */ ((
						/* 71L) */ ((
							var_1_28
						) >= (
							var_1_24
						))
					) && (
						var_1_27
					))
				) || (
					var_1_33
				))
			);
		} else {
			/* 82L) */ var_1_32 = (
				/* 81L) */ ((
					var_1_33
				) && (
					var_1_34
				))
			);
		}
	} else {
		/* 107L) */ if (/* 88L, 87L) */ ((var_1_28) <= (var_1_31))) {
			/* 101L) */ if (var_1_33) {
				/* 100L) */ var_1_32 = (
					var_1_34
				);
			}
		} else {
			/* 106L) */ var_1_32 = (
				var_1_34
			);
		}
	}


	// From: CodeObject5
	/* 145L) */ if (/* 123L, 122L) */ ((/* 124L, 120L) */ ((/* 125L, 116L) */ (abs (var_1_31))) ^ (/* 127L, 119L) */ ((var_1_29) % (var_1_36))))) > (var_1_26))) {
		/* 144L) */ var_1_35 = (
			/* 143L) */ (abs (
				/* 142L) */ (abs (
					var_1_25
				))
			))
		);
	}


	// From: CodeObject6
	/* 174L) */ if (/* 154L, 153L) */ ((var_1_28) < (/* 156L, 152L) */ (max (/* 156L, 152L) */ (var_1_24) , (var_1_25)))))) {
		/* 167L) */ var_1_37 = (
			var_1_33
		);
	} else {
		/* 173L) */ var_1_37 = (
			/* 172L) */ ((
				var_1_33
			) && (
				var_1_34
			))
		);
	}


	// From: CodeObject7
	/* 193L) */ if (/* 181L, 180L) */ ((var_1_33) || (var_1_37))) {
		/* 192L) */ var_1_38 = (
			/* 191L) */ (abs (
				/* 190L) */ (abs (
					var_1_39
				))
			))
		);
	}


	// From: CodeObject8
	/* 218L) */ if (/* 202L, 201L) */ ((var_1_39) != (/* 204L, 200L) */ ((var_1_24) / (var_1_36))))) {
		/* 217L) */ var_1_40 = (
			/* 216L) */ ((
				var_1_28
			) - (
				var_1_36
			))
		);
	}


	// From: Req1Batch119Filler_PS_CN
	/* 791L, 7L, 239L, 249L) */ var_1_1 = (
		/* 794L, 6L, 242L, 252L) */ ((
			var_1_2
		) - (
			var_1_3
		))
	);


	// From: Req2Batch119Filler_PS_CN
	/* 799L, 29L, 277L, 289L) */ if (var_1_5) {
		/* 801L, 28L, 279L, 291L) */ var_1_4 = (
			/* 804L, 27L, 282L, 294L) */ ((
				var_1_3
			) - (
				/* 806L, 26L, 284L, 296L) */ ((
					var_1_6
				) - (
					var_1_7
				))
			))
		);
	}


	// From: Req3Batch119Filler_PS_CN
	unsigned long int stepLocal_0 = var_1_12;
	/* 831L, 77L, 324L, 345L) */ if (/* 817L, 41L, 42L, 325L, 346L) */ ((var_1_1) <= (/* 816L, 40L, 44L, 327L, 348L) */ ((var_1_6) / (var_1_9))))) {
		/* 826L, 71L, 330L, 351L) */ if (/* 821L, 56L, 57L, 331L, 352L) */ ((/* 820L, 54L, 58L, 332L, 353L) */ ((var_1_10) / (var_1_11))) == (stepLocal_0))) {
			/* 825L, 70L, 336L, 357L) */ var_1_8 = (
				var_1_13
			);
		}
	} else {
		/* 830L, 76L, 340L, 361L) */ var_1_8 = (
			var_1_13
		);
	}


	// From: Req4Batch119Filler_PS_CN
	/* 837L, 92L, 410L, 423L) */ var_1_14 = (
		/* 840L, 91L, 413L, 426L) */ (min (
			/* 840L, 91L, 413L, 426L) */ (
				/* 841L, 89L, 414L, 427L) */ ((
					/* 842L, 87L, 415L, 428L) */ ((
						10
					) + (
						var_1_15
					))
				) - (
					var_1_16
				))
			) , (
				var_1_13
			)
		))
	);


	// From: Req5Batch119Filler_PS_CN
	/* 849L, 118L, 461L, 479L) */ if (var_1_5) {
		/* 851L, 111L, 463L, 481L) */ var_1_17 = (
			/* 854L, 110L, 466L, 484L) */ ((
				/* 855L, 108L, 467L, 485L) */ (min (
					/* 855L, 108L, 467L, 485L) */ (
						var_1_16
					) , (
						var_1_15
					)
				))
			) + (
				var_1_18
			))
		);
	} else {
		/* 859L, 117L, 471L, 489L) */ var_1_17 = (
			/* 862L, 116L, 474L, 492L) */ ((
				var_1_19
			) - (
				var_1_18
			))
		);
	}


	// From: Req6Batch119Filler_PS_CN
	unsigned long int stepLocal_1 = var_1_11;
	/* 890L, 163L, 532L, 556L) */ if (/* 870L, 128L, 129L, 533L, 557L) */ ((stepLocal_1) < (var_1_10))) {
		/* 874L, 138L, 536L, 560L) */ var_1_20 = (
			var_1_2
		);
	} else {
		/* 889L, 161L, 540L, 564L) */ if (/* 878L, 142L, 143L, 541L, 565L) */ (! (/* 877L, 141L, 144L, 542L, 566L) */ ((var_1_5) || (var_1_21))))) {
			/* 888L, 160L, 545L, 569L) */ var_1_20 = (
				/* 887L, 159L, 548L, 572L) */ (max (
					/* 887L, 159L, 548L, 572L) */ (
						/* 883L, 155L, 549L, 573L) */ ((
							var_1_7
						) + (
							var_1_22
						))
					) , (
						/* 886L, 158L, 552L, 576L) */ (min (
							/* 886L, 158L, 552L, 576L) */ (
								99.9
							) , (
								var_1_3
							)
						))
					)
				))
			);
		}
	}


	// From: Req7Batch119Filler_PS_CN
	/* 895L, 230L, 629L, 669L) */ if (/* 896L, 172L, 173L, 630L, 670L) */ (! (/* 897L, 171L, 174L, 631L, 671L) */ ((var_1_16) < (var_1_8))))) {
		/* 900L, 202L, 634L, 674L) */ if (/* 901L, 183L, 184L, 635L, 675L) */ ((var_1_11) <= (var_1_16))) {
			/* 904L, 195L, 638L, 678L) */ var_1_23 = (
				/* 907L, 194L, 641L, 681L) */ ((
					var_1_15
				) + (
					var_1_8
				))
			);
		} else {
			/* 910L, 201L, 644L, 684L) */ var_1_23 = (
				/* 913L, 200L, 647L, 687L) */ ((
					-1
				) - (
					var_1_18
				))
			);
		}
	} else {
		/* 916L, 228L, 650L, 690L) */ if (/* 917L, 207L, 208L, 651L, 691L) */ ((/* 918L, 205L, 209L, 652L, 692L) */ (abs (var_1_7))) > (var_1_3))) {
			/* 921L, 223L, 655L, 695L) */ var_1_23 = (
				/* 924L, 222L, 658L, 698L) */ (max (
					/* 924L, 222L, 658L, 698L) */ (
						/* 925L, 220L, 659L, 699L) */ ((
							var_1_16
						) - (
							10
						))
					) , (
						var_1_8
					)
				))
			);
		} else {
			/* 929L, 227L, 663L, 703L) */ var_1_23 = (
				var_1_13
			);
		}
	}
}



void updateVariables(void) {
	var_1_2 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854766000e+12F && var_1_2 >= 1.0e-20F ));
	var_1_3 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
	var_1_5 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_5 >= 0);
	assume_abort_if_not(var_1_5 <= 1);
	var_1_6 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_6 >= 4611686.018427383000e+12F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
	var_1_7 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_7 >= 0.0F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
	var_1_9 = __VERIFIER_nondet_float();
	assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
	assume_abort_if_not(var_1_9 != 0.0F);
	var_1_10 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_10 >= 0);
	assume_abort_if_not(var_1_10 <= 4294967295);
	var_1_11 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_11 >= 0);
	assume_abort_if_not(var_1_11 <= 4294967295);
	assume_abort_if_not(var_1_11 != 0);
	var_1_12 = __VERIFIER_nondet_ulong();
	assume_abort_if_not(var_1_12 >= 0);
	assume_abort_if_not(var_1_12 <= 4294967295);
	var_1_13 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_13 >= -32767);
	assume_abort_if_not(var_1_13 <= 32766);
	var_1_15 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_15 >= 0);
	assume_abort_if_not(var_1_15 <= 16383);
	var_1_16 = __VERIFIER_nondet_short();
	assume_abort_if_not(var_1_16 >= 0);
	assume_abort_if_not(var_1_16 <= 32766);
	var_1_18 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_18 >= 0);
	assume_abort_if_not(var_1_18 <= 32767);
	var_1_19 = __VERIFIER_nondet_ushort();
	assume_abort_if_not(var_1_19 >= 32767);
	assume_abort_if_not(var_1_19 <= 65534);
	var_1_21 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_21 >= 0);
	assume_abort_if_not(var_1_21 <= 1);
	var_1_22 = __VERIFIER_nondet_double();
	assume_abort_if_not((var_1_22 >= -461168.6018427383000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
	var_1_25 = __VERIFIER_nondet_char();
	assume_abort_if_not(var_1_25 >= -127);
	assume_abort_if_not(var_1_25 <= 126);
	var_1_27 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_27 >= 0);
	assume_abort_if_not(var_1_27 <= 1);
	var_1_28 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_28 >= 0);
	assume_abort_if_not(var_1_28 <= 2147483646);
	var_1_30 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_30 >= 1073741822);
	assume_abort_if_not(var_1_30 <= 2147483646);
	var_1_31 = __VERIFIER_nondet_long();
	assume_abort_if_not(var_1_31 >= 0);
	assume_abort_if_not(var_1_31 <= 1073741823);
	var_1_33 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_33 >= 1);
	assume_abort_if_not(var_1_33 <= 1);
	var_1_34 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_34 >= 1);
	assume_abort_if_not(var_1_34 <= 1);
	var_1_36 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_36 >= 0);
	assume_abort_if_not(var_1_36 <= 255);
	assume_abort_if_not(var_1_36 != 0);
	var_1_39 = __VERIFIER_nondet_uchar();
	assume_abort_if_not(var_1_39 >= 0);
	assume_abort_if_not(var_1_39 <= 254);
}



void updateLastVariables(void) {
}

int property(void) {
	if (var_1_5) {
	}
	if (/* 243L, 41L, 47L, 367L, 388L, 957L) */ ((var_1_1) <= (/* 245L, 40L, 49L, 369L, 390L, 959L) */ ((var_1_6) / (var_1_9))))) {
		if (/* 249L, 56L, 62L, 373L, 394L, 963L) */ ((/* 250L, 54L, 63L, 374L, 395L, 964L) */ ((var_1_10) / (var_1_11))) == (var_1_12))) {
		}
	} else {
	}
	if (var_1_5) {
	} else {
	}
	if (/* 295L, 128L, 132L, 581L, 605L, 1009L) */ ((var_1_11) < (var_1_10))) {
	} else {
		if (/* 303L, 142L, 147L, 589L, 613L, 1017L) */ (! (/* 304L, 141L, 148L, 590L, 614L, 1018L) */ ((var_1_5) || (var_1_21))))) {
		}
	}
	if (/* 320L, 172L, 177L, 710L, 750L, 1034L) */ (! (/* 321L, 171L, 178L, 711L, 751L, 1035L) */ ((var_1_16) < (var_1_8))))) {
		if (/* 325L, 183L, 187L, 715L, 755L, 1039L) */ ((var_1_11) <= (var_1_16))) {
		} else {
		}
	} else {
		if (/* 341L, 207L, 212L, 731L, 771L, 1055L) */ ((/* 342L, 205L, 213L, 732L, 772L, 1056L) */ (abs (var_1_7))) > (var_1_3))) {
		} else {
		}
	}
	return /* 363L) */ ((
	/* 362L) */ ((
		/* 361L) */ ((
			/* 360L) */ ((
				/* 359L) */ ((
					/* 358L) */ ((
						/* 223L, 7L, 259L, 269L, 937L) */ ((
							var_1_1
						) == (
							/* 223L, 7L, 259L, 269L, 937L) */ ((double) (
								/* 226L, 6L, 262L, 272L, 940L) */ ((
									var_1_2
								) - (
									var_1_3
								))
							))
						))
					) && (
						/* 231L, 30L, 301L, 313L, 945L) */ ((
							var_1_5
						) ? (
							/* 233L, 28L, 303L, 315L, 947L) */ ((
								var_1_4
							) == (
								/* 233L, 28L, 303L, 315L, 947L) */ ((float) (
									/* 236L, 27L, 306L, 318L, 950L) */ ((
										var_1_3
									) - (
										/* 238L, 26L, 308L, 320L, 952L) */ ((
											var_1_6
										) - (
											var_1_7
										))
									))
								))
							))
						) : (
							1
						))
					))
				) && (
					/* 242L, 78L, 366L, 387L, 956L) */ ((
						/* 243L, 41L, 47L, 367L, 388L, 957L) */ ((
							var_1_1
						) <= (
							/* 245L, 40L, 49L, 369L, 390L, 959L) */ ((
								var_1_6
							) / (
								var_1_9
							))
						))
					) ? (
						/* 248L, 72L, 372L, 393L, 962L) */ ((
							/* 249L, 56L, 62L, 373L, 394L, 963L) */ ((
								/* 250L, 54L, 63L, 374L, 395L, 964L) */ ((
									var_1_10
								) / (
									var_1_11
								))
							) == (
								var_1_12
							))
						) ? (
							/* 254L, 70L, 378L, 399L, 968L) */ ((
								var_1_8
							) == (
								/* 254L, 70L, 378L, 399L, 968L) */ ((signed short int) (
									var_1_13
								))
							))
						) : (
							1
						))
					) : (
						/* 258L, 76L, 382L, 403L, 972L) */ ((
							var_1_8
						) == (
							/* 258L, 76L, 382L, 403L, 972L) */ ((signed short int) (
								var_1_13
							))
						))
					))
				))
			) && (
				/* 265L, 92L, 436L, 449L, 979L) */ ((
					var_1_14
				) == (
					/* 265L, 92L, 436L, 449L, 979L) */ ((signed short int) (
						/* 268L, 91L, 439L, 452L, 982L) */ (min (
							/* 268L, 91L, 439L, 452L, 982L) */ (
								/* 269L, 89L, 440L, 453L, 983L) */ ((
									/* 270L, 87L, 441L, 454L, 984L) */ ((
										10
									) + (
										var_1_15
									))
								) - (
									var_1_16
								))
							) , (
								var_1_13
							)
						))
					))
				))
			))
		) && (
			/* 277L, 119L, 497L, 515L, 991L) */ ((
				var_1_5
			) ? (
				/* 279L, 111L, 499L, 517L, 993L) */ ((
					var_1_17
				) == (
					/* 279L, 111L, 499L, 517L, 993L) */ ((unsigned short int) (
						/* 282L, 110L, 502L, 520L, 996L) */ ((
							/* 283L, 108L, 503L, 521L, 997L) */ (min (
								/* 283L, 108L, 503L, 521L, 997L) */ (
									var_1_16
								) , (
									var_1_15
								)
							))
						) + (
							var_1_18
						))
					))
				))
			) : (
				/* 287L, 117L, 507L, 525L, 1001L) */ ((
					var_1_17
				) == (
					/* 287L, 117L, 507L, 525L, 1001L) */ ((unsigned short int) (
						/* 290L, 116L, 510L, 528L, 1004L) */ ((
							var_1_19
						) - (
							var_1_18
						))
					))
				))
			))
		))
	) && (
		/* 294L, 164L, 580L, 604L, 1008L) */ ((
			/* 295L, 128L, 132L, 581L, 605L, 1009L) */ ((
				var_1_11
			) < (
				var_1_10
			))
		) ? (
			/* 298L, 138L, 584L, 608L, 1012L) */ ((
				var_1_20
			) == (
				/* 298L, 138L, 584L, 608L, 1012L) */ ((double) (
					var_1_2
				))
			))
		) : (
			/* 302L, 162L, 588L, 612L, 1016L) */ ((
				/* 303L, 142L, 147L, 589L, 613L, 1017L) */ (! (
					/* 304L, 141L, 148L, 590L, 614L, 1018L) */ ((
						var_1_5
					) || (
						var_1_21
					))
				))
			) ? (
				/* 307L, 160L, 593L, 617L, 1021L) */ ((
					var_1_20
				) == (
					/* 307L, 160L, 593L, 617L, 1021L) */ ((double) (
						/* 310L, 159L, 596L, 620L, 1024L) */ (max (
							/* 310L, 159L, 596L, 620L, 1024L) */ (
								/* 311L, 155L, 597L, 621L, 1025L) */ ((
									var_1_7
								) + (
									var_1_22
								))
							) , (
								/* 314L, 158L, 600L, 624L, 1028L) */ (min (
									/* 314L, 158L, 600L, 624L, 1028L) */ (
										99.9
									) , (
										var_1_3
									)
								))
							)
						))
					))
				))
			) : (
				1
			))
		))
	))
) && (
	/* 319L, 231L, 709L, 749L, 1033L) */ ((
		/* 320L, 172L, 177L, 710L, 750L, 1034L) */ (! (
			/* 321L, 171L, 178L, 711L, 751L, 1035L) */ ((
				var_1_16
			) < (
				var_1_8
			))
		))
	) ? (
		/* 324L, 203L, 714L, 754L, 1038L) */ ((
			/* 325L, 183L, 187L, 715L, 755L, 1039L) */ ((
				var_1_11
			) <= (
				var_1_16
			))
		) ? (
			/* 328L, 195L, 718L, 758L, 1042L) */ ((
				var_1_23
			) == (
				/* 328L, 195L, 718L, 758L, 1042L) */ ((signed long int) (
					/* 331L, 194L, 721L, 761L, 1045L) */ ((
						var_1_15
					) + (
						var_1_8
					))
				))
			))
		) : (
			/* 334L, 201L, 724L, 764L, 1048L) */ ((
				var_1_23
			) == (
				/* 334L, 201L, 724L, 764L, 1048L) */ ((signed long int) (
					/* 337L, 200L, 727L, 767L, 1051L) */ ((
						-1
					) - (
						var_1_18
					))
				))
			))
		))
	) : (
		/* 340L, 229L, 730L, 770L, 1054L) */ ((
			/* 341L, 207L, 212L, 731L, 771L, 1055L) */ ((
				/* 342L, 205L, 213L, 732L, 772L, 1056L) */ (abs (
					var_1_7
				))
			) > (
				var_1_3
			))
		) ? (
			/* 345L, 223L, 735L, 775L, 1059L) */ ((
				var_1_23
			) == (
				/* 345L, 223L, 735L, 775L, 1059L) */ ((signed long int) (
					/* 348L, 222L, 738L, 778L, 1062L) */ (max (
						/* 348L, 222L, 738L, 778L, 1062L) */ (
							/* 349L, 220L, 739L, 779L, 1063L) */ ((
								var_1_16
							) - (
								10
							))
						) , (
							var_1_8
						)
					))
				))
			))
		) : (
			/* 353L, 227L, 743L, 783L, 1067L) */ ((
				var_1_23
			) == (
				/* 353L, 227L, 743L, 783L, 1067L) */ ((signed long int) (
					var_1_13
				))
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
